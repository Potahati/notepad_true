#ifndef EDITOR_H
#define EDITOR_H

#include <QWidget>
#include <QBoxLayout>
#include <QPlainTextEdit>

class Editor : public QWidget
{
    Q_OBJECT
public:
    explicit Editor(QWidget *parent = nullptr);
private:
    QVBoxLayout * box;
    QPlainTextEdit * edit;

signals:

};

#endif // EDITOR_H
