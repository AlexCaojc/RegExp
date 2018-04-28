#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
#if 0
    QRegExp re("...");///'.'表示字符
    qDebug() << re.exactMatch("abc");

    QString temp = QString("a8279a").replace(QRegExp("\\d"), "-");///"\\d"表示数字,即使用"-"替换字符串中所有的数字
    qDebug() << temp;

    re = QRegExp("[a-z]{3}");
    //    QString pattern = re.pattern();
    qDebug() << QString("dd").contains(re);

#endif
    ///.  *   +  ?
    /// '.'any char,'*'zero or more，'+' one or more; '?' one or zero
    /// X{n} exactly n times;  X{n,} at least n times, X{n,m} at least n but not more than m times;

#if 0
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
#endif


    ///范围
#if 0
    qDebug() << QRegExp("[abc]").exactMatch("b");///只能取"abc"中的一个
    qDebug() << QRegExp("[^abc]").exactMatch("d");///除了"abc"之外的任意值
    qDebug() << QRegExp("^a").exactMatch("abc");///除了"abc"之外的任意值
    qDebug() << QRegExp("[a-zA-Z]").exactMatch("d");///a-zA-Z内的任意值
    qDebug() << QRegExp("[a-z]|[A-Z]").exactMatch("d");///a-zA-Z内的任意值
#endif

    /// \d,\s,\w,\\
    /// . Any character
    /// \d A digit [0-9]
    /// \D [^0-9]
    /// \s a whitespace character [\t\n\x0b\f\r]
    /// \S a not-whitespace character [^\s]
    /// \w a word character [a-zA-Z_0-9]
    /// \W a non-word character [^\w]
    ///
    qDebug() << QRegExp("\\s{4}").exactMatch(" \r\t\n");///四个空白字符
    qDebug() << QRegExp("\S").exactMatch(" ");///一个非空白字符
    qDebug() << QRegExp("\\w{3}").exactMatch("a_4");///三个构成单词的字符
    qDebug() << QRegExp("[a-z]{1,3}\\d+[&^%#]+").exactMatch("abc888&^%");///三个构成单词的字符
    /// zh正则表达式匹配一个反斜线，需要四个反斜线，因为反斜线是特殊字符，一个反斜线需要两个反斜线来表示，
    /// 而这两个反斜线还各自需要一个反斜线来表示
    qDebug() << QRegExp("\\\\").exactMatch("\\");



    return a.exec();
}
