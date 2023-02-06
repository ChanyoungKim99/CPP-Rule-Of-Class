#include <iostream>

class Dog					
{							// 접근제한자 생략시, 전부 private으로 변함
public:
	int mAge;

private:
	int mBreed;

public :
	void Bark1();							// 멤버함수의 선언
	std::string GetBreed();
	void SetAge(int age);

private:
	void Bark2()
	{
							// 클래스 내부 = private, public 모두 사용 가능
	}
};

void Dog::Bark1()
{
	std::cout << "woof!" << std::endl;		// 멤버함수의 정의
}

std::string Dog::GetBreed()	// 클래스의 멤버 함수 = private에 접근가능
{
	switch (mBreed)
	{
		case 1:
			return "pomeranian";
			break;
	}

	return "";
}

void Dog::SetAge(int age)
{
	mAge = age;				// private 변수를 바꾸고 싶다면 이렇게!
}

int main()
{
	Dog mimi;				// 클래스를 사용해 인스턴스를 만듦
						
	mimi.mAge = 1;			// . : Dot Operator (구조체의 멤버에 접근)
	std::cout << mimi.mAge << std::endl;

	//mimi.mBreed = 1;		// 클래스 외부 = public만 사용 가능

	mimi.Bark1();
	mimi.SetAge(1);		// 이와 같이 초반엔 전부 private으로 하는것이 좋다
}