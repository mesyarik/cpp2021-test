#include <iostream>
#include <vector>

// scope
int y;

// declaration != definition
// Any definition is declaration

char f(char x);


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
