#ifndef ZEROCONFPROTOCOL_H
#define ZEROCONFPROTOCOL_H

#include <zeroconf/servicebrowser.h>
#include <cpaster/protocol.h>

class ZeroconfProtocol : public CodePaster::Protocol
{
    Q_OBJECT
public:
    explicit ZeroconfProtocol(QObject *parent = 0);

    virtual QString name() const;

    virtual unsigned capabilities() const
    {
       return CodePaster::Protocol::ListCapability
            | CodePaster::Protocol::PostCommentCapability
            | CodePaster::Protocol::PostDescriptionCapability
            | CodePaster::Protocol::PostUserNameCapability;
    }

    virtual bool hasSettings() const {
        return false;
    }

    virtual void fetch(const QString &id);
    virtual void paste(const QString &text, ContentType ct, int expiryDays, const QString &username, const QString &comment, const QString &description);
    virtual void list();

signals:

public slots:

private:
    ZeroConf::ServiceBrowser *m_paster_browser;

};

#endif // ZEROCONFPROTOCOL_H
