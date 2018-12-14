#include <iostream>
using namespace std;

// InsertSort
/*
void InsertionSort(int Datalist[], int n);

void InsertionSort(int Datalist[], int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(Datalist[j] >= Datalist[j+1]){
                int temp = Datalist[j];
                Datalist[j] = Datalist[j+1];
                Datalist[j+1] = temp;
            }
        }
    }
    
}
*/


//ShellSort
/*
void ShellSort(int Datalist[],int n);

void ShellSort(int Datalist[],int n){
    int i = 0,j = 0,increment = 0;
    int temp;
    for(increment = n/2;increment > 0;increment /= 2){
        for(int i = increment;i < n;i++){
            temp = Datalist[i];
            for(j = i;j > 0;j -= increment){
                if(temp < Datalist[j - increment])
                    Datalist[j] = Datalist[j - increment];
                else
                    break;
            }
            Datalist[j] = temp;
        }
    }

}
*/

//Heapsort
/*
void ProcDown(int Datalist[],int i,int n);
void Heapsort(int Datalist[],int n);
void Swap(int &a,int &b);

void ProcDown(int Datalist[],int i,int n){
    int child;
    int temp;
    for(temp = Datalist[i]; 2*i+1 < n;i = child){
        child = 2*i+1;
        if(child != n - 1 && Datalist[child] < Datalist[child+1]) ++child;
        if(temp < Datalist[child])
            Swap(Datalist[i],Datalist[child]);
        else break;
    }

}
void Swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void Heapsort(int Datalist[],int n){
    int i;
    for(i = n/2;i >= 0;i--)
        ProcDown(Datalist,i,n);
    for(i = n-1;i > 0;i--){
        Swap(Datalist[0],Datalist[i]);
        ProcDown(Datalist,0,i);
    }
}
*/

//Merge Sort
/*
void Merge(int Datalist[],int  Processlist[],int LPos,int RPos,int RightEnd);
void MSort(int Datalist[],int Processlist[],int left,int right);
void MergeSort(int list[],int n);


void Merge(int Datalist[],int  Processlist[],int LPos,int RPos,int RightEnd){
    int LeftEnd,NumElements,TemPos;
    LeftEnd  = RPos - 1;
    TemPos = LPos;
    NumElements = RightEnd - LPos + 1;

    while(LPos <= LeftEnd&& RPos <= RightEnd){
        if(Datalist[LPos] < Datalist[RPos])
            Processlist[TemPos++] = Datalist[LPos++];
        else
            Processlist[TemPos++] = Datalist[RPos++];
    }
    while(LPos <= LeftEnd)
        Processlist[TemPos++] = Datalist[LPos++];
    
    while(RPos <= RightEnd)
        Processlist[TemPos++] = Datalist[RPos++];

   for(int i = 0;i < NumElements;i++,RightEnd--)
       Datalist[RightEnd] = Processlist[RightEnd];

    // for(int i = 0;i < NumElements;i++)
    //     Datalist[i] = Processlist[i];
    
}

void MSort(int Datalist[],int Processlist[],int left,int right){
    int center;
    center = (left + right)/2;
    if(left < right){
        MSort(Datalist,Processlist,left,center);
        MSort(Datalist,Processlist,center + 1,right);
        Merge(Datalist,Processlist,left,center+1,right);
    }
}

void MergeSort(int Datalist[],int n){
    int Processlist[n];
    MSort(Datalist,Processlist,0,n-1);
}

*/






//Qsort


void QSort(int Datalist[],int n);



int main(){
    int Unordered[8]{3,1,4,5,9,2,6,5};
    // InsertionSort(Unordered,8);
    // ShellSort(Unordered,8);
    //Heapsort(Unordered,8);
    //MergeSort(Unordered,8);
    for(int i = 0;i < 8;i++)
    cout<<" "<<Unordered[i]<<" ";
    return 0;
}