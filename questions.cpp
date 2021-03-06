#include "questions.h"



questions::questions()
{
    loadQuestions();
    m_lastquestion = 0;
    lastanswer = 0;

}
void questions::loadQuestions(){

    quests[0] = "Em que ano foi a morte de Nelson Mandela?";
    answers[0][0] = "1998", correct_answer[0][0] = false;
    answers[0][1] = "2003", correct_answer[0][1] = false;
    answers[0][2] = "2001", correct_answer[0][2] = false;
    answers[0][3] = "2013", correct_answer[0][3] = true;


    quests[1] = "A lua é um?";
    answers[1][0] = "Planeta", correct_answer[1][0] = false;
    answers[1][1] = "Satélite", correct_answer[1][1] = true;
    answers[1][2] = "Estrela", correct_answer[1][2] = false;
    answers[1][3] = "Não sei", correct_answer[1][3] = false;

    quests[2] = "Qual o maior planeta do sistema solar?";
    answers[2][0] = "Júpiter", correct_answer[2][0] = true;
    answers[2][1] = "Marte", correct_answer[2][1] = false;
    answers[2][2] = "Urano", correct_answer[2][2] = false;
    answers[2][3] = "Netuno", correct_answer[2][3] = false;

    quests[3] = "Quantos animais de cada espécie, Moisés colocou na arca?";
    answers[3][0] = "1", correct_answer[3][0] = false;
    answers[3][1] = "2", correct_answer[3][1] = false;
    answers[3][2] = "3", correct_answer[3][2] = false;
    answers[3][3] = "0", correct_answer[3][3] = true;

    quests[4] = "Quantos meses tem 28 dias durante um período de 6 anos?";
    answers[4][0] = "6", correct_answer[4][0] = false;
    answers[4][1] = "72", correct_answer[4][1] = true;
    answers[4][2] = "38", correct_answer[4][2] = false;
    answers[4][3] = "50", correct_answer[4][3] = false;

    quests[5] = "Quanto é 60 dividido por meio + 20?";
    answers[5][0] = "50", correct_answer[5][0] = false;
    answers[5][1] = "70", correct_answer[5][1] = false;
    answers[5][2] = "120", correct_answer[5][2] = false;
    answers[5][3] = "140", correct_answer[5][3] = true;

    quests[6] = "Lado esquedo ao contrário invertido?";
    answers[6][0] = "<-", correct_answer[6][0] = true;
    answers[6][1] = "->", correct_answer[6][1] = false;
    answers[6][2] = "X", correct_answer[6][2] = false;
    answers[6][3] = "X", correct_answer[6][3] = false;

    quests[7] = "Onde estava a resposta da primera questão?";
    answers[7][0] = "AQUI", correct_answer[7][0] = false;
    answers[7][1] = "AQUI", correct_answer[7][1] = false;
    answers[7][2] = "AQUI", correct_answer[7][2] = false;
    answers[7][3] = "AQUI", correct_answer[7][3] = true;

    quests[8] = "Coletivo de panteras";
    answers[8][0] = "Alcateia", correct_answer[8][0] = true;
    answers[8][1] = "Bando", correct_answer[8][1] = false;
    answers[8][2] = "Grupo", correct_answer[8][2] = false;
    answers[8][3] = "Cardume", correct_answer[8][3] = false;

    quests[9] = "Qual a frase está escrita na tela de fim de jogo?";
    answers[9][0] = "Levante e siga em frente!", correct_answer[9][0] = true;
    answers[9][1] = "Não desista!", correct_answer[9][1] = false;
    answers[9][2] = "Continue tentando!", correct_answer[9][2] = false;
    answers[9][3] = "Nada", correct_answer[9][3] = false;

    quests[10] = "2345meia78";
    answers[10][0] = "Gabriel Pensador", correct_answer[10][0] = true;
    answers[10][1] = "Lulu Santos", correct_answer[10][1] = false;
    answers[10][2] = "Carlinhos Brown", correct_answer[10][2] = false;
    answers[10][3] = "Jorge Ben Jor", correct_answer[10][3] = false;

    quests[11] = "Mensagem de aviso";
    answers[11][0] = "Atenção aos detalhes!", correct_answer[11][0] = true;
    answers[11][1] = "Cuidado com os detalhes!!", correct_answer[11][1] = false;
    answers[11][2] = "Fique de olho nos detalhes!", correct_answer[11][2] = false;
    answers[11][3] = "Preste atenção nos detalhes!", correct_answer[11][3] = false;

    quests[12] = "Entrete( )imento";
    answers[12][0] = "n", correct_answer[12][0] = true;
    answers[12][1] = "r", correct_answer[12][1] = false;
    answers[12][2] = "l", correct_answer[12][2] = false;
    answers[12][3] = "X", correct_answer[12][3] = false;

    quests[13] = "Título correto do jogo";
    answers[13][0] = "Gênio Quiz", correct_answer[13][0] = false;
    answers[13][1] = "Genio Quiz", correct_answer[13][1] = false;
    answers[13][2] = "GêNlo QUiz", correct_answer[13][2] = true;
    answers[13][3] = "GêNIo QuIz", correct_answer[13][3] = false;

    quests[14] = "Letras = número";
    answers[14][0] = "Seis", correct_answer[14][0] = false;
    answers[14][1] = "Cinco", correct_answer[14][1] = true;
    answers[14][2] = "Dois", correct_answer[14][2] = false;
    answers[14][3] = "Um", correct_answer[14][3] = false;



}

QString questions::nextAnswer(){

    QString newAnswer = answers[m_lastquestion][lastanswer];

    return newAnswer;

}

QString questions::nextQuestion(){

    QString newQuestion = quests[m_lastquestion];

    return newQuestion;

}

QString questions::getAnswer(int i){

    QString actualAnswer = answers[m_lastquestion][i];

    return actualAnswer;

}

bool questions::getCorrectAnswer(int i){

    if(correct_answer[m_lastquestion][i] == true)
        return true;
    else
        return false;

}


void questions::IncreaseQuestion(int lastquestion){

    m_lastquestion = lastquestion;
    m_lastquestion++;

}
