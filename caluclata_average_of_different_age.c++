#include <iostream>
using namespace std;

int main() {
  cout <<"WELCOME HERE ..!\n";
  cout <<"author name :- nitin kumar giri";
  // An array storing different ages
  int ages[8] = {20, 20, 20, 20, 20, 20, 20, 20};

  float avg, sum = 0;
  int i;

  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);

  // Loop through the elements of the array
  for (int age : ages) {
    sum += age;
  }
  
  // Calculate the average by dividing the sum by the length
  avg = sum / length;

  // Print the average
  cout << "The average age is: " << avg << "\n";
  cout << "Visit Again..!";

  return 0;
}


