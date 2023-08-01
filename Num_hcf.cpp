

#include<bits/stdc++.h>
using namespace std;


int my_hcf(int n1, int n2){
    // if(n2 !=n1){
    //     return my_hcf(n2 , n1%n2);
        
    // }
    if(n1==0 || n2==0){
        return 0;
    }
    else if(n1>n2){
        return my_hcf(n1-n2,n2);
    }
    else {
        return my_hcf(n1, n2-n1);
    }
    


}
int main(){int numberX, numberY;

 cout<<"Enter Number X and Y "<<endl;
 
 cin>>numberX;
 cin>>numberY;
 cout << "The hcf of number"<<numberX<<" and " <<numberY<<"is"<<my_hcf(numberX,numberY);
 
 //Function exit code
 return 0;
}

//Defining the no as input in recurrsive function
