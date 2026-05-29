# 🛒 Mini Amazon - E-Commerce Platform Simulation

A C++ console application simulating an online shopping platform with product management, cart, orders, and a recommendation engine.

---


## 📁 Project Structure
```bash
mini_amazon/
│
├── includes/
│   ├── Product.h
│   ├── Clothing.h
│   ├── Electronic.h
│   ├── Food.h
│   ├── Cart.h
│   ├── Order.h
│   ├── Clients.h
│   ├── RecommendationEngine.h
│   └── Utils.h
│
├── src/
│   ├── main.cpp
│   ├── Product.cpp
│   ├── Clothing.cpp
│   ├── Electronic.cpp
│   ├── Food.cpp
│   ├── Cart.cpp
│   ├── Order.cpp
│   ├── Clients.cpp
│   ├── RecommendationEngine.cpp
│   └── Utils.cpp
│
├── CMakeLists.txt
├── README.md
└── .gitignore
```
---

## ✨ Features

- 📦 Product catalog (Clothing, Electronics, Food)
- 🛒 Cart management (add, remove, display)
- 💳 Order placement with TVA calculation (20%)
- 📉 Stock tracking with low stock alerts
- 👤 Client management with order history
- 🤖 Recommendation engine using polymorphism

---

## ⚙️ Requirements

- G++ compiler (MinGW on Windows)
- C++23 standard

---

## 🚀 How to Run

### Configure the project:
```bash
cmake -S . -B build

cmake --build build
```

### Run:
```bash
# Windows
./mini_amazon.exe

# Linux/Mac
./mini_amazon
```

---

## 📌 Menu Options

| Option | Description |
|--------|-------------|
| 1 | Display all products |
| 2 | Add product to cart |
| 3 | Remove product from cart |
| 4 | View cart |
| 5 | Place order |
| 6 | View order history |
| 0 | Exit |

---

## 🏗️ Class Structure
Products (base)
├── Clothing   (size, color)
├── Electronic (brand)
└── Food       (brand)
Cart        → manages products before order
Order       → confirmed purchase with TVA
Clients     → client info + order history

---

## 👨‍💻 Author

Made with C++ as part of OOP coursework.
