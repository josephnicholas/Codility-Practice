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
	for (unsigned int i = 0; i < A.size(); ++i)
	{
		for (unsigned int j = i + 1;  j < A.size(); ++j)
		{
			if (A[i] == A[j])
			{
				cout << i << " == " << j << endl;
				break;
			}
		}
	}
	return 0;
}

