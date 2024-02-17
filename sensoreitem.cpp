#include "sensoreitem.h"

/*SensoreItem::SensoreItem(QString n,QString c ,QString i) : img(i),nome(n),codice(c) {
    QHBoxLayout * layout= new QHBoxLayout;
    QVBoxLayout * info= new QVBoxLayout;
    QVBoxLayout * bottoni= new QVBoxLayout;
    QPushButton * modifica= new QPushButton("modifica");
    QPushButton * elimina= new QPushButton("elimina");
    info->addWidget(new QLabel(nome));
    info->addWidget(new QLabel(codice));

    bottoni ->addWidget(modifica);
    bottoni ->addWidget(elimina);

    layout->addWidget(new QLabel(img));
    layout->addLayout(info);
    layout->addLayout(bottoni);

    setLayout(layout);
}*/
SensoreItem::SensoreItem(QString n, QString c, QString i) : img(i), nome(n), codice(c) {
    QHBoxLayout *layout = new QHBoxLayout;

    // Aggiungi l'immagine al layout
    layout->addWidget(new QLabel(img));

    // Aggiungi le etichette al layout
    QVBoxLayout *info = new QVBoxLayout;
    info->addWidget(new QLabel(nome));
    info->addWidget(new QLabel(codice));
    layout->addLayout(info);

    // Aggiungi i pulsanti al layout
    modifica = new QPushButton("modifica");
    elimina = new QPushButton("elimina");
    layout->addWidget(modifica);
    layout->addWidget(elimina);

    // Imposta il layout principale del widget
    setLayout(layout);
}


