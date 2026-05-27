#include <iostream>
#include <vector>
#include <string>

void addItem(std::vector<std::string>& inventory, const size_t maxSlots);
void dropItem(std::vector<std::string>& inventory);
void openBackpack(const std::vector<std::string>& inventory);
void emptyBackpack(std::vector<std::string>& inventory);

int main() // Implement categories and sourrounding systems later, (equip item? use item?) (item durability)
{
    std::vector<std::string> inventory;
    std::string action;
    size_t maxSlots = 5;

    std::cout << "*********************** Inventory System ***********************\n";

    while (true) {
        std::cout << "What would you like to do? (add/drop/open/empty/exit): ";
        std::getline(std::cin, action);

        if (action == "exit") {
            break;
        }
        else if (action == "add") {
            std::cout << "****************************************************************\n";

            addItem(inventory, maxSlots);
        }
        else if (action == "drop") {
            std::cout << "****************************************************************\n";

            dropItem(inventory);
        }
        else if (action == "open") {
            std::cout << "****************************************************************\n";

            openBackpack(inventory);
        }
        else if (action == "empty") {
            std::cout << "****************************************************************\n";

            emptyBackpack(inventory);
        }
        else {
            std::cout << "****************************************************************\n";
            std::cout << "Please choose a correct action.\n";
        }
    }
    
    return 0;
}

void addItem(std::vector<std::string>& inventory, const size_t maxSlots) {
    if (inventory.size() < maxSlots) {
        std::cout << "Which item would you like to put in your backpack?: ";
        std::string item;
        std::getline(std::cin, item);

        inventory.push_back(item);

        std::cout << item << " added to your backpack.\n";
    }
    else {
        std::cout << "Your inventory is full.\n";
    }
}
void dropItem(std::vector<std::string>& inventory) {
    std::cout << "Which item would you like to remove from your Backpack?: ";
    std::string item;
    std::getline(std::cin, item);

    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (*it == item) {
            inventory.erase(it);
            std::cout << item << " dropped on the ground.\n";

            return;
        }
    }
    std::cout << "Item not found.\n";
}
void openBackpack(const std::vector<std::string>& inventory) {
    if (inventory.empty()) {
        std::cout << "Your backpack is empty.\n";
        return;
    }
    else {
        std::cout << "Your backpack contains:\n";
        for (const auto& item : inventory) {
            std::cout << "- " << item << std::endl;
        }
    }
}
void emptyBackpack(std::vector<std::string>& inventory) {
    std::cout << "Backpack cleared.\n";
    inventory.clear();
}