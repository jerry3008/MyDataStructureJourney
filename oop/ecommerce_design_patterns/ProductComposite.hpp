#ifndef PRODUCTCOMPOSITE_HPP
#define PRODUCTCOMPOSITE_HPP

#include "Product.hpp"
#include <vector>
#include <algorithm>

// TODO: Implement ProductBundle class inheriting from ProductComponent with a vector of ProductComponent*
// TODO: Implement add, remove methods, and showDetails method in ProductBundle class

class ProductBundle : public ProductComponent
{
    std::vector<ProductComponent*> products;
    public:
    void add(ProductComponent* p)
    {
        products.push_back(p);
    }
    void remove(ProductComponent* p)
    {
        products.erase(std::remove(products.begin(), products.end(), p), products.end());
    }
    void showDetails()
    {
        for(const auto& all_p : products)
        {
            all_p->showDetails();
        }
    }
};
#endif // PRODUCTCOMPOSITE_HPP