/**
 * 5%_mean.cpp
 * Solution of 5% mean problem
 * First sort the elements in ascending order.
 * Then calculate value of 5% of n (rounded of to an integer)
 * Let x is the required value.
 * So we have to find the average of elements excluding first and last x elements
 * Excluding elements from 0 to x-1 index and n-x to n-1 index
 * then run a for loop for finding the sum and divide it by n-2x for getting the average
 * djm_boss [Dibyajyoti Mondal](https://github.com/djm-1)
 */

#include <bits/stdc++.h>
using namespace std;

// Solve function
void solve() {

  //taking input
  int n;
  cin>>n;
  vector<int>arr(n);  //space of specified size n is required....hence space complexity is O(n)
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  //sorting the array in ascending order
  sort(arr.begin(),arr.end());     //STL sort takes O(n log n) time complexity
  int x=n/20;   // 5% of n= (n*5)/100 = n/20
  int sum=0;
  for(int i=x;i<n-x;i++)  // This step takes O(n) time
  {
      sum+=arr[i];
  }
  float avg=(float)sum/(n-2*x);
  printf("%.5f\n",avg);
}



// Main function
int main() {
  int t;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
// Required time complexity O(n log n)
// Required space complexity O(n)
