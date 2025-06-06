#include <iostream>

using namespace std;
int main() {
int sum1;
int sum2;
int sum3;
int sum4;
cin>>sum1>>sum2>>sum3>>sum4;
cout<< "Sum of first pair: " << (sum1+sum2) << endl;
cout<< "Sum of second pair: " << (sum3+sum4) << endl;
cout<< "Is first sum1 < sum2? " << (sum1<sum2)<< endl;
cout<< "Is first sum1 > sum2? " << (sum1>sum2)<< endl;
cout<< "Are the sums equal? " << ((sum1+sum2)==(sum3+sum4))<< endl;

    return 0;
}


