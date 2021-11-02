/**
 * @file
 * @brief файл класса Communicator
 * @page Communicator -
*/
#ifndef COMMUNICATOR_H
#define COMMUNICATOR_H
#include <qstring.h>
#include <QObject>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>

/**
 * @brief Класс для доступа к внешнему API
 * @details Данный класс реализует доступ к веб-сервису для получения данных
 * @authors МИРЭА
 * @version 0.1
 * @date 31.10.2021
 * @copyright GPL 3.0
 * @todo Реализовать запросы на все типы данных
 * @warning Данный класс создан в учебных целях
*/

class Communicator : public QObject
{
    Q_OBJECT
public:
    explicit Communicator(QObject *parent = nullptr);

signals:

};

#endif // COMMUNICATOR_H
