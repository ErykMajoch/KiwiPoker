# Kiwi Poker
## A Texas Hold'em Poker Game Engine written in C++

### Building
First, make sure you have the following installed:
* CMake (Minimum version `3.14`)
* GCC (Minimum version `7.4.0`)

To configure:
```bash
cmake -S . -B build
```

To build:
```bash
cmake --build build
```
##### Documentation
This project is also setup to automatically build documentation using Doxygen, which you can see how to install [here](https://www.doxygen.nl/download.html).

It will be build every time you build the project. To view the documentation, open `docs/html/index.html` in your browser.

![Configure Status](http://cbadge-instance/:CDashProjectName/:GitCommitSHA/configure.svg)
