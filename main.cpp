#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QButtonGroup>
#include <QProgressBar>
#include <QFrame>
#include <QStackedWidget>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

struct Question {
    QString question;
    QStringList choices;
    QString answer;
    QString fact;
    QString hint;
};

// ERKLÆRING AF DE TRE DEL-FILER
std::vector<Question> getPart1Questions();
std::vector<Question> getPart2Questions();
std::vector<Question> getPart3Questions();
std::vector<Question> getPart4Questions();

class EASAQuizWindow : public QWidget {
private:
    std::vector<Question> all_questions;
    std::vector<Question> quiz_questions;
    int current_index = 0;
    int score = 0;
    bool showingFeedback = false;

    // Core UI
    QVBoxLayout *windowLayout;
    QStackedWidget *stackedWidget;

    // Pages
    QWidget *startPage;
    QWidget *quizPage;
    QWidget *resultPage;

    // Start Page Elements
    int selectedQuestionCount = 15;
    QLabel *questionCountLabel;

    // Quiz Page Elements
    QLabel *headerLabel;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QLabel *questionLabel;
    QVBoxLayout *choiceLayout;
    std::vector<QPushButton*> choiceButtons;
    QButtonGroup *buttonGroup;
    QLabel *feedbackLabel;
    QPushButton *hintButton;
    QPushButton *nextButton;
    bool hintVisible = false;

    // Result Page Elements
    QLabel *scoreRes;
    QLabel *sText;
    QLabel *fText;

public:
    EASAQuizWindow(QWidget *parent = nullptr) : QWidget(parent) {
        setWindowTitle("EASA Part-66 B2 Exam Preparation");
        setFixedSize(940, 680);

        // Moderne 2026 Dark Theme (QSS Styling)
        setStyleSheet(R"(
            QWidget {
                background-color: #0f172a;
                color: #f8fafc;
                font-family: 'Segoe UI', 'Helvetica Neue', sans-serif;
                font-size: 11pt;
            }
            QFrame#Card {
                background-color: #1e293b;
                border-radius: 20px;
            }
            QFrame#HeaderCard {
                background-color: #1e293b;
                border-radius: 15px;
            }
            QPushButton {
                background-color: #0ea5e9;
                color: white;
                border: none;
                border-radius: 12px;
                padding: 10px 24px;
                font-weight: bold;
                font-size: 12pt;
            }
            QPushButton:hover {
                background-color: #0284c7;
            }
            QPushButton:disabled {
                background-color: #334155;
                color: #94a3b8;
            }
            QPushButton#SecondaryBtn {
                background-color: #334155;
                color: #e2e8f0;
            }
            QPushButton#SecondaryBtn:hover {
                background-color: #475569;
            }
            QPushButton#ChoiceBtn {
                background-color: #111827;
                border: 2px solid #334155;
                border-radius: 14px;
                text-align: left;
                padding: 16px 20px;
                font-weight: normal;
                font-size: 12pt;
                color: #e2e8f0;
            }
            QPushButton#ChoiceBtn:hover {
                background-color: #1e293b;
                border: 2px solid #38bdf8;
                color: #38bdf8;
            }
            QPushButton#ChoiceBtn:disabled {
                color: #64748b;
            }
            QProgressBar {
                background-color: #1e293b;
                border: none;
                border-radius: 5px;
                height: 10px;
            }
            QProgressBar::chunk {
                background-color: #38bdf8;
                border-radius: 5px;
            }
        )");

        loadQuestions();

        if (all_questions.empty()) {
            selectedQuestionCount = 1;
        } else {
            selectedQuestionCount = std::min(15, (int)all_questions.size());
        }

        windowLayout = new QVBoxLayout(this);
        windowLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(this);
        windowLayout->addWidget(stackedWidget);

        buildStartPage();
        buildQuizPage();
        buildResultPage();

        stackedWidget->addWidget(startPage);
        stackedWidget->addWidget(quizPage);
        stackedWidget->addWidget(resultPage);

        stackedWidget->setCurrentWidget(startPage);
    }

    // Henter og samler alle spørgsmål fra de tre separate C++ filer
    void loadQuestions() {
        all_questions.clear();

        auto p1 = getPart1Questions();
        auto p2 = getPart2Questions();
        auto p3 = getPart3Questions();
        auto p4 = getPart4Questions();

        all_questions.insert(all_questions.end(), p1.begin(), p1.end());
        all_questions.insert(all_questions.end(), p2.begin(), p2.end());
        all_questions.insert(all_questions.end(), p3.begin(), p3.end());
        all_questions.insert(all_questions.end(), p4.begin(), p4.end());
    }

    void buildStartPage() {
        startPage = new QWidget();
        QVBoxLayout *layout = new QVBoxLayout(startPage);
        layout->setAlignment(Qt::AlignCenter);

        QFrame *box = new QFrame();
        box->setObjectName("Card");
        box->setFixedSize(550, 350);
        QVBoxLayout *boxLayout = new QVBoxLayout(box);
        boxLayout->setAlignment(Qt::AlignCenter);
        boxLayout->setSpacing(25);

        QLabel *title = new QLabel("EASA B2 Exam Setup");
        title->setStyleSheet("font-size: 22pt; font-weight: bold; color: #38bdf8; background: transparent;");
        title->setAlignment(Qt::AlignCenter);

        QLabel *subTitle = new QLabel("How many questions do you want to answer?");
        subTitle->setStyleSheet("font-size: 13pt; color: #cbd5e1; background: transparent;");
        subTitle->setAlignment(Qt::AlignCenter);

        QFrame *counterFrame = new QFrame();
        counterFrame->setStyleSheet("background-color: #111827; border: 2px solid #334155; border-radius: 12px;");
        counterFrame->setFixedSize(220, 60);

        QHBoxLayout *counterLayout = new QHBoxLayout(counterFrame);
        counterLayout->setContentsMargins(5, 5, 5, 5);
        counterLayout->setSpacing(0);

        QPushButton *minusBtn = new QPushButton("-");
        minusBtn->setFixedSize(46, 46);
        minusBtn->setCursor(Qt::PointingHandCursor);
        minusBtn->setStyleSheet("background-color: #334155; color: white; font-size: 20pt; font-weight: bold; border-radius: 8px; padding: 0px;");

        questionCountLabel = new QLabel(QString::number(selectedQuestionCount));
        questionCountLabel->setAlignment(Qt::AlignCenter);
        questionCountLabel->setStyleSheet("font-size: 18pt; font-weight: bold; color: #38bdf8; background: transparent; border: none;");

        QPushButton *plusBtn = new QPushButton("+");
        plusBtn->setFixedSize(46, 46);
        plusBtn->setCursor(Qt::PointingHandCursor);
        plusBtn->setStyleSheet("background-color: #334155; color: white; font-size: 20pt; font-weight: bold; border-radius: 8px; padding: 0px;");

        counterLayout->addWidget(minusBtn);
        counterLayout->addWidget(questionCountLabel);
        counterLayout->addWidget(plusBtn);

        connect(minusBtn, &QPushButton::clicked, this, [this]() {
            if (selectedQuestionCount > 1) {
                selectedQuestionCount--;
                questionCountLabel->setText(QString::number(selectedQuestionCount));
            }
        });

        connect(plusBtn, &QPushButton::clicked, this, [this]() {
            int max_q = std::max(1, (int)all_questions.size());
            if (selectedQuestionCount < max_q) {
                selectedQuestionCount++;
                questionCountLabel->setText(QString::number(selectedQuestionCount));
            }
        });

        QPushButton *startBtn = new QPushButton("Start Quiz ➔");
        startBtn->setCursor(Qt::PointingHandCursor);
        startBtn->setFixedSize(220, 50);
        connect(startBtn, &QPushButton::clicked, this, &EASAQuizWindow::startQuiz);

        boxLayout->addWidget(title);
        boxLayout->addWidget(subTitle);
        boxLayout->addWidget(counterFrame, 0, Qt::AlignHCenter);
        boxLayout->addWidget(startBtn, 0, Qt::AlignHCenter);

        layout->addWidget(box);
    }

    void buildQuizPage() {
        quizPage = new QWidget();
        QVBoxLayout *layout = new QVBoxLayout(quizPage);
        layout->setContentsMargins(30, 30, 30, 30);
        layout->setSpacing(20);

        QFrame *headerCard = new QFrame();
        headerCard->setObjectName("HeaderCard");
        QHBoxLayout *headerLayout = new QHBoxLayout(headerCard);
        headerLayout->setContentsMargins(24, 16, 24, 16);

        headerLabel = new QLabel("EASA Part-66 B2 Exam Preparation");
        headerLabel->setStyleSheet("font-size: 16pt; font-weight: bold; color: #38bdf8; background: transparent;");

        progressLabel = new QLabel();
        progressLabel->setStyleSheet("font-size: 11pt; color: #94a3b8; background: transparent; font-weight: bold;");

        headerLayout->addWidget(headerLabel);
        headerLayout->addStretch();
        headerLayout->addWidget(progressLabel);
        layout->addWidget(headerCard);

        progressBar = new QProgressBar();
        progressBar->setTextVisible(false);
        layout->addWidget(progressBar);

        QFrame *cardFrame = new QFrame();
        cardFrame->setObjectName("Card");
        QVBoxLayout *cardLayout = new QVBoxLayout(cardFrame);
        cardLayout->setContentsMargins(35, 35, 35, 35);
        cardLayout->setSpacing(20);

        questionLabel = new QLabel();
        questionLabel->setWordWrap(true);
        questionLabel->setStyleSheet("font-size: 14pt; font-weight: bold; color: #f8fafc; background: transparent;");
        questionLabel->setMinimumHeight(60);
        questionLabel->setAlignment(Qt::AlignTop | Qt::AlignLeft);
        cardLayout->addWidget(questionLabel);

        choiceLayout = new QVBoxLayout();
        choiceLayout->setSpacing(14);
        buttonGroup = new QButtonGroup(this);
        cardLayout->addLayout(choiceLayout);

        feedbackLabel = new QLabel();
        feedbackLabel->setWordWrap(true);
        feedbackLabel->setStyleSheet("font-size: 11pt; background: transparent;");
        feedbackLabel->setMinimumHeight(80);
        feedbackLabel->setAlignment(Qt::AlignTop | Qt::AlignLeft);
        cardLayout->addWidget(feedbackLabel);

        QHBoxLayout *actionLayout = new QHBoxLayout();
        hintButton = new QPushButton("Show hint");
        hintButton->setObjectName("SecondaryBtn");
        hintButton->setCursor(Qt::PointingHandCursor);
        connect(hintButton, &QPushButton::clicked, this, &EASAQuizWindow::toggleHint);

        nextButton = new QPushButton("Continue ➔");
        nextButton->setCursor(Qt::PointingHandCursor);

        QSizePolicy sp_retain = nextButton->sizePolicy();
        sp_retain.setRetainSizeWhenHidden(true);
        nextButton->setSizePolicy(sp_retain);

        connect(nextButton, &QPushButton::clicked, this, &EASAQuizWindow::goToNextQuestion);
        nextButton->setVisible(false);

        actionLayout->addWidget(hintButton);
        actionLayout->addStretch();
        actionLayout->addWidget(nextButton);
        cardLayout->addLayout(actionLayout);

        layout->addWidget(cardFrame);
    }

    void buildResultPage() {
        resultPage = new QWidget();
        QVBoxLayout *layout = new QVBoxLayout(resultPage);
        layout->setContentsMargins(30, 30, 30, 30);

        QFrame *resultCard = new QFrame();
        resultCard->setObjectName("Card");
        QVBoxLayout *resLayout = new QVBoxLayout(resultCard);
        resLayout->setContentsMargins(40, 40, 40, 40);
        resLayout->setSpacing(20);

        QLabel *titleRes = new QLabel("Quiz Completed!");
        titleRes->setStyleSheet("font-size: 22pt; font-weight: bold; color: #38bdf8; background: transparent;");
        resLayout->addWidget(titleRes);

        scoreRes = new QLabel("");
        scoreRes->setStyleSheet("font-size: 14pt; color: #f8fafc; background: transparent;");
        resLayout->addWidget(scoreRes);

        QHBoxLayout *boxesLayout = new QHBoxLayout();
        boxesLayout->setSpacing(20);

        QFrame *strengthBox = new QFrame();
        strengthBox->setStyleSheet("background-color: #111827; border-radius: 16px; border: 1px solid #1e293b;");
        QVBoxLayout *sLayout = new QVBoxLayout(strengthBox);
        sLayout->setContentsMargins(24, 24, 24, 24);
        QLabel *sTitle = new QLabel("Strengths");
        sTitle->setStyleSheet("font-size: 13pt; font-weight: bold; color: #4ade80; background: transparent; border: none;");
        sText = new QLabel("");
        sText->setWordWrap(true);
        sText->setStyleSheet("color: #cbd5e1; background: transparent; border: none; font-size: 11pt; margin-top: 10px;");
        sLayout->addWidget(sTitle);
        sLayout->addWidget(sText);
        sLayout->addStretch();

        QFrame *focusBox = new QFrame();
        focusBox->setStyleSheet("background-color: #111827; border-radius: 16px; border: 1px solid #1e293b;");
        QVBoxLayout *fLayout = new QVBoxLayout(focusBox);
        fLayout->setContentsMargins(24, 24, 24, 24);
        QLabel *fTitle = new QLabel("Focus Areas");
        fTitle->setStyleSheet("font-size: 13pt; font-weight: bold; color: #f87171; background: transparent; border: none;");
        fText = new QLabel("Review the topics where you answered incorrectly and consult your Lufthansa Technical Training (LTT) manuals.");
        fText->setWordWrap(true);
        fText->setStyleSheet("color: #cbd5e1; background: transparent; border: none; font-size: 11pt; margin-top: 10px;");
        fLayout->addWidget(fTitle);
        fLayout->addWidget(fText);
        fLayout->addStretch();

        boxesLayout->addWidget(strengthBox);
        boxesLayout->addWidget(focusBox);
        resLayout->addLayout(boxesLayout);

        QHBoxLayout *btnResLayout = new QHBoxLayout();
        btnResLayout->setContentsMargins(0, 20, 0, 0);

        QPushButton *restartBtn = new QPushButton("Take a new quiz");
        restartBtn->setCursor(Qt::PointingHandCursor);
        connect(restartBtn, &QPushButton::clicked, [this]() {
            loadQuestions();
            stackedWidget->setCurrentWidget(startPage);
        });

        QPushButton *exitBtn = new QPushButton("Exit program");
        exitBtn->setObjectName("SecondaryBtn");
        exitBtn->setCursor(Qt::PointingHandCursor);
        connect(exitBtn, &QPushButton::clicked, qApp, &QApplication::quit);

        btnResLayout->addWidget(restartBtn);
        btnResLayout->addStretch();
        btnResLayout->addWidget(exitBtn);
        resLayout->addLayout(btnResLayout);

        layout->addWidget(resultCard);
    }

    void startQuiz() {
        if (all_questions.empty()) {
            return;
        }

        int num_q = std::min(selectedQuestionCount, (int)all_questions.size());

        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(all_questions.begin(), all_questions.end(), g);

        quiz_questions.assign(all_questions.begin(), all_questions.begin() + num_q);

        current_index = 0;
        score = 0;
        progressBar->setRange(0, quiz_questions.size());

        stackedWidget->setCurrentWidget(quizPage);
        showQuestion();
    }

    void showQuestion() {
        if (current_index >= (int)quiz_questions.size()) {
            showResults();
            return;
        }

        Question q = quiz_questions[current_index];
        questionLabel->setText(q.question);
        progressLabel->setText(QString("Question %1 of %2").arg(current_index + 1).arg(quiz_questions.size()));
        progressBar->setValue(current_index + 1);

        feedbackLabel->clear();
        hintButton->setText("Show hint");
        hintVisible = false;
        nextButton->setVisible(false);
        showingFeedback = false;

        for (QPushButton *btn : choiceButtons) {
            choiceLayout->removeWidget(btn);
            delete btn;
        }
        choiceButtons.clear();

        std::vector<QString> choices(q.choices.begin(), q.choices.end());
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(choices.begin(), choices.end(), g);

        for (int i = 0; i < (int)choices.size(); ++i) {
            QString letter = QString(QChar('A' + i));
            QString choiceText = choices[i];

            QPushButton *btn = new QPushButton();
            btn->setObjectName("ChoiceBtn");
            btn->setCursor(Qt::PointingHandCursor);
            btn->setText(QString("%1.  %2").arg(letter, choiceText));

            connect(btn, &QPushButton::clicked, this, [this, btn, choiceText]() {
                if (!showingFeedback) {
                    evaluateAnswer(btn, choiceText);
                }
            });

            choiceLayout->addWidget(btn);
            choiceButtons.push_back(btn);
        }
    }

    void toggleHint() {
        if (current_index >= (int)quiz_questions.size()) return;
        hintVisible = !hintVisible;
        if (hintVisible) {
            hintButton->setText("Hide hint");
            feedbackLabel->setText("Hint: " + quiz_questions[current_index].hint);
            feedbackLabel->setStyleSheet("font-size: 11pt; color: #fbbf24; background: transparent; font-style: italic;");
        } else {
            hintButton->setText("Show hint");
            feedbackLabel->clear();
        }
    }

    void evaluateAnswer(QPushButton* selectedBtn, QString rawSelectedText) {
        QString correctAnswer = quiz_questions[current_index].answer;
        bool isCorrect = (rawSelectedText == correctAnswer);

        for (QPushButton *btn : choiceButtons) {
            btn->setEnabled(false);

            if (btn->text().contains(correctAnswer)) {
                btn->setStyleSheet(
                    "QPushButton#ChoiceBtn {"
                    "background-color: rgba(74, 222, 128, 0.15);"
                    "border: 2px solid #4ade80;"
                    "color: #4ade80;"
                    "text-align: left;"
                    "padding: 16px 20px;"
                    "border-radius: 14px;"
                    "font-size: 12pt;"
                    "}"
                    );
            }
        }

        if (isCorrect) {
            score++;
            selectedBtn->setStyleSheet(
                "QPushButton#ChoiceBtn {"
                "background-color: rgba(74, 222, 128, 0.15);"
                "border: 2px solid #4ade80;"
                "color: #4ade80;"
                "text-align: left;"
                "padding: 16px 20px;"
                "border-radius: 14px;"
                "font-size: 12pt;"
                "font-weight: bold;"
                "}"
                );
            feedbackLabel->setStyleSheet("font-size: 11pt; color: #4ade80; background: transparent; padding-top: 5px;");
            feedbackLabel->setText("<b>✓ Correct!</b><br>" + quiz_questions[current_index].fact);
        } else {
            selectedBtn->setStyleSheet(
                "QPushButton#ChoiceBtn {"
                "background-color: rgba(248, 113, 113, 0.15);"
                "border: 2px solid #f87171;"
                "color: #f87171;"
                "text-align: left;"
                "padding: 16px 20px;"
                "border-radius: 14px;"
                "font-size: 12pt;"
                "font-weight: bold;"
                "}"
                );
            feedbackLabel->setStyleSheet("font-size: 11pt; color: #f87171; background: transparent; padding-top: 5px;");
            feedbackLabel->setText("<b>✗ Incorrect.</b><br>" + quiz_questions[current_index].fact);
        }

        showingFeedback = true;
        nextButton->setVisible(true);
    }

    void goToNextQuestion() {
        current_index++;
        showQuestion();
    }

    void showResults() {
        int pct = ((double)score / quiz_questions.size()) * 100.0;
        scoreRes->setText(QString("You got %1 out of %2 correct (%3%)").arg(score).arg(quiz_questions.size()).arg(pct));
        sText->setText(pct >= 60 ? "You have a solid understanding of the syllabus and performed well." : "Good start! Keep practicing to strengthen your results.");
        stackedWidget->setCurrentWidget(resultPage);
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    EASAQuizWindow window;
    window.show();
    return app.exec();
}