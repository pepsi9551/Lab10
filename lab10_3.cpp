#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){

    ifstream score;

    int count = 0;
    string textline;
    double sum,sum_of_square,Mean;

    score.open("score.txt");
    
    while(getline(score,textline)){
        sum += atof(textline.c_str());
        sum_of_square += pow(atof(textline.c_str()),2);
        count++;
    }
    Mean = sum/count;
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = "<< Mean << endl;
    cout << "Standard deviation = " << sqrt((sum_of_square/count) - (pow(Mean,2)));;
}

