#pragma once
#include <string>
namespace epub
{
    namespace html
    {
#include <tidy.h>
    class tidyhtml
    {
        TidyDoc tdoc;
        public:
            tidyhtml();
            void parse(std::string x, std::string path);
            //TODO: error handling
    };
    }
}
