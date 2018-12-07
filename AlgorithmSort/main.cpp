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


int main(){
    int Unordered[8]{3,1,4,5,9,2,6,5};
    // InsertionSort(Unordered,8);
    // ShellSort(Unordered,8);
    for(int i = 0;i < 8;i++)
    cout<<" "<<Unordered[i]<<" ";
    return 0;
}