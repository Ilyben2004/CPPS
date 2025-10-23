# 🧠 42 C++ Modules (CPP00 → CPP09)

This repository contains all my solutions and notes for the **C++ modules** in the 42/1337 cursus.  
These projects progressively introduce the C++ language, from basic syntax to advanced object-oriented programming, templates, and STL.

---

## 🧩 Overview

| Module | Topics | Main Concepts |
|:------:|:-------|:---------------|
| **CPP00** | Basics of C++ | Namespaces, classes, member functions, std::iostream, initialization |
| **CPP01** | Memory and References | new/delete, references, pointers, file streams |
| **CPP02** | Ad-hoc polymorphism | Orthodox Canonical Form, operator overloading, fixed-point numbers |
| **CPP03** | Inheritance | Constructors/destructors, method overriding, class hierarchy (ClapTrap) |
| **CPP04** | Polymorphism | Abstract classes, virtual functions, deep vs shallow copy (Animals, Materia) |
| **CPP05** | Exceptions | try/catch, nested classes, Bureaucrat and Forms system |
| **CPP06** | Casting | static_cast, dynamic_cast, reinterpret_cast, const_cast |
| **CPP07** | Templates | Function templates, class templates, generic programming |
| **CPP08** | STL Containers | Vector, List, Deque, Iterators, algorithms |
| **CPP09** | Advanced STL | Parsing, algorithms, performance optimization (BitcoinExchange, PmergeMe, RPN) |

---

## 🛠️ Compilation

All projects are compiled with:
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

Each module contains its own Makefile with the following rules:
- `make` – compile the project  
- `make clean` – remove object files  
- `make fclean` – remove binaries  
- `make re` – rebuild everything  

---

## 🧱 Structure Example

```
CPP00/
├── ex00/
│   ├── Makefile
│   ├── main.cpp
│   ├── ...
└── ex01/
    ├── Makefile
    ├── PhoneBook.cpp
    ├── Contact.cpp
    └── main.cpp
```

Each folder contains:
- A `Makefile`
- `.hpp` headers and `.cpp` sources
- A `main.cpp` for testing

---

## 🧭 Learning Path

1. **CPP00–CPP02:** Core C++ syntax and memory model.  
2. **CPP03–CPP04:** Object-oriented design and polymorphism.  
3. **CPP05–CPP06:** Error handling and casting.  
4. **CPP07–CPP09:** Templates and STL mastery.

---

## 💡 Tips

- Always follow the **Orthodox Canonical Form** (constructor, destructor, copy constructor, copy assignment).
- Use `const` correctness everywhere possible.
- Understand the **Rule of Three** and **Rule of Five**.
- Avoid memory leaks — prefer RAII and smart pointers (for personal projects).
- Test with **valgrind**.
- Keep your code **C++98 compliant** (no `auto`, no range-for, etc.).

---



---

## 🏁 Status

| Module | Status |
|:------:|:-------|
| CPP00 | ✅ Done |
| CPP01 | ✅ Done |
| CPP02 | ✅ Done |
| CPP03 | ✅ Done |
| CPP04 | 🕓 In progress |
| CPP05 | ⏳ Pending |
| CPP06 | ⏳ Pending |
| CPP07 | ⏳ Pending |
| CPP08 | ⏳ Pending |
| CPP09 | ⏳ Pending |

---

## 👤 Author

**Ilyas Bennajeh**  
📧 [ilyasbennajeh@gmail.com](mailto:ilyasbennajeh@gmail.com)  
💻 [GitHub: Ilyben2004](https://github.com/Ilyben2004)

---

> *“Don’t just write code — write elegant, maintainable, and meaningful code.”*
