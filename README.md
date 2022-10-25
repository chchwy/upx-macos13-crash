# UPX compressed executable crashes on macOS 13.0

A simple command line project for UPX bug report. It does nothing but printing a few lines of texts.

It produces a x86_64 executable for mac.

How to build
```sh
mkdir build
cd build
cmake .. -G Xcode
cmake --build .
```
