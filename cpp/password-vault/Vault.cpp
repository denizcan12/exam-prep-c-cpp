#include "Vault.h"
#include <iostream>

void Vault::addItem(const VaultItem &it){
    vectorItems.push_back(it);
}

Vault::Vault(){}

void Vault::listItems() const{

    for (const VaultItem &it : vectorItems){
    it.getTitle();
    it.getUsername();
    it.getUrl();
    it.getID();
    std::cout << "-------------" << std::endl;
    }
}