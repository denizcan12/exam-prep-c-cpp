#pragma once
#include "vaultItem.h"
#include <vector>

class Vault{
    private:
    std::vector<VaultItem> vectorItems;

    public:
    Vault();

    void addItem(const VaultItem &it);
    void listItems() const;
};