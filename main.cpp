#include "./lib/CWEB.cpp"

int main() {
    cweb::element* element = new cweb::element("p", "Hello World");
    cweb::element* element2 = new cweb::element("h1", "I am a header");
    element->setStyle("color: red;");
    element2->setStyle("color: blue;");
    cweb::head* head = new cweb::head("Hello World");
    cweb::body* body = new cweb::body();
    body->addElement(element2);
    body->addElement(element);
    cweb::page* page = new cweb::page(head, body);
    page->writeHTML("index.html");
    return 0;
}
