#include "dialog.h"
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    auto layout = new QVBoxLayout(this);
    layout->addWidget(new QLabel("Type password"));
    auto input = new QLineEdit();
    input->setEchoMode(QLineEdit::Password);
    layout->addWidget(input);
    layout->addStretch();
    layout->addWidget(m_feedback = new QLabel());
    connect (input, &QLineEdit::textChanged,[this]()->QString {
        input->text().length() < 7 ? m_feedback->setText("Text smaller than 8 symbols"):false;
        return m_feedback->text();
    });


}

Dialog::~Dialog()
{

}
