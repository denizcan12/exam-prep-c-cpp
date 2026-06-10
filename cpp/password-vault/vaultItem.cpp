#include <iostream>
#include <string>
#include "vaultItem.h"

VaultItem::VaultItem(std::string url, std::string title, std::string username, std::string password, int id){
    this->url = url;
    this->title = title;
    this->username = username;
    this->password = password;
    this->id = id;
}

VaultItem::VaultItem(){
    url = "Default URL";
    title = "Default Title";
    password = "Default Password";
    username = "Default Username";
    id = 0;
}

void VaultItem::getUsername() const{
    std::cout << "Your username is: " << username << std::endl;
}

void VaultItem::getTitle()const{
    std::cout << "The title is: " << title << std::endl;
}

void VaultItem::getUrl() const{
    std::cout << "The URL is: " << url << std::endl;
}

void VaultItem::getID() const{
    std::cout << "The ID is: " << id << std::endl;
}