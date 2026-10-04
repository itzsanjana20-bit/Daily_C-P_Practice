#include <iostream>
using namespace std;
int DtoB(int num){
    int pow=1;
    int mew=0;
    int rem;
    while (num>0){
        rem=num%2;
        mew=mew+(rem*pow);
        pow=pow*10;
        num=num/2;
    }
    return mew;
}
void powof2(int n){
    int num=DtoB(n);
    bool ans=true;
    while (num/10>0){
        int l=num%10;
        if (l!=0){
            ans=false;
            break;
        }
        num=num/10;
    }
    if(ans==true){
        cout<<"yes";
      
    }else{
        cout<<"no";
    }
    
}

int main(){
    powof2(6);

    

    return 0;
}
