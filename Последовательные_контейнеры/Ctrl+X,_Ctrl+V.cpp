#include <iostream>
#include <list>
#include <string>


void PrintFile(std::list<std::string>& file) {
    for (auto &i : file) {
        std::cout << i << "\n";
    }
}


void Editor(std::list<std::string>& file) {
    auto iter = file.begin();
    std::string action;
    std::string buf = "";
    
    while (getline(std::cin, action)) {
        if (action == "Down" && iter != file.end()) {
            iter = std::next(iter);
        }
        
        else if (action == "Up" && iter != file.begin()) {
            iter = std::prev(iter);
        }
        
        else if (action == "Ctrl+X" && iter != file.end()) {
            buf = *iter;
            iter = file.erase(iter);
        }
        
        else if (action == "Ctrl+V" && buf != "") {
            file.insert(iter, buf);
        }
    }
    
    PrintFile(file);
}


std::list<std::string> MakeFile() {
    std::list<std::string> res;
    std::string str;

    while(getline(std::cin, str)) {
        if (str == "") {
            break;
        }
        
        res.push_back(str);
    }
    
    return res;
}


int main() {
    std::list<std::string> file;
    file = MakeFile();
    
    Editor(file);
    
    return 0;
}
 
