#include <iostream>
#include <deque>
#include <string>

void MakeTrain() {
    std::deque<int> train;
    int count = 0;
    char sign;
    std::string side;
    int quantity;
    
    while (std::cin >> sign >> side >> quantity) {
        if (sign == '+' && side == "left") {
            train.push_front(quantity);
            ++count;
        }
        
        else if (sign == '+' && side == "right") {
            train.push_back(quantity);
            ++count;
        }
        
        else if (sign == '-') {
            if (quantity >= count) {
                train.clear();
                count = 0;
                continue;
            }
            
            if (side == "left") {
                train.erase(train.begin(), train.begin() + quantity);
                count -= quantity;
            }
            else if (side == "right") {
                train.erase(train.end() - quantity, train.end());
                count -= quantity;
            }
        }
    }
    
    for (auto iter = train.begin(); iter != train.end(); ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << "\n";
}
