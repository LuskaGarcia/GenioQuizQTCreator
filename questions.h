#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <QString>
#include <QTime>
#include <QCoreApplication>

class questions
{
public:
    questions();

    void loadQuestions();
    QString nextAnswer();
    QString nextQuestion();
    QString getAnswer(int i);
    bool getCorrectAnswer(int i);

    void IncreaseQuestion(int lastquestion);

private:
    int lastanswer;
    int m_lastquestion;

    QString quests[15];
    QString answers[15][4];
    bool correct_answer[15][4];
};

#endif // QUESTIONS_H
