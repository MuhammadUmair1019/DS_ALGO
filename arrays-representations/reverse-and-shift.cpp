  // 1- Reverse
  // 2- Left shift
  // 3- Left rotate
  // 4- Right shift
  // 5- Right rotate

#include <iostream>
using namespace std;

struct Array {
  int *A;
  int size;
  int length;
};

void Display(struct Array arr) {
  cout << "Elemets are: " << endl;
  for(int i=0; i < arr.length; i++) 
      cout << arr.A[i] << " ";
}

// first method
void Reverse(struct Array *arr) {
  int *B = new int[arr->size];
  for(int i = arr->length-1, j=0; i>=0; i--, j++) {
    B[j] = arr->A[i];
  }

  for(int i=0; i < arr->length; i++) {
    arr->A[i] = B[i];
  }
}

// Second method (swap elemts)
void Reverse(struct Array *arr) {
  for(int i=0, j = arr->length-1; i < j; i++, j--) 
  {
    int temp;
    temp = arr->A[i];
    arr->A[i] = arr->A[j];
    arr->A[j] = arr->A[i];
  }
}

void LeftShift(struct Array *arr) {
  int lastIndex = arr->A[arr->length -1];
  for(int i=arr->length-1; i >= 0 ; i--) {
    arr->A[i] =  arr->A[i-1];
  }
}

void LeftShift(struct Array *arr) {

  for(int i=0; i < arr->length; i++)

}

int main() {
  Array arr = {new int[10]{ 2, 6, 10, 15, 25}, 10, 5};
    
  Reverse(&arr);
  Display(arr);

}