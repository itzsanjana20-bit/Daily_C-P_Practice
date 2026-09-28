
//print nth fibo term
#include <iostream>
using namespace std;
void fibo(long int n){
    int x=0;
    int y=1;
    int z;
    if (n==1){
        cout<<x<<endl;
    }
    if (n==2){
        cout<<y<<endl;
    }
    if (n>2){
    for(int i=3;i<=n;i++){
        z=x+y;
        x=y;
        y=z;
    }
    cout<<z<<endl;
    }
}
int main(){

    int n=8;
    fibo(n);

    return 0;
}










