#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//person's first name, last name, street address, city, state, and zip

int main()
{
    string David[6] = {"David", "Torres", "384 Street Place", "New Rochelle", "NY", "10802"};
    string Brain[6] = {"Brain", "Hernandez", "113 Washington St", "New York", "NY", "10008"};
    string Emily[6] = {"Emily", "Johnson", "889 E 6th St", "Chicago", "CA", "19823"};

    ofstream somenames("output.txt");
    
    for(int count = 0; count < 6; count ++){
        somenames << David[count] << ", " ;
    }
    somenames << "\n";
    for(int count1 = 0; count1 < 6; count1 ++){
        somenames << Brain[count1] << ", " ;
    }
    somenames << "\n";
    for(int count2 = 0; count2 < 6; count2 ++){
        somenames << Emily[count2] << ", " ;
    }
    
    somenames.close();

    return 0;
}
