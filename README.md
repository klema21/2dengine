#### CFPB Open Source Project Template Instructions

1. Create a new project.
2. [Copy these files into the new project](#installation)
3. Update the README, replacing the contents below as prescribed.
4. Add any libraries, assets, or hard dependencies whose source code will be included
   in the project's repository to the _Exceptions_ section in the [TERMS](TERMS.md).
  - If no exceptions are needed, remove that section from TERMS.
5. If working with an existing code base, answer the questions on the [open source checklist](opensource-checklist.md)
6. Delete these instructions and everything up to the _Project Title_ from the README.
7. Write some great software and tell people about it.

> Keep the README fresh! It's the first thing people see and will make the initial impression.

## Installation

To install all of the template files, run the following script from the root of your project's directory:

```
git clone https://github.com/klema21/2dengine.git
```

----

# 2D Game Engine

**Description**:  
A game engine, is a software-development environment designed for people to build 2D video games.

Other things to include:

  - **Technology Stack**: C++, SDL2, Lua.
  - **Status**:  Development. This is also a good place to link to the [CHANGELOG](CHANGELOG.md).


## Dependencies

A package that installs many other packages, like g++ and gcc.
```
sudo apt install build-essential
```

SDL is a library that allows programs portable low level access to a video framebuffer, audio output, mouse and keyboard.
```
sudo apt install libsdl2-dev
sudo apt install libsdl2-image-dev
sudo apt install libsdl2-ttf-dev
sudo apt install libsdl2-mixer-dev
```

Lua is a lightweight, high-level, multi-paradigm programming language designed primarily for embedded use in applications.
```
sudo apt install lua5.3
```
