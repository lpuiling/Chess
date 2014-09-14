#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QWidget>
#include <QLabel>

class chessboard : public QWidget
{
    Q_OBJECT
public:
    static const int Rows = 8;
    static const int Columns = 8;
    explicit chessboard(QWidget *parent = 0):

    QWidget (parent)
    {
        layout = new QGridLayout (this);
        for (int column = 0; column < Columns; column++)
        {
            for (int row = 0; row < Rows; row++)
            {
                QLabel* cell = new QLabel (this);
                layout->addWidget(cell,row,column);
            }
         }
    }

signals:

public slots:

};

#endif // CHESSBOARD_H
