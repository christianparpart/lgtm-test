#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

// FIXME: this is a FIXME

using T = std::array<int, 80>;

struct S {
	S(T _vals) : vals{move(_vals)} {}

	T vals;
};

int main() 
{
	T vals;
	generate(begin(vals), end(vals), [i = 0]() mutable -> int { return ++i; });
	S s(move(vals));
	for_each(begin(s.vals), end(s.vals), [](int i) { cout << ' ' << i; });
	cout << '\n';
}
