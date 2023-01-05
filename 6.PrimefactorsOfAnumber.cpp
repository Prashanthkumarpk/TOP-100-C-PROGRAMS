/******************************************************************************

                             find the factors of the given number input and check whether they’re prime numbers or not

*******************************************************************************/

#include <iostream>

using namespace std;

bool isPrime(int n){
    
    for(int i=2;i*i<=n;i++)
    if(n%i==0) return false;
    
    return true;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
   for(int i=1;i<=n;i++){
       if (n%i==0){
           if (isPrime(i)) cout<<i<<" ";
       }
   }
   
    

    return 0;
}

Enter n: 100
1 2 5 
