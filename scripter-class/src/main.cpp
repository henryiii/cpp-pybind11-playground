#include <iostream>
#include <pybind11/pybind11.h>
#include <pybind11/embed.h>

#include "foo.h"

namespace py = pybind11;
using namespace pybind11::literals;

int main() {
    for(int i=0; i<2; i++) {
        py::scoped_interpreter guard{};
        
        Foo foo;
        
        auto module = py::module::import("fooapi");
        
        auto locals = py::dict("foo_copy"_a=foo);
        // Fails also: "foo_ref"_a=py::cast(foo, py::return_value_policy::reference)); // foo1 by value, foo2 by reference
        
        std::cout << "Once" << std::endl;
    }
}

