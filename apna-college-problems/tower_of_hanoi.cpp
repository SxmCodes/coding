// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void solve(int number_of_plates, int source, int destination, int helper){
    
    if(n==1){
        cout<<" Moving plates from source to destination.";
        return;
    }
    
    solve(source, helper, destination, number_of_plates-1); // source to helper.
    cout<<" Movinng plates from source to destination.";
    
    solve( helper, destination, source, number_of_plates-1); // source to destination.
}

int main() {
    
    int number_of_plates;
    cin>>number_of_plates;
    
    int source=1, helper=2, destination=3;
    
    solve(number_of_plates, source, destination, helper);
    
    return 0;
}
