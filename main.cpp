#include<iostream>
#include<string>
#include<iomanip>
#include<ctime> 

using namespace std;

int main(){

    srand(time(NULL));
    int number = 6;
    int result = 0;

result = rand() % number + 1;

switch(result){
    case 1:
    cout << "You Lost" << endl;
    break;
    case 6:
    cout << "You won" << endl;
    break;
    default:
    cout << "Noting to see here" << endl;
    break;
}

cout << "Score: " << result << endl;
system("PAUSE");

return 0;
}