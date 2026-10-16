#include <iostream>
using namespace std;
void swap_array(int array[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}
int main(){
    int A[6]={4,6,9,7,2,1};
    int s=sizeof(A)/sizeof(int);
    for(int y=0;y<s;y++){
        cout<<A[y]<<endl;
    }
    cout<<endl;
    swap_array(A,s);
    for(int y=0;y<s;y++){
        cout<<A[y]<<endl;
    }

    

    return 0;
}
