# c++ launches a Python script that loads a shared library module and sets a c++ variable

- Create a `.so` module.
- Call the Python script from the c++ code and pass a variable per reference.
- The Python script loads the module and modify the variable.
- The c++ code checks that the values has been modified

~~~.sh
$ mkdir build
$ cmake -Dpybind11_DIR=/home/ale/bin/pybind11/share/cmake/pybind11 ..
$ make
$ ./scripting
~~~

For now, you have to copy the generated `fooapi.cpython-35m-x86_64-linux-gnu.so` file next to the python script.
