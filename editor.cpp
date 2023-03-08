#include "editor.h"

Editor::Editor(QWidget *parent)
    : QWidget{parent}
{
    box = new QVBoxLayout(this);
    edit = new QPlainTextEdit(this);
    box->addWidget(edit);
}
