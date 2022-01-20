// Homework220120.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{

public:
    char Hp;
    char Hp1;
    int Att;    // 8
    __int64 Att1; // 8
    char Hp2;  // 8 
};


int main()
{

    Player NewPlayer = Player();

    int HpSize = sizeof(NewPlayer.Hp);
    int Hp1Size = sizeof(NewPlayer.Hp1);
    int Hp2Size = sizeof(NewPlayer.Hp2);
    int Att1Size = sizeof(NewPlayer.Att);


    
    //ex)
    //[Hp][Hp1][][][Att][][][][Att1][][][][][][][][Hp2]


    __int64 AddressPlayer = (__int64)&NewPlayer; // AddressPlayer = 753637784264

    __int64 AddressHp = (__int64)&NewPlayer.Hp; //AddressHp = 753637784264
    __int64 AddressHp1 = (__int64)&NewPlayer.Hp1; //AddressHp1 = 753637784265
    __int64 AddressAtt = (__int64)&NewPlayer.Att; //AddressAtt = 753637784268
    __int64 AddressAtt1 = (__int64)&NewPlayer.Att1; // AddressAtt1 = 753637784272
    __int64 AddressHp2 = (__int64)&NewPlayer.Hp2; // AddressHp2 = 753637784280

    int Size = sizeof(NewPlayer);

}
  