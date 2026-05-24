# Mini Amazon

A C++ project that simulates a small e-commerce platform similar to Amazon.

## Features

- Product catalog management

  - Electronics
  - Food
  - Clothing

- Shopping cart system
- Order validation
- Stock management
- Stock shortage alerts
- Total price calculation
- Discounts and TVA
- Customer order history

## Advanced Feature

Recommendation engine using polymorphism.

Each product type calculates its similarity score with the customer's cart without checking the concrete product type.

Example:

```cpp
for(Product* p : products)
{
    score += p->similarityScore();
}
```
