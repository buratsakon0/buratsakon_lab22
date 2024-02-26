#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    double sum = 0;
    int N = argc -1 ;

    if(argc < 2){
        cout << "Please input numbers to find average." ;
    }else{
        for(int i=0 ; i < N ; i++){
            sum += atof(argv[i+1]);
        }
    cout << "---------------------------------" << endl;
    cout << "Average of " << N << " numbers = " << sum/N << endl;
    cout << "---------------------------------";

    }
    return 0;

}