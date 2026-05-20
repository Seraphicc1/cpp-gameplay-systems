#include <iostream>
#include <vector>

std::string addItem(std::string item, std::vector<std::string>& inventory, int maxSlots);
std::string removeItem(std::string item, std::vector<std::string>& inventory);
std::string viewInventory(std::vector<std::string>& inventory);
std::string clearInventory(std::vector<std::string>& inventory);

int main() // Implement categories and sourrounding systems later, (open backpack?), (equip item? use item?) (item durability)
{
    std::vector<std::string> inventory;
    int maxSlots = 5;
    std::string action;

    std::cout << "*********************** Inventory System ***********************\n";
    std::cout << "What would you like to do? (add/remove/view/clear/exit): ";
    std::cin >> action;

    while()

    return 0;
}

std::string addItem(std::string item, std::vector<std::string>& inventory, int maxSlots){
    if (maxSlots > inventory.size()) {
        inventory.push_back(item);
        maxSlots--;
        
        return item + " added to inventory.\n";
    }
}
std::string removeItem(std::string item, std::vector<std::string>& inventory) {
    // Find item in inventory
    // Remove item and clear slot

    return item + " removed from inventory.\n";
}
std::string viewInventory(std::vector<std::string>& inventory) {
    // Go throug inventory and print items
}
std::string clearInventory(std::vector<std::string>& inventory) {
    // Clear inventory and reset max slots
    // Return message
}