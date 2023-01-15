
#include <iostream>
using namespace std;

struct Array {
  int *A;
  int size;
  int length;
};

// swap 
void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

// linear serach
int LinearSerach(struct Array *arr, int key) {
   for(int i=0; i < arr->length; i++) 
   {
      if(key == arr->A[i]) 
      {
        // improve linear serach using tranposition approach
        swap(&arr->A[i], &arr->A[i-1]) 
        return i;
      }
   }
   return -1;
}

// Binary search
int BinarySerach(struct Array *arr, int key) {
  int mid;
  int low = 0;
  int high = arr->length -1;

  while(low <= high) 
  {
    mid = (low+high)/2;
    if(key == arr->A[mid]) 
      return mid;
    else if(key < mid) 
      high = mid -1;
    else 
      low = mid + 1;
  }
  return 0;
}

int main () {
  Array arr = {new int[10]{ 2, 6, 10, 15, 25}, 10, 5};
  int key, result;

  cout << "Enter serach key: ";
  cin >> key;

  // result = LinearSerach(&arr, key);
  result = BinarySerach(&arr, key);
  cout << "Element found at index: "<<result; 
}