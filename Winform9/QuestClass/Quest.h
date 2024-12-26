#pragma once
#include<string>

enum TypeQuest {
	YesNo,
	OneAnswer,
	SomeAnswers,
	ShortAnswer
};

class Quest {
private:
	// Текст вопроса
	std::string Text;
	// Тип вопроса: "Да/Нет", "Один ответ", "Несколько ответов", "Короткий ответ"
	TypeQuest Type;
	// Правильный ответ
	std::string RightAnswer;
	// Оценка ответа на данный вопрос (0, 1): 
	int Result;
public:
	// Конструктор
	Quest(std::string text, TypeQuest type, std::string rightAnswer);

	// get/set методы
	std::string getText();
	TypeQuest getType();
	std::string getRightAnswer();
	int getResult();
	void setResult(int result);
};

