#include <QCoreApplication>
class X{

public:
    X(){}
    int k;
};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
