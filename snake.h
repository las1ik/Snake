#ifndef SNAKE_H
#define SNAKE_H

#include <QWidget>
#include <QKeyEvent>

class snake : public QWidget
{
    Q_OBJECT
public:
    explicit snake(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *);
private:
    QImage dot;
    QImage head;
    QImage apple;

    static const int B_WIDTH = 500;
    static const int B_HEIGHT = 500;
    static const int DOT_SIZE = 10;
    static const int ALL_DOTS = 900;
    static const int RAND_POS = 29;
    static const int DELAY = 140;

    int timerId;
    int dots;
    int apple_x;
    int apple_y;

    int w = width();

    int x[ALL_DOTS];
    int y[ALL_DOTS];

    bool leftDirection;
    bool rightDirection;
    bool upDirection;
    bool downDirection;
    bool inGame;

    void loadImages();
    void initGame();
    void locateApple();
    void checkApple();
    void checkCollision();
    void move();
    void doDrawing();
    void gameOver(QPainter &);

signals:
};

#endif // SNAKE_H
