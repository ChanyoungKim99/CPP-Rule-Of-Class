#include <iostream>

class Dog					
{							// ���������� ������, ���� private���� ����
public:
	int mAge;

private:
	int mBreed;

public :
	void Bark1();							// ����Լ��� ����
	std::string GetBreed();
	void SetAge(int age);

private:
	void Bark2()
	{
							// Ŭ���� ���� = private, public ��� ��� ����
	}
};

void Dog::Bark1()
{
	std::cout << "woof!" << std::endl;		// ����Լ��� ����
}

std::string Dog::GetBreed()	// Ŭ������ ��� �Լ� = private�� ���ٰ���
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
	mAge = age;				// private ������ �ٲٰ� �ʹٸ� �̷���!
}

int main()
{
	Dog mimi;				// Ŭ������ ����� �ν��Ͻ��� ����
						
	mimi.mAge = 1;			// . : Dot Operator (����ü�� ����� ����)
	std::cout << mimi.mAge << std::endl;

	//mimi.mBreed = 1;		// Ŭ���� �ܺ� = public�� ��� ����

	mimi.Bark1();
	mimi.SetAge(1);		// �̿� ���� �ʹݿ� ���� private���� �ϴ°��� ����
}