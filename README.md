# UnitTestLibrary-Template

A very simple template I made to use in creating static libraries

### To change the name of the library

In the root CMakeLists.txt change the argument on this line to the new library name
```
add_subdirectory(Library)
```
to (for example)
```
add_subdirectory(MyNewLibrary)
```

And in the CMakeLists.txt of the Library folder, change the argument on this line
```
set(PROJECT_NAME Library)
```
to match the name set in the root



