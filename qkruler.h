#ifndef QKRULER_H
#define QKRULER_H

#include "geometrycalculator.h"

#include <QWidget>

class QkRuler : public QWidget
{
    Q_OBJECT

public:
    QkRuler(QWidget *parent = nullptr);
    ~QkRuler() override;

    QSize sizeHint() const override;

protected:
    void keyReleaseEvent(QKeyEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    void _appear();
    void _initTray();
    void _updateMask();

    GeometryCalculator m_geoCalc;
    QPoint m_dragPosition;
    bool m_hasDragged;
    int m_selectedTick;

};

#endif // QKRULER_H
