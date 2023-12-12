#include <iostream>
#include <string>
#include <set>

void Edit(std::string path, std::set<std::string>& result) {
    std::string dir = "";
    
    for(size_t i = 0; i != path.size(); ++i) {
        dir += path[i];
        
        if (path[i] == '/') {
            result.insert(dir);
        }
    }
}
    

int main( void ) {
    std::string path;
    std::set<std::string> result;
    
    while (std::cin >> path) {
        Edit(path, result);
    }
    
    for (const auto& dir : result) {
        std::cout << dir << "\n";
    }
    
    return 0;
}

