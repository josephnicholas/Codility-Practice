//
//	Note: Some test cases failed, need to improve this solution
//
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

int solution(int);
int main() {

	int num; cin >> num;
	cout << solution(num)<<endl;

	return 0;
}
int solution(int N) {
	string binary = bitset<32>(N).to_string();
	cout << binary << endl;
	int countZero = 0;
	int nTemp = 0;
	for (int i = 0; i < binary.length(); i++){
		if (binary[i] == '1')
		{
			int j = i;
			nTemp = countZero;
			countZero = 0;
			while (binary[j + 1] != '1' && binary[j + 1] != NULL) {
				countZero++;
				j++;
			}
			if (nTemp > countZero) {
				countZero = nTemp;
				return countZero;
			}	
		}	
	}	
	return 0;
}



