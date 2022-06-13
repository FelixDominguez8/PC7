#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
int main() {
	for (int i = 0; i < 256; i++) {
		string s;
		bitset<8> binary(i);
		s = binary.to_string();
		cout << right << setw(2) << setfill('0') << hex << i << " ";
		cout << right << setw(3) << i << " " << binary << " [" << s << "] ";
		cout << (char)i << endl;
	}
}