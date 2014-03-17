#include <iostream>

using namespace std;

void convert_to_binary(int n) {
    if(n==0){
    return;
    }
    convert_to_binary(n/2);
        cout << n % 2;
}

int main(int argc, char* argv[]){

	 int num = atoi(argv[1]);

	//cout <<"Enter a integer "<<endl;
	//cin >> num;

	cout <<"Binary number: "<<endl;

	convert_to_binary(num);
	cout <<endl;

	return 0;
}