#include<iostream>
#include<climits>
using namespace std;

//1. print max of a[i] from 0 to n-1

//int main(){
//    int n;
//    cin>>n;
//    int a[n];
//    int mx=INT_MIN;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for(int i=0;i<n;i++){
//        mx=max(mx,a[i]);
//        cout<<mx<<endl;
//    }
//}


//2. sum of subarray

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=a[j];
			cout<<sum<<endl;
		}
	}
}
