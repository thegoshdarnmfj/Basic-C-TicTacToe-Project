#include <iostream>
#include <vector>
#include<boardSetUp.h>
using namespace std;

int main()
{
    int players;
    cout << "Enter # of players:";
    cin >> players;
    boardSetUp b(players);
    while (!b.checkDone()){
        while (!b.xTurn());
        if (b.checkDone()) break;
        while (!b.yTurn());
    }
}
