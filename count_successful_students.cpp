#include <iostream>
#include <vector>

using namespace std;

void count_successful_students(const vector<int> &grades, int min_grade) {
    int temp =0;
	for(int i=0; i < grades.size(); i++) {
    	if(grades[i] > min_grade-1) {
    		temp +=1;
    	}
	}
	cout<<temp;    
}
