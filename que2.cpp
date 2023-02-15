#include <iostream>
using namespace std;

void vovel_checker(string a){
    int vovel_count=0;
    int consonent=0;
    int i=0;
    for(int i=0; i<a.length();i++){
        a[i]=tolower(a[i]);
        if(a[i]=='a' || a[i]=='e'||a[i]=='i' || a[i]=='o'||a[i]=='u' || a[i]=='e'){
            vovel_count =vovel_count+1; 
        }
        // Assuming that The String may not containing any oth bogous characters
        
        else consonent++;
      
    }
    cout << " consonent count : "<<consonent;
    cout<<"Vovel Count ::"<<vovel_count<<endl;
    
}

int main(){
    string a;
    int vovell;
    cin>>a;
    //string k=tolower(a);
    vovel_checker(a);
    
    return 0;
}




//else consonent++;
        //cout<<"Vovel Count ::"<<vovel_count<<endl;