#pragma once

#include "Common.h"

#include <string>

namespace OrderBookEntry {

void bindPython(py::module& m)
{
    //! bind class
    py::class_<shift::OrderBookEntry> ORDER_BOOK_ENTRY(m, "OrderBookEntry");
    ORDER_BOOK_ENTRY //! bind constructor
        .def(py::init<double, int, std::string, std::chrono::system_clock::time_point>(), py::arg("price"), py::arg("size"), py::arg("destination"), py::arg("time"));
    ORDER_BOOK_ENTRY //! bind property
        .def_property("price", &shift::OrderBookEntry::getPrice, &shift::OrderBookEntry::setPrice, py::return_value_policy::reference)
        .def_property("size", &shift::OrderBookEntry::getSize, &shift::OrderBookEntry::setSize, py::return_value_policy::reference)
        .def_property("destination", &shift::OrderBookEntry::getDestination, &shift::OrderBookEntry::setDestination, py::return_value_policy::reference)
        .def_property("time", &shift::OrderBookEntry::getTime, &shift::OrderBookEntry::setTime, py::return_value_policy::reference);
}

} // OrderBookEntry
