#ifndef CWEB_CPP
#define CWEB_CPP
#include "./CWEB.h"

namespace cweb {
    element::element(string tag, string content) {
        this->tag = tag;
        this->content = content;
    }

    string element::getHTML() {
        return "<" + this->tag + " style=\"" + this->style + "\">" + this->content + "</" + this->tag + ">";
    }

    void element::setStyle(string style) {
        this->style = style;
    }

    head::head(string title) {
        this->title = title;
    }

    string head::getHTML() {
        return "<head><title>" + this->title + "</title></head>";
    }

    body::body(element* content) {
        this->content = content;
    }

    string body::getHTML() {
        return "<body>" + this->content->getHTML() + "</body>";
    }

    page::page(cweb::head* head, cweb::body* body) {
        this->head = head;
        this->body = body;
    }

    string page::getHTML() {
        return "<!DOCTYPE html><html>" + this->head->getHTML() + this->body->getHTML() + "</html>";
    }

    void page::writeHTML(string filename) {
        ofstream file;
        file.open(filename);
        file << this->getHTML();
        file.close();
    }
}

#endif
