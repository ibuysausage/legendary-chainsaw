# C++ projects
This is where I keep all of my c++ projects.<br>
Feel free to check them out!

### Dependencies

| Dependency |
| ----------- |
| cmake |
| gcc |
| git |
| ninja |

**Arch**
```bash
$ sudo pacman -S base-devel git cmake gcc ninja
```

**Debian/Ubuntu**
```bash
$ sudo apt install build-essential git cmake ninja-build
```

# Building
<small>Windows and Macos build instructions will be added soon</small> 
## Linux
After building the binaries will be located in:</br>
`source-dir/build/bin` for cmake</br>
You can install them with `make install`</br>
and uninstall with `make uninstall`

1. Clone the github repository
```bash
$ git clone https://github.com/clippyricer/legendary-chainsaw.git
$ cd legendary-chainsaw
```
2. Actually build

### Build using cmake
```bash
$ mkdir build/ && cd build/
$ cmake .. && ninja
```
