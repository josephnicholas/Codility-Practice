#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<size_t> &);

int main() {
	//vector<int> vNum = { -7, 1, 5, 2, -4, 3, 0 };
	vector<size_t> vNum = {-2147483648, -2147483648, -2147483648};
	
	cout << solution(vNum) << endl;

	return 0;
}

int solution(vector<size_t> &A) {
	long long leftSum = 0;
	long long rightSum = 0;

	for (unsigned int i = 0; i < A.size(); i++)
	{
		leftSum += A[i];
		rightSum = 0;
		for (unsigned int j = i; j < A.size(); j++)
		{
			rightSum += A[j];
		}
		if (leftSum == rightSum)
		{
			return i;
		}
	}
	return -1;
}