// c++ ���α׷��� ������ cpp���ϱ������θ��������.
// �ϳ��� Ŭ������ �ϳ��� ������ϰ� �ϳ��� cpp������ �����.
// c++ ������ �������� �� �� cppp������ �������� �������� �Ѵ�.

// Ŭ������ ����� ���� �̸��� ���� �ʾƵ� �ȴ�.
// �������� ������Ͽ� �ߺ����� �Ǿ� �־ �������.
// �� ����cpp ������ �ߺ��� �־�� �� �ȴ�. �׷��Ƿ� indef, endif, defin �� ����� �Է��Ѵ�.(��������)

#include "main_header.h"
#include "Animal.h"
#include "Person.h"


int main() {
	Animal* animal = new Animal(2, "��");
	animal->printInfo();

	Person* person = new Person("1234-5678", "ȫ�浿");
	person->printInfo();

	// foo();

	return 0;
}

// �������� ������ �Ǵ� cpp ���Ͽ��� ������ ����ο� �Լ��� ������ �ִٸ�
// �� ����� �Լ��� ���� ��ü�� ���� �ִ� �Լ��� ����ȴ�.(linking)

/*
void hoo() {
	printf("hoo()\n");
	count++;
	foo();
}

void goo() {
	printf("goo()\n");
	count++;
	hoo();
}

void foo() {
	if (count <= 10) {
		printf("foo()\n");
		count++;
		goo();
	}
}
*/

