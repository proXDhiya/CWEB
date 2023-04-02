#include "./lib/CWEB.cpp"

int main() {
    cweb::element* element = new cweb::element("p", "Hello World");
    element->setStyle("color: red;");
    cweb::head* head = new cweb::head("Hello World");
    cweb::body* body = new cweb::body(element);
    cweb::page* page = new cweb::page(head, body);
    page->writeHTML("index.html");
    return 0;
}
