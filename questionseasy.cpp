#include "questionseasy.h"
#include "ui_questionseasy.h"
#include "questions.h"
#include "gameover.h"
#include "endgame.h"
#include "mainwindow.h"
#include "mainwindow.cpp"

int questioncount = 1;
int increasequestion = 0;
int i;

questions *question = new questions();

QuestionsEasy::QuestionsEasy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionsEasy)
{
    ui->setupUi(this);
    questions *question = new questions();

    ui->questionText->setText(question->nextQuestion());
    ui->questionOneButton->setText(question->getAnswer(0));
    ui->questionTwoButton->setText(question->getAnswer(1));
    ui->questionThreeButton->setText(question->getAnswer(2));
    ui->questionFourButton->setText(question->getAnswer(3));
    ui->numberQuestion->setText(QString::number(questioncount++));

}

QuestionsEasy::~QuestionsEasy()
{
    delete ui;
    delete question;

}

void QuestionsEasy::on_questionOneButton_clicked()
{
    if(getDificuldade()==0){
        if(increasequestion == 9)
        {
            if(question->getCorrectAnswer(0) == true){
                if(increasequestion==9){
                    endGame EndGame;
                    EndGame.setModal(true);
                    EndGame.exec();
                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(0) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }else if(getDificuldade()==1){
        if(increasequestion == 14)
        {
            if(question->getCorrectAnswer(0) == true){
                if(increasequestion==14){
                    endGame EndGame;
                    EndGame.setModal(true);
                    EndGame.exec();
                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(0) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }else if(getDificuldade()==2){
        if(increasequestion == 14)
        {
            if(question->getCorrectAnswer(0) == true){
                if(increasequestion==14){
                    hardOne HardOne;
                    HardOne.setModal(true);
                    this->close();
                    HardOne.exec();

                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(0) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }


}


void QuestionsEasy::on_questionTwoButton_clicked()
{

    if(getDificuldade()==0){
        if(increasequestion == 9)
        {
            if(question->getCorrectAnswer(1) == true){
                if(increasequestion==9){
                    endGame EndGame;
                    EndGame.setModal(true);
                    EndGame.exec();
                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(1) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }else if(getDificuldade()==1){
        if(increasequestion == 14)
        {
            if(question->getCorrectAnswer(1) == true){
                if(increasequestion==14){
                    endGame EndGame;
                    EndGame.setModal(true);
                    EndGame.exec();
                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(1) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }else if(getDificuldade()==2){
        if(increasequestion == 14)
        {
            if(question->getCorrectAnswer(1) == true){
                if(increasequestion==14){
                    hardOne HardOne;
                    HardOne.setModal(true);
                    this->close();
                    HardOne.exec();

                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(1) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }
}


void QuestionsEasy::on_questionThreeButton_clicked()
{

    if(getDificuldade()==0){
        if(increasequestion == 9)
        {
            if(question->getCorrectAnswer(2) == true){
                if(increasequestion==9){
                    endGame EndGame;
                    EndGame.setModal(true);
                    EndGame.exec();
                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(2) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }else if(getDificuldade()==1){
        if(increasequestion == 14)
        {
            if(question->getCorrectAnswer(2) == true){
                if(increasequestion==14){
                    endGame EndGame;
                    EndGame.setModal(true);
                    EndGame.exec();
                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(2) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }else if(getDificuldade()==2){
        if(increasequestion == 14)
        {
            if(question->getCorrectAnswer(2) == true){
                if(increasequestion==14){
                    hardOne HardOne;
                    HardOne.setModal(true);
                    this->close();
                    HardOne.exec();

                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(2) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }
}


void QuestionsEasy::on_questionFourButton_clicked()
{
    if(getDificuldade()==0){
        if(increasequestion == 9)
        {
            if(question->getCorrectAnswer(3) == true){
                if(increasequestion==9){
                    endGame EndGame;
                    EndGame.setModal(true);
                    EndGame.exec();
                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(3) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }
    }else if(getDificuldade() == 1){
        if(increasequestion == 14)
        {
            if(question->getCorrectAnswer(3) == true){
                if(increasequestion==14){
                    endGame EndGame;
                    EndGame.setModal(true);
                    EndGame.exec();
                }
            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();
            }


            ui->helpButton->setVisible(false);
            ui->questionOneButton->setVisible(false);
            ui->questionTwoButton->setVisible(false);
            ui->questionThreeButton->setVisible(false);
            ui->questionFourButton->setVisible(false);
            ui->questionText->setVisible(false);
            ui->numberQuestion->setVisible(false);
        }

        else
        {
            if(question->getCorrectAnswer(3) == true){

            }

            else
            {
                gameOver GameOver;
                GameOver.setModal(true);
                GameOver.exec();


            }

            int alternatives = 0;

            question->IncreaseQuestion(increasequestion++);

            ui->numberQuestion->setText(QString::number(questioncount++));
            ui->questionText->setText(question->nextQuestion());
            ui->questionOneButton->setText(question->getAnswer(alternatives));
            ui->questionOneButton->setVisible(true);
            ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
            ui->questionTwoButton->setVisible(true);
            ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
            ui->questionThreeButton->setVisible(true);
            ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
            ui->questionFourButton->setVisible(true);

        }

    }else if(getDificuldade()==2) {
        if(increasequestion == 14)
        {
            if(question->getCorrectAnswer(3) == true){
                hardOne HardOne;
                HardOne.setModal(true);
                this->close();
                HardOne.exec();

            }

        else
        {
            gameOver GameOver;
            GameOver.setModal(true);
            GameOver.exec();
        }


        ui->helpButton->setVisible(false);
        ui->questionOneButton->setVisible(false);
        ui->questionTwoButton->setVisible(false);
        ui->questionThreeButton->setVisible(false);
        ui->questionFourButton->setVisible(false);
        ui->questionText->setVisible(false);
        ui->numberQuestion->setVisible(false);
    }

    else
    {
        if(question->getCorrectAnswer(3) == true){

        }

        else
        {
            gameOver GameOver;
            GameOver.setModal(true);
            GameOver.exec();


        }

        int alternatives = 0;

        question->IncreaseQuestion(increasequestion++);

        ui->numberQuestion->setText(QString::number(questioncount++));
        ui->questionText->setText(question->nextQuestion());
        ui->questionOneButton->setText(question->getAnswer(alternatives));
        ui->questionOneButton->setVisible(true);
        ui->questionTwoButton->setText(question->getAnswer(alternatives + 1));
        ui->questionTwoButton->setVisible(true);
        ui->questionThreeButton->setText(question->getAnswer(alternatives + 2));
        ui->questionThreeButton->setVisible(true);
        ui->questionFourButton->setText(question->getAnswer(alternatives + 3));
        ui->questionFourButton->setVisible(true);

    }
   }
}



void QuestionsEasy::on_helpButton_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    this->close();
    GameOver.exec();
}

