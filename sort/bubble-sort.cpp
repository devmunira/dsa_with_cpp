#include<iostream>
using namespace std;

void print (int *array, int count){
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << ", ";
    }

    cout << endl;
    
}


int bubbleSort(int *array, int count) {
   for (int i = 0; i < count - i; i++)
   {
        for (int j = i + 1; j < count; j++)
        {
           if(array[i] > array[j]){
            swap(array[i], array[j]);
            }
        }
        
   }
   print(array, count);
   cout << endl;
   return 0;
   
}



int main () {
    int array[] = {2,7,11,15};
    int count = sizeof(array) / sizeof(int);
    int array1[] = {3,2,4};
    int count1 = sizeof(array1) / sizeof(int);
    int array2[] = {3,3};
    int count2 = sizeof(array2) / sizeof(int);


    bubbleSort(array, count);
    bubbleSort(array1, count1);
    bubbleSort(array2, count2);
    return 0;
}
