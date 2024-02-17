#ifndef SENSOREITEM_H
#define SENSOREITEM_H

#include <QListWidgetItem>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class SensoreItem : public QWidget
{
    Q_OBJECT
public:
    SensoreItem(QString n,QString d,QString i );
private:
    QString img;
    QString nome;
    QString codice;
    QPushButton* modifica;
    QPushButton * elimina;
};

#endif // SENSOREITEM_H
