#include <iostream>
#include <vector>
#include <string>
#include <map>

// Method 1
// find common element of two arrays of ant data type, assume equal is implemented
template<class F, class S>
bool commonElement(std::vector<F> arr1, std::vector<S> arr2) {
    for(int i = 0; i < arr1.size(); i += 1) {
        for(int j = 0; j < arr2.size(); j += 1) {
            if(arr1[i] == arr2[j]) {
                return true;
            }
        }
    }
    return false;
} // O(n*m)



// Methos 2
template<class F, class S>
bool commonElement2(std::vector<F> arr1, std::vector<S> arr2) {
    std::map<F, bool> map;

    for(int i = 0; i < arr1.size(); i += 1) {
        map[arr1[i]] = true;
    }

    for(int j = 0; j < arr2.size(); j += 1) {
        if(map[arr2[j]]) {
            return true;
        }
    }
    return false;
} // O(n+m)

int main() {
    
    std::vector<std::string> vec1{"a", "c", "d", "x"};
    std::vector<std::string> vec2{"e", "r", "i"};
    
    std::cout << commonElement2(vec1, vec2) << std::endl;
    
}


// Javascript built in (ES6)
function commonELement3(arr1, arr2) {
    return arr1.some(item => arr2.include(item));
}
