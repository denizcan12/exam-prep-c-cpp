# C and C++ Exam Preparation

This repository collects C and C++ practice work from an exam-preparation period. The goal is to keep the original learning path visible while presenting the material in a clean, easy-to-navigate structure.

## Contents

- `c/` - C exam-preparation exercises, mainly linked-list and recursion problems.
- `cpp/` - C++ class practice, slide exercises, recursion/vector/string exercises, and early project work.

## Notes

This repository contains small exercises I prepared while studying for C and C++ exams. The examples are intentionally compact and practice-focused.

## Building Examples

Most single-file C++ exercises can be compiled with:

```bash
clang++ -std=c++17 path/to/file.cpp -o program
```

Most single-file C exercises can be compiled with:

```bash
clang -std=c11 path/to/file.c -o program
```

Multi-file examples should be compiled together. For example:

```bash
clang++ -std=c++17 "cpp/oop-basics/main.cpp" "cpp/oop-basics/car.cpp" -o car_demo
```
