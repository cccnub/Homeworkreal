// Homework220114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
//ㅠㅠ
#include <iostream>

// 이함수를 만드는 이유가 메모리를 넘어서 하고 있다라고 하는데
// 배운거 같은데 뭔뜻인지?
// 아래 함수가 0이 나오기 까지만 반복하라는 뜻으로 만듬
int StringCount(const char* _Left)
{   
	int Count = 0;
	while (0 != _Left[Count]) //while 반복문 () 괄호안에 값이 참이면 실행흐름을 진행
		                      //아니라면 진행하지 않음
	{
		Count += 1;
	}
    
	return Count;

}
//0이 될 때 까지 세어주는 함수를 따로 만든다.

            //포인터로 표시한다는 건 외부에 무언가 있다는것, 
            //그건 메인에 존재하는 "" 문과 , Text
void ToUpper(const char* _Left, char* _Right, int _RightCount)
{
	//0~100까지 , 이건 별로 상관없음
	//1. 소문자가 대문자가 되어야 한다.
	//2. ""형을 Text로 옮길 수 있는지 ?

	int LeftCount = StringCount(_Left);
	// 스트링카운트 레프트가 라이트보다 커지면 진행하지 않는다는 함수?
	if (LeftCount > _RightCount)
	{
		return; // 함수즉시종료
	}

	if (true)
	{

	}


	int i = 0;

	for (int i = 0;    //조건체크
		i < LeftCount; //조건문
		i += 1)          //반복문
	{
		char LeftValue = _Left[i];

		//인자 안의 값이 참이면 실행, 거짓이면 실행하지 않음
		//a보다 크거나같아야하고 z보다 작거나 같아야한다. 
		//a와 z가 있다면 둘다 대문자로 변환해야 하기 때문, 논리형and사용 &&
		//아래 if문이 참인 이유는 _Left에는 a~z까지 알파벳(겉으로만,사실숫자)이 들어가기 때문
		if ('a' <= _Left[i] && 'z' >= _Left[i])

		{
			//그렇기 때문에 실행코드에는 _Right[i]에 _Left[i]가 표시되도록
			//해야하며, 이때 대문자로 표시되어야 하기 때문에 -32 를 해주면 
			//소문자 알파벳이 가지고 있는 수 - 32를 하기 때문에 대문자로 표기가 된다.

			_Right[i] = _Left[i] - 32;


		}
		else
		{
			_Right[i] = _Left[i];
		}
		//else 는 위에 존재하는 if 코드가 전부 거짓일 경우 실행 
		//이걸 왜쓰는거였더라? 

	}


	//이게 뭐하고있는거야? 
   //1. A 라는 값은 main에 존재하는 Left 배열의 0번째 값이다. 
   //배열의 0번째 값을 표시할 수 있게 설정. 




   //if() = () 안의 값이 참이라면 실행, 거짓이면 실행되지 않음
   //else = 위의 if 코드가 모두 거짓이라면 실행된다. 





}
int main()
{
	char Text[100] = { 0 };
		// 마지막배열을 0으로 만들기 위해서 초기화

		ToUpper("ssfdkfgsd", Text, 100);
		//      6개의 배열 [p][p][w][s][l][0]
		// char _Left[3]
		// 소문자를 대문자로 바꿔서 옮기라는 문제
		
		printf_s(Text);
	
		
 
    
}

