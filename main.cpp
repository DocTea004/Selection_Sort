#include<iostream>

using namespace std;


void swapping_elements(int &a, int &b) {
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display_elements(int *array, int size) {
   for(int i = 0; i<size; i++)

      cout << array[i] << " ";

      cout << endl;
}
void Selection_Sort(int *array, int size) {

   int i, j, imin;

   for(i = 0; i<size-1; i++) {

      imin = i;

      for(j = i+1; j<size; j++)

         if(array[j] < array[imin])

            imin = j;

         swap(array[i], array[imin]);
   }
}
int main() {
   int n;

   cout << "Enter the Size of Array: ";

   cin >> n;

   int arr[n];


   cout << "Enter elements in the Array:" << endl;

   for(int i = 0; i<n; i++) {

      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display_elements(arr, n);
   Selection_Sort(arr, n);
   cout << "Array after Sorting: ";
   display_elements(arr, n);
}
