#ifndef QUESTION_H
#define QUESTION_H

#include <QString>
#include <QStringList>

struct Question {
    QString question;
    QStringList choices;
    QString answer;
    QString fact;
    QString hint;
    int ata = 0;       // ATA Kapitel (f.eks. 21, 22, 34...)
    int module = 0;    // EASA Modul (f.eks. 5, 13, 14...)
};

#endif // QUESTION_H