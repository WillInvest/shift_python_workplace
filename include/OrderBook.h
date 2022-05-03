#pragma once

#include "Common.h"

#include <string>

namespace OrderBook {

void bindPython(py::module& m)
{
    //! bind enum
    py::enum_<shift::OrderBook::Type> Type(m, "OrderBookType");
    Type
        .value("GLOBAL_BID", shift::OrderBook::Type::GLOBAL_BID)
        .value("GLOBAL_ASK", shift::OrderBook::Type::GLOBAL_ASK)
        .value("LOCAL_BID", shift::OrderBook::Type::LOCAL_BID)
        .value("LOCAL_ASK", shift::OrderBook::Type::LOCAL_ASK)
        .export_values();
}

} // OrderBook
