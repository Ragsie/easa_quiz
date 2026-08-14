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
#include <QComboBox>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

#include "question.h"

// =================================================================
// ERKLÆRINGER AF ALLE DINE ATA-FILER (Fra dit projektbillede)
// =================================================================
std::vector<Question> getATA06Questions();
std::vector<Question> getATA21Questions();
std::vector<Question> getATA22Questions();
std::vector<Question> getATA23Questions();
std::vector<Question> getATA24Questions();
std::vector<Question> getATA25Questions();
std::vector<Question> getATA26Questions();
std::vector<Question> getATA27Questions();
std::vector<Question> getATA28Questions();
std::vector<Question> getATA29Questions();
std::vector<Question> getATA30Questions();
std::vector<Question> getATA31Questions();
std::vector<Question> getATA32Questions();
std::vector<Question> getATA33Questions();
std::vector<Question> getATA34Questions();
std::vector<Question> getATA35Questions();
std::vector<Question> getATA36Questions();
std::vector<Question> getATA38Questions();
std::vector<Question> getATA42Questions();
std::vector<Question> getATA44Questions();
std::vector<Question> getATA46Questions();
std::vector<Question> getATAtofQuestions(); // Theory of Flight

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

    // Start Page Filter Elements
    QComboBox *moduleCombo;
    QComboBox *ataCombo;
    QLabel *availableCountLabel;
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
        setFixedSize(960, 720);

        // Dark-Mode Tema
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
            QComboBox {
                background-color: #111827;
                border: 2px solid #334155;
                border-radius: 10px;
                padding: 8px 12px;
                color: #f8fafc;
                font-size: 11pt;
            }
            QComboBox:hover {
                border: 2px solid #38bdf8;
            }
            QComboBox QAbstractItemView {
                background-color: #1e293b;
                color: #f8fafc;
                selection-background-color: #0284c7;
                selection-color: white;
                border: 1px solid #334155;
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
            QPushButton#RandomBtn {
                background-color: #8b5cf6;
                color: white;
            }
            QPushButton#RandomBtn:hover {
                background-color: #7c3aed;
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
        updateFilterCount();
    }

    // Indlæser og tildeler ATA og Modul 13 til alle filer
    void loadQuestions() {
        all_questions.clear();

        auto addATA = [this](std::vector<Question> list, int ataNum, int modNum) {
            for (auto &q : list) {
                q.ata = ataNum;
                q.module = modNum;
                all_questions.push_back(q);
            }
        };

        addATA(getATA06Questions(), 6, 13);
        addATA(getATA21Questions(), 21, 13);
        addATA(getATA22Questions(), 22, 13);
        addATA(getATA23Questions(), 23, 13);
        addATA(getATA24Questions(), 24, 13);
        addATA(getATA25Questions(), 25, 13);
        addATA(getATA26Questions(), 26, 13);
        addATA(getATA27Questions(), 27, 13);
        addATA(getATA28Questions(), 28, 13);
        addATA(getATA29Questions(), 29, 13);
        addATA(getATA30Questions(), 30, 13);
        addATA(getATA31Questions(), 31, 13);
        addATA(getATA32Questions(), 32, 13);
        addATA(getATA33Questions(), 33, 13);
        addATA(getATA34Questions(), 34, 13);
        addATA(getATA35Questions(), 35, 13);
        addATA(getATA36Questions(), 36, 13);
        addATA(getATA38Questions(), 38, 13);
        addATA(getATA42Questions(), 42, 13);
        addATA(getATA44Questions(), 44, 13);
        addATA(getATA46Questions(), 46, 13);
        addATA(getATAtofQuestions(), 99, 13); // 99 bruges som ID for Theory of Flight
    }

    std::vector<Question> getFilteredQuestions() {
        int selectedModule = moduleCombo->currentData().toInt();
        int selectedATA = ataCombo->currentData().toInt();

        std::vector<Question> filtered;
        for (const auto &q : all_questions) {
            bool moduleMatch = (selectedModule == 0 || q.module == selectedModule);
            bool ataMatch = (selectedATA == 0 || q.ata == selectedATA);
            if (moduleMatch && ataMatch) {
                filtered.push_back(q);
            }
        }
        return filtered;
    }

    void updateFilterCount() {
        auto filtered = getFilteredQuestions();
        int available = filtered.size();

        availableCountLabel->setText(QString("(%1 questions available)").arg(available));

        if (available == 0) {
            selectedQuestionCount = 0;
        } else {
            selectedQuestionCount = std::min(selectedQuestionCount > 0 ? selectedQuestionCount : 15, available);
        }
        questionCountLabel->setText(QString::number(selectedQuestionCount));
    }

    void buildStartPage() {
        startPage = new QWidget();
        QVBoxLayout *layout = new QVBoxLayout(startPage);
        layout->setAlignment(Qt::AlignCenter);

        QFrame *box = new QFrame();
        box->setObjectName("Card");
        box->setFixedSize(680, 530);
        QVBoxLayout *boxLayout = new QVBoxLayout(box);
        boxLayout->setContentsMargins(40, 30, 40, 30);
        boxLayout->setSpacing(16);

        QLabel *title = new QLabel("EASA B2 Exam Setup");
        title->setStyleSheet("font-size: 20pt; font-weight: bold; color: #38bdf8; background: transparent;");
        title->setAlignment(Qt::AlignCenter);

        // 1. Modul Vælger
        QLabel *modLabel = new QLabel("Select EASA Module:");
        modLabel->setStyleSheet("font-size: 11pt; color: #cbd5e1; background: transparent; font-weight: bold;");
        moduleCombo = new QComboBox();
        moduleCombo->addItem("All Modules", 0);
        moduleCombo->addItem("Module 13 - Aircraft Systems & Avionics", 13);

        // 2. ATA Vælger (Fuldstændig liste af alle dine filer)
        QLabel *ataLabel = new QLabel("Select ATA Chapter:");
        ataLabel->setStyleSheet("font-size: 11pt; color: #cbd5e1; background: transparent; font-weight: bold;");
        ataCombo = new QComboBox();
        ataCombo->addItem("All ATA Chapters", 0);
        ataCombo->addItem("ATA 06 - Dimensions & Areas", 6);
        ataCombo->addItem("ATA 21 - Air Conditioning & Pressurisation", 21);
        ataCombo->addItem("ATA 22 - Auto Flight", 22);
        ataCombo->addItem("ATA 23 - Communications", 23);
        ataCombo->addItem("ATA 24 - Electrical Power", 24);
        ataCombo->addItem("ATA 25 - Equipment / Furnishings", 25);
        ataCombo->addItem("ATA 26 - Fire Protection", 26);
        ataCombo->addItem("ATA 27 - Flight Controls", 27);
        ataCombo->addItem("ATA 28 - Fuel Systems", 28);
        ataCombo->addItem("ATA 29 - Hydraulic Power", 29);
        ataCombo->addItem("ATA 30 - Ice & Rain Protection", 30);
        ataCombo->addItem("ATA 31 - Indicating & Recording", 31);
        ataCombo->addItem("ATA 32 - Landing Gear & Brakes", 32);
        ataCombo->addItem("ATA 33 - Lights", 33);
        ataCombo->addItem("ATA 34 - Navigation", 34);
        ataCombo->addItem("ATA 35 - Oxygen", 35);
        ataCombo->addItem("ATA 36 - Pneumatics", 36);
        ataCombo->addItem("ATA 38 - Water / Waste", 38);
        ataCombo->addItem("ATA 42 - Integrated Modular Avionics", 42);
        ataCombo->addItem("ATA 44 - Cabin Systems", 44);
        ataCombo->addItem("ATA 46 - Information Systems", 46);
        ataCombo->addItem("Theory of Flight (Aerodynamics)", 99);

        // 3. Spørgsmålstæller
        QHBoxLayout *countHeaderLayout = new QHBoxLayout();
        QLabel *countTitle = new QLabel("Number of Questions:");
        countTitle->setStyleSheet("font-size: 11pt; color: #cbd5e1; background: transparent; font-weight: bold;");
        availableCountLabel = new QLabel("");
        availableCountLabel->setStyleSheet("font-size: 10pt; color: #94a3b8; background: transparent;");
        countHeaderLayout->addWidget(countTitle);
        countHeaderLayout->addWidget(availableCountLabel);
        countHeaderLayout->addStretch();

        QFrame *counterFrame = new QFrame();
        counterFrame->setStyleSheet("background-color: #111827; border: 2px solid #334155; border-radius: 12px;");
        counterFrame->setFixedSize(220, 48);

        QHBoxLayout *counterLayout = new QHBoxLayout(counterFrame);
        counterLayout->setContentsMargins(5, 4, 5, 4);

        QPushButton *minusBtn = new QPushButton("-");
        minusBtn->setFixedSize(38, 38);
        minusBtn->setCursor(Qt::PointingHandCursor);
        minusBtn->setStyleSheet("background-color: #334155; color: white; font-size: 18pt; font-weight: bold; border-radius: 8px; padding: 0px;");

        questionCountLabel = new QLabel(QString::number(selectedQuestionCount));
        questionCountLabel->setAlignment(Qt::AlignCenter);
        questionCountLabel->setStyleSheet("font-size: 16pt; font-weight: bold; color: #38bdf8; background: transparent; border: none;");

        QPushButton *plusBtn = new QPushButton("+");
        plusBtn->setFixedSize(38, 38);
        plusBtn->setCursor(Qt::PointingHandCursor);
        plusBtn->setStyleSheet("background-color: #334155; color: white; font-size: 18pt; font-weight: bold; border-radius: 8px; padding: 0px;");

        counterLayout->addWidget(minusBtn);
        counterLayout->addWidget(questionCountLabel);
        counterLayout->addWidget(plusBtn);

        connect(moduleCombo, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &EASAQuizWindow::updateFilterCount);
        connect(ataCombo, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &EASAQuizWindow::updateFilterCount);

        connect(minusBtn, &QPushButton::clicked, this, [this]() {
            if (selectedQuestionCount > 1) {
                selectedQuestionCount--;
                questionCountLabel->setText(QString::number(selectedQuestionCount));
            }
        });

        connect(plusBtn, &QPushButton::clicked, this, [this]() {
            int max_q = getFilteredQuestions().size();
            if (selectedQuestionCount < max_q) {
                selectedQuestionCount++;
                questionCountLabel->setText(QString::number(selectedQuestionCount));
            }
        });

        // Knapper
        QHBoxLayout *btnLayout = new QHBoxLayout();

        QPushButton *startBtn = new QPushButton("Start Quiz ➔");
        startBtn->setCursor(Qt::PointingHandCursor);
        startBtn->setFixedHeight(46);
        connect(startBtn, &QPushButton::clicked, this, &EASAQuizWindow::startQuiz);

        QPushButton *randomBtn = new QPushButton("🎲 Random All");
        randomBtn->setObjectName("RandomBtn");
        randomBtn->setCursor(Qt::PointingHandCursor);
        randomBtn->setFixedHeight(46);
        connect(randomBtn, &QPushButton::clicked, this, &EASAQuizWindow::startRandomQuiz);

        btnLayout->addWidget(startBtn);
        btnLayout->addWidget(randomBtn);

        boxLayout->addWidget(title);
        boxLayout->addWidget(modLabel);
        boxLayout->addWidget(moduleCombo);
        boxLayout->addWidget(ataLabel);
        boxLayout->addWidget(ataCombo);
        boxLayout->addLayout(countHeaderLayout);
        boxLayout->addWidget(counterFrame, 0, Qt::AlignHCenter);
        boxLayout->addSpacing(8);
        boxLayout->addLayout(btnLayout);

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
            updateFilterCount();
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
        auto pool = getFilteredQuestions();
        if (pool.empty() || selectedQuestionCount <= 0) return;

        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(pool.begin(), pool.end(), g);

        int count = std::min(selectedQuestionCount, (int)pool.size());
        quiz_questions.assign(pool.begin(), pool.begin() + count);

        current_index = 0;
        score = 0;
        progressBar->setRange(0, quiz_questions.size());

        stackedWidget->setCurrentWidget(quizPage);
        showQuestion();
    }

    void startRandomQuiz() {
        if (all_questions.empty()) return;

        auto pool = all_questions;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(pool.begin(), pool.end(), g);

        int count = std::min(15, (int)pool.size());
        quiz_questions.assign(pool.begin(), pool.begin() + count);

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
