#include <QString>
#include <QtTest>

class Ur4Test : public QObject
{
    Q_OBJECT

public:
    Ur4Test();

private Q_SLOTS:
    void testCase1();
};

Ur4Test::Ur4Test()
{
}

void Ur4Test::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(Ur4Test)

#include "tst_ur4test.moc"
