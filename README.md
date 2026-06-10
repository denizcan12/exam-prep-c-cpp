# C and C++ Exam Preparation

This repository collects C and C++ practice work from an exam-preparation period. The goal is to keep the original learning path visible while presenting the material in a clean, easy-to-navigate structure.

## Contents

- `c/` - C exam-preparation exercises, mainly linked-list and recursion problems.
- `cpp/` - C++ class practice, slide exercises, recursion/vector/string exercises, and early project work.
- `REVIEW_NOTES.md` - files intentionally left out of the first publish-ready version and why.

## Notes

- Compiled binaries, local editor files, macOS metadata, and course PDF files are intentionally excluded.
- Turkish learning comments were translated to English where they appeared in source comments.
- The code intentionally preserves the original practice style. Only obvious packaging cleanup was applied in this publish-ready copy.
- A few very incomplete or duplicate draft files were left out of the initial repo; see `REVIEW_NOTES.md`.

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
