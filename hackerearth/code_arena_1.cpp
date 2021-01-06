/*
Max feels lonely after shifting to a new locality, as he does not have any friend there. So his parents bought him a new number from the Integers SuperMarket! Every child in the locality has bought a number from the same market.

He takes the number to go play with other children in the locality. But to his surprise, there is a rule in the locality, two people A and B can only be considered friends if numbers with A and B are not Coprime, i.e they have a common factor other than 1.

You are given the number that Max bought and the numbers of other children in the locality. Can you find how many friends he can have?

Input:
First line contains an integer A, the number that Max has.
Second line contains N, the count of children in the locality.
Third line contains N space-separated integers, where Xi is the integer with the ith child.

Output:
Output the maximum number of friends that Max can make.

Constraints:
1 ≤ A ≤ 103
1 ≤ N ≤ 103
1 ≤ Xi ≤ 103

SAMPLE INPUT 
6
3
4 7 12
SAMPLE OUTPUT 
2

*/

/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n;
	cin>>a>>n;
	int arr[n];
    int c=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    for(auto i=0;i<n;i++){
	   if ( __gcd(arr[i],a) != 1) 
		c++;
	}
	cout<<c;
	return 0;
}
