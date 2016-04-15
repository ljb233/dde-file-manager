#ifndef DCRUMBWIDGET_H
#define DCRUMBWIDGET_H

#include <QFrame>
#include <QHBoxLayout>
#include <QButtonGroup>

class FMEvent;
class DCrumbButton;

class DCrumbWidget : public QFrame
{
    Q_OBJECT
public:
    explicit DCrumbWidget(QWidget *parent = 0);
    void addCrumb(const QString &text);
    void addCrumb(const QStringList &list);
    void setCrumb(const QString &path);
    void clear();
    QString back();
    QString path();
private:
    bool hasPath(QString path);
    bool isInHome(QString path);
    bool isHomeFolder(QString path);
    bool isRootFolder(QString path);
    QHBoxLayout * m_buttonLayout;
    QButtonGroup m_group;
    QString m_path;
    QString m_homePath;
public slots:
    void buttonPressed();
signals:
    void crumbSelected(const FMEvent &event);
};

#endif // DCRUMBWIDGET_H
