#ifndef CWEB_H
#define CWEB_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

namespace cweb {
    class element {
        protected:
            string tag;

        private:
            string style;
            string content;

        public:
            element(string tag, string content = "");
            virtual string getHTML();
            virtual void setStyle(string style);
    };

    class head {
        private:
            string title;

        public:
            head(string title);
            string getHTML();
    };

    class body {
        private:
            vector<element*> content;

        public:
            body();
            void addElement(element* element);
            string getHTML();
    };

    class page {
        private:
            cweb::head* head;
            cweb::body* body;

        public:
            page(cweb::head* head, cweb::body* body);
            string getHTML();
            void writeHTML(string filename);
    };
}

#endif
