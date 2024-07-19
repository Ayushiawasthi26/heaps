#include "../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
#include <iostream>


using namespace std;

class heap{
    public:
    int arr[5];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        int index=size;
        arr[index]=val;
        while(val>1){
            int par=index/2;
            if(arr[par]<arr[index]){
                swap(arr[par],arr[index]);
                index=par;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void delete(){
        
    }

};

int main(){
    heap h;
    h.insert(50);
    h.insert(30);
    h.insert(45);
    h.insert(78);
    h.insert(65);
    return 0;
}