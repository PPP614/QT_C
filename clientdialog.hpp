#ifndef CLIENTDIALOG_HPP
#define CLIENTDIALOG_HPP

#include <QDialog>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <QValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class ClientDialog; }
QT_END_NAMESPACE

class ClientDialog : public QDialog
{
    Q_OBJECT

public:
    // 新增 contactId 参数，并设置默认值
    ClientDialog(QWidget *parent = nullptr, int contactId = -1);
    ~ClientDialog();

private slots:
    // 发送消息
    void on_sendButton_clicked();
    // 连接服务器
    void on_connectButton_clicked();
    // 和服务器连接成功时执行的槽函数
    void onConnected();
    // 和服务器断开连接执行的槽函数
    void onDisconnected();
    // 接收聊天消息的槽函数
    void onReadyRead();
    // 网络异常执行的槽函数
    void onError();
    void on_myButton_clicked();
    void on_pushButton_clicked();


private:
    Ui::ClientDialog *ui;
    bool status;    // 标识状态：在线or离线
    QTcpSocket tcpsocket;   // 和服务器通信的套接字
    QHostAddress serverIP;  // 记录服务器的地址
    quint16 serverPort;     // 服务器端口
    QString username;       // 聊天室昵称
    int m_contactId;       // 存储联系人ID
};

#endif // CLIENTDIALOG_HPP
