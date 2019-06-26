//We include de I/O library
#include <iostream>
/* We include the stdenteredNumeramespace so we don't have to write std::
Everytime we want to use "cout" or "cin" */
using namespace std;

int main()
{
//    We declare our variables
    int enteredNumer, i, factorization;
    
//    Ask for a number
    cout << "Enter a number of your choice (positive and integeer): ";
//    Assing the entered value to the "enteredNumer" variable
    cin >> enteredNumer;
    
    cout << "These are the factors for " << enteredNumer << ": " << endl;
    
    factorization = enteredNumer;
    
//    Every number has 1 as it's factor, so we'll say this right away
    cout << 1 << endl;
    
//    Check the factors (starting with 2, until the number is reached)
    for(i = 2; i <= enteredNumer; ++i)
    {
//        If the divided number has 0 as the division reminder, it'll be a factor
        
        while (factorization % i == 0){
//            Print this number everytime
            cout << i << endl;
            
//            As it is a factor, let's divide by it to find the next one!
            factorization = factorization / i;
        };
    }
  
  
    
    
    return 0;
}
//method 2
     /*
     
     cout<<1<<endl;                                                  --k1
    for(i=2;i< sqrt(enteredNumber);i++)                             -- k2
    {
        if(enteredNumber%i==0)
            cout<<i<<endl<<enteredNumber/i<<endl;                    --k3
    }                                                                --k4
    cout<<num;
    */
//k1-as 1 is factor of every number
//k2- we will run the loop only till square root of n
 //k3- all the factors are covered by i and the remaining are covered by n/i, because if x=a*b, then x has one factor a and another factor b=x/a;
// k4-this will reduce complexity by n to root(n);
//n is also a factor of every number
