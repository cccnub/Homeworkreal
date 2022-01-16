// Homework220114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
//ㅠㅠ
#include <iostream>


void ToUpper(const char* _Left, char* _Right)
{
	int Value = 0;

	while (0 < _Left[Value])
	{

		_Right[Value] = _Left[Value];

			
		Value += 1;

			}
	return ;

}

int main()
{
        char Text[100];

		ToUpper("12abcceee", Text);
		//      "12ABCCEEE"

		
		printf_s(Text);
	
		
 
    
}

