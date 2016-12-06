#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

//#include <QWebInspector>
#include <QWidget>
//#include <QWebView>
//#include <QtWebKitWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{  
//    m_view = new QWebView(this);
//    QWebView webview(this);

    qDebug() << "q webview";

//     webview.load(QUrl("http://www.tudou.com/"));

//    QWebInspector * m_inspector = nullptr;
//    m_inspector = new QWebInspector( nullptr);
//    m_inspector-> setPage( m_view-> page());
//    m_inspector-> resize( 800, 600);

//    connect( m_view->page()->mainFrame(),
//              & QWebFrame::javaScriptWindowObjectCleared,
//              this,
//              & MainWindow::addToJavaScript );

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int k = 0;
    k++;
    qDebug() << "C++ Style Debug Message";
}

// This method is called when the global javascript object is cleared
// (i.e. when a new page is loaded). We use it to setup bridge JS <--> C++.
//void MainWindow::addToJavaScript()
//{
//    for( auto & entry : m_jsExports ) {
//        qDebug() << "Exporting " << entry.first;
////        m_view->page()->mainFrame()->addToJavaScriptWindowObject(
////                    entry.first, entry.second);
//    }
//}
