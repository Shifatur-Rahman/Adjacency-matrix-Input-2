#include <bits/stdc++.h>
using namespace std;
int main(){

int nodes, edges, cost;
cout<<"node: ";
cin>>nodes;
cout<<"edges: ";
cin>>edges;

int arr[100][100];
int n1,n2;

for(int i=0; i<nodes; i++){
    cout<<"n1, n2, cost: "<<endl;;
    cin>>n1>>n2>>cost;
    arr[n1][n2] = cost;
    arr[n2][n1] = cost;
}

for(int i=1; i<=nodes; i++){
    for(int j=1; j<=nodes; j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}

}
