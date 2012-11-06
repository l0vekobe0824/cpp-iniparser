// Copyright 2012 Fredy Wijaya
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include <fstream>
#include <iostream>
#include "INIParser.h"
#include "INIReaderException.h"
#include "Utilities.h"

namespace cppiniparser {

static const int BUFFER_SIZE = 8192;

INIConfig INIParser::Read(const std::string& filename) {
    std::ifstream is;
    is.open(filename.c_str());
    if (!is.is_open()) {
        std::string msg = "Unable to read " + filename;
        throw INIReaderException(msg.c_str());
    }

    INIConfig config;
    char buffer[BUFFER_SIZE];
    while (!is.eof()) {
        is.getline(buffer, BUFFER_SIZE);
        // TODO: implement this
    }
    is.close();

    return config;
}

void INIParser::Write(const INIConfig& config, const std::string& filename) {
    // TODO: implement this
}

}