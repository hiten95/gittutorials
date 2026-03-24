#include<iostream>
using namespace std;
"print name using recursion 5 times "
void f (int i , int n ){
    if (i > n ) 
    return ;
    print("hiten kumar");
    f (i+1 , n );
}
int main() {
    int n ; 
    cin >> n ;
    f (1,n);
    return 0;
}