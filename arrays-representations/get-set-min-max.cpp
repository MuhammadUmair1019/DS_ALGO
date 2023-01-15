#include <iostream>
using namespace std;

struct Array {
  int *A;
  int size;
  int length;
};

int Get(struct Array arr, int index) {
  if(index >= 0 && index < arr.length) 
    return arr.A[index];
  return -1;
}

void Set(struct Array *arr, int index, int value) {
  if(index >= 0 && index < arr->length) 
      arr->A[index] = value;
}

int Max(struct Array arr) {
  int max =  arr.A[0];
  
  for(int i=0; i < arr.length; i++) {
      if(arr.A[i] > max) 
        max = arr.A[i];
  }

  return max;
}

int Min(struct Array arr) {
  int min = arr.A[0];

  for(int i=0; i<arr.length; i++) {
    if(arr.A[i] < min) 
      min = arr.A[i];
  }

  return min;
}

int Sum(struct Array arr) {
  int sum = 0;

  for(int i=0; i < arr.length; i++) {
      sum += arr.A[i];
  }

  return sum;
}

float Average(struct Array arr, int total) {
  return (float)total / arr.length;  
}



int main() {
  Array arr = {new int[10]{ 2, 6, 10, 15, 25}, 10, 5};
  int min, max, sum, avg;

  Get(arr, 2);
  Set(&arr, 3, 20);
  max = Max(arr);
  min = Min(arr);
  sum = Sum(arr);
  avg = Average(arr, sum);

  cout << "Max is: " << max << endl; 
  cout << "Min is: " << min << endl; 
  cout << "Sum is: " << sum << endl; 
  cout << "Average is: " << avg << endl; 
}