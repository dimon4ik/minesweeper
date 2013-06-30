#ifndef MINESWEEPER_H
#define MINESWEEPER_H

#include <QMainWindow>

class Minesweeper : public QMainWindow
{
    Q_OBJECT
    
public:
    Minesweeper(QWidget *parent = 0);
    ~Minesweeper();
};

#endif // MINESWEEPER_H
