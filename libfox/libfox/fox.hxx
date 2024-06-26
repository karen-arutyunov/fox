#pragma once

#include <iosfwd>
#include <string>

#include <libfox/export.hxx>

namespace fox
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBFOX_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
