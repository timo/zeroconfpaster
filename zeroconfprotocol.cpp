#include "zeroconfprotocol.h"

ZeroconfProtocol::ZeroconfProtocol(QObject *parent)
{
}

QString ZeroconfProtocol::name() const {
    return QString::fromAscii("Zeroconf");
}

void ZeroconfProtocol::fetch(const QString &id) {

}

void ZeroconfProtocol::paste(const QString &text, ContentType ct, int expiryDays, const QString &username, const QString &comment, const QString &description) {

}

void ZeroconfProtocol::list() {

}
