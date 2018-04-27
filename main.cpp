#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QRegExp re("...");///'.'表示字符
    qDebug() << re.exactMatch("abc");

    QString temp = QString("a8279a").replace(QRegExp("\\d"), "-");///"\\d"表示数字,即使用"-"替换字符串中所有的数字
    qDebug() << temp;

    re = QRegExp("[a-z]{3}");
//    QString pattern = re.pattern();
    qDebug() << QString("dd").contains(re);


    ///.  *   +  ?
    /// '.'any char,'*'zero or more，'+' one or more; '?' one or zero
    /// X{n} exactly n times;  X{n,} at least n times, X{n,m} at least n but not more than m times;

    qDebug() << QRegExp(".").exactMatch("a");
    qDebug() << QRegExp("a*").exactMatch("");
    qDebug() << QRegExp("a+").exactMatch("aaa");
    qDebug() << QRegExp("a+").exactMatch("b");
    qDebug() << QRegExp("a{5}").exactMatch("aaa");
    qDebug() << QRegExp("a{5}").exactMatch("aaaaa");
    qDebug() << QRegExp("a{5,}").exactMatch("aaaa");
    qDebug() << QRegExp("a{5,}").exactMatch("aaaaaaa");
    qDebug() << QRegExp("a{5,10}").exactMatch("aaaaaaaaaaaaaa");


    qDebug() << QRegExp("\\d{1,100}").exactMatch("215614545421255");
    qDebug() << QRegExp("\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}").exactMatch("192.168.0.235");
    qDebug() << QRegExp("[0-2][0-9][0-9]").exactMatch("392");


    return a.exec();
}
