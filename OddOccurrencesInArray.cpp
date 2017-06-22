//
//	Note: Some test cases failed, need to improve this solution
//
#include <algorithm>
#include <iostream>
#include <vector>
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &);
int main() {
	vector<int> inputNums = { 9, 3, 9, 3, 9, 7, 9 };
	cout << solution(inputNums) << endl;

	return 0;
}
int solution(vector<int> &A) {
	int loneNumber = 0;
	for (unsigned int i = 0; i < A.size(); ++i)
	{
		loneNumber ^= A[i];
	}
	
	return loneNumber;
}

