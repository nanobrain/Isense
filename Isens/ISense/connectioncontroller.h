#ifndef CONNECTIONCONTROLLER_H
#define CONNECTIONCONTROLLER_H

#include <QObject>
#include <QPair>
#include <QString>

class ConnectionController : public QObject
{
	Q_OBJECT
public:
	explicit ConnectionController(QObject *parent = 0);
	int connectToServer();
	int disconnectFromServer();
	QPair<QString,QString> getSensorsList();

signals:
	void updateSensorsList();
public slots:
};

#endif // CONNECTIONCONTROLLER_H