#include <iostream>
#include<climits>
using namespace std;

int main(){

    int Marks[6]={1,-5,6,1000,78,54};
    int smallest=INT_MAX;
    int smallest_index=0;
    int size=sizeof(Marks)/sizeof(int);
    for(int i=0;i<size;i++){
        if(Marks[i]<smallest){
            smallest_index=i;
            smallest=Marks[i];
        }
    }
    cout<<"required index"<<smallest_index<<endl;

    return 0;
}
