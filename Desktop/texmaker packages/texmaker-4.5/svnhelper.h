#ifndef SVNHELPER_H
#define SVNHELPER_H

#include <QProcess>
class SvnHelper : public QObject
{
    Q_OBJECT
public:
    SvnHelper(QString filename, QString svnPath);
    ~SvnHelper();


signals:
    void uncommittedLines(QList<int>);

private slots:
    void parseUnified(int exitCode, QProcess::ExitStatus exitStatus);
private:
    QProcess _process;
    QList<int> _uncommitLines;
};

#endif // SVNHELPER_H
