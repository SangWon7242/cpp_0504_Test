// c++ 프로그램은 무조건 cpp파일기준으로만들어진다.
// 하나의 클래스당 하나의 헤더파일과 하나의 cpp파일을 만든다.
// c++ 파일은 컴파일을 할 때 cppp파일을 기준으로 컴파일을 한다.

// 클래스의 선언과 파일 이름은 같지 않아도 된다.
// 여러개의 헤더파일에 중복적용 되어 있어도 상관없다.
// 단 메인cpp 에서는 중복이 있어서는 안 된다. 그러므로 indef, endif, defin 에 헤더를 입력한다.(예시참고)

#include "main_header.h"
#include "Animal.h"
#include "Person.h"


int main() {
	Animal* animal = new Animal(2, "닭");
	animal->printInfo();

	Person* person = new Person("1234-5678", "홍길동");
	person->printInfo();

	// foo();

	return 0;
}

// 컴파일의 기준이 되는 cpp 파일에서 위쪽의 선언부에 함수의 선언이 있다면
// 그 선언된 함수와 실제 몸체를 갖고 있는 함수가 연결된다.(linking)

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

