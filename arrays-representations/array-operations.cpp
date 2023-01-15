// operation on an array 

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
      cout << arr.A[i] << endl;
}

void Append(struct Array *arr, int num) {
  if(arr->length < arr->size)
    arr->A[a->length] = num;
    arr->length++;
}

void Insert(struct Array *arr, int index, int num) {
  if(index>=0 && index <= arr->length)  {
     for(int i=arr->length; i > index; i--)
         arr->A[i] = arr->A[i-1];
    arr->A[index] = num;
    arr->length++;
  }
}

int Delete(struct Array *arr, int index) {
  int x = 0;

  if(index>=0 && index <= arr->length)  {
    x = arr->A[index];
     for(int i=index; i < arr->length; i++)
         arr->A[i] = arr->A[i+1];
    arr->length--;
    return x;
  }

  return x;
}

int main() {
  
  Array arr = {new int[10]{ 2, 6, 10, 15, 25}, 10, 5};
  
  //  ----------------------------
  // Take all values from keyboard (commit the above line code before uncommit this)

  // Array arr;
  // int n;
  // cout << "Enter size of an array";
  // cin >> arr.size;
  // arr.A = new int[arr.size]; 
  // arr.length = 0;

  // cout << "Enter number of an array: ";
  // cin >> n;

  // for(int  i = 0; i < n; i++) {
  //   cout << "Enter array element: ";
  //   cin >> arr.A[i];
  // }
  // arr.length = n;

  Append(&arr, 10);
  Insert(&arr, 3, 0);
  Delete(&arr, 2);
  Display(arr);

  return 0; 
}