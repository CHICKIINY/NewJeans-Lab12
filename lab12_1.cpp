// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    string g;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9+1;
    if(x == 1)g = "A";
    else if(x == 2)g = "B+";
    else if(x == 3)g = "B";
    else if(x == 4)g = "C+";
    else if(x == 5)g = "C";
    else if(x == 6)g = "D+";
    else if(x == 7)g = "D";
    else if(x == 8)g = "F";
    else if(x == 9)g = "W";
    
    cout << "You will get "<< g <<" in this 261102.";

}