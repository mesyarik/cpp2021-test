#include <iostream>
#include <vector>

// scope
char y;

// declaration != definition
// Any definition is declaration

// One Definition Rule
int f(int x);


namespace N {

int f(int x);

}

// qualified-id
int N::f(int x) {
    return x+1;
}


namespace N {

int x = 3;

}

int x = 1;

using vi = std::vector<int>;

int main() {
    1++++x;
    using namespace N;
    std::cout << x << '\n';
    //f(10);
}
