#pragma once
#include <string>
#include <vector>
class VaultItem{

private:
std::string url;
std::string title;
std::string username;
std::string password;
int id;

public:
VaultItem(std::string url, std::string title, std::string username, std::string password, int id);
VaultItem();

void getUrl() const;
void getTitle() const;
void getUsername() const;
void getID() const;
};