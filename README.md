# C++ projects
This is where I keep all of my c++ projects.<br>
Feel free to check them out!

### Dependencies

| Dependency  | Usage in project |
| ----------- | ----------- |
| cmake | makefile generator |
| make | compile binaries |
| gcc | compiler |
| fzf | tool for config |
| git | cloning repo |
| docker | run using docker |
| ninja | compile binaries |

**Arch**
```bash
$ sudo pacman -S base-devel git cmake make gcc ninja
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
2. Actually build it

First you must must select with programs to compile</br>
Do that by running the setup script `./setup`</br>
You only need to do this with CMAKE</br>
The default build configuration is `Release`</br>
| Keys | Action |
| ---- | ------ |
| TAB | Select/Deselect |
| ENTER | Confirm |
| ESC | Exit |
| CTRL+A | Select/Deselect ALL |

### Build using cmake
```bash
$ mkdir build/ && cd build/
$ cmake ..
```
