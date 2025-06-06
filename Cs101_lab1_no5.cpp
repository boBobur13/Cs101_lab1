#include <iostream>

using namespace std;

int main()
{
int num;
cin >> num;
num=num-1; // or num--;
num=num*7; // or
num=num-14;
num=num/12;
num=num+3; // or num+=3;
int r= num % 3;
cout << "num = " << num << "r = " << r << endl; // or just cout << "r= " << r << endl;

    return 0;
}
