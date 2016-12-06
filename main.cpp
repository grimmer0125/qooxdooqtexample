//#include "mainwindow.h"
#include <QMainWindow>

#include <QApplication>
#include <QPushButton>
//#include <QWebSettings>
#include <QWebView>

#include <QWebInspector>

#include <QWebSettings>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



//    QWebSettings::enablePersistentStorage( "/tmp/xyz");
//    QWebSettings::globalSettings()->setAttribute( QWebSettings::DeveloperExtrasEnabled, true);


    QMainWindow w;

    QWebView webview(&w);


    qDebug() << "q webview";

    //QFile source("test03.html");
    //source.open(QIODevice::ReadOnly);
//    webview.setHtml(QString::fromUtf8(source.readAll().constData())); //必须这样写

//    webview.load(QUrl("http://www.google.com/"));

    //work
     webview.load(QUrl("file:///Users/grimmer/qttest/test.html"));

    //work
//    webview.load(QUrl::fromLocalFile("/Users/grimmer/qttest/test.html"));

    w.setCentralWidget(&webview);


    // enable web inspector
    QWebInspector m_inspector;// = new QWebInspector( nullptr);

    QWebSettings::globalSettings()->setAttribute( QWebSettings::DeveloperExtrasEnabled, true);

//    webview.page()->settings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, true);

    m_inspector.setPage(webview.page());
    m_inspector.resize( 800, 600);
    m_inspector.setVisible(true);// setVisible(true);
//    m_inspector.show();

//    QPushButton *button = new QPushButton("Hello World", &);
//    button->setGeometry(10, 10, 80, 30);



    w.show();

//    QPushButton button ("Hello world !");
//    button.show();

    return a.exec();
}
