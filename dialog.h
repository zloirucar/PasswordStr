#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class QLabel;


class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    QLabel *m_feedback;


};


#endif // DIALOG_H
