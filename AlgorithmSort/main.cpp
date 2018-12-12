#include <iostream>
using namespace std;

// InsertSort
/*
void InsertionSort(int list[], int n);

void InsertionSort(int list[], int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(list[j] >= list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    
}
*/


//ShellSort
/*
void ShellSort(int list[],int n);

void ShellSort(int list[],int n){
    int i = 0,j = 0,increment = 0;
    int temp;
    for(increment = n/2;increment > 0;increment /= 2){
        for(int i = increment;i < n;i++){
            temp = list[i];
            for(j = i;j > 0;j -= increment){
                if(temp < list[j - increment])
                    list[j] = list[j - increment];
                else
                    break;
            }
            list[j] = temp;
        }
    }

}
*/

//Heapsort
/*
void ProcDown(int list[],int i,int n);
void Heapsort(int list[],int n);
void Swap(int &a,int &b);

void ProcDown(int list[],int i,int n){
    int child;
    int temp;
    for(temp = list[i]; 2*i+1 < n;i = child){
        child = 2*i+1;
        if(child != n - 1 && list[child] < list[child+1]) ++child;
        if(temp < list[child])
            Swap(list[i],list[child]);
        else break;
    }

}
void Swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void Heapsort(int list[],int n){
    int i;
    for(i = n/2;i >= 0;i--)
        ProcDown(list,i,n);
    for(i = n-1;i > 0;i--){
        Swap(list[0],list[i]);
        ProcDown(list,0,i);
    }
}
*/

//Merge Sort


int main(){
    int Unordered[8]{3,1,4,5,9,2,6,5};
    // InsertionSort(Unordered,8);
    // ShellSort(Unordered,8);
    //Heapsort(Unordered,8);
    for(int i = 0;i < 8;i++)
    cout<<" "<<Unordered[i]<<" ";
    return 0;
}