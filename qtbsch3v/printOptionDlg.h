﻿/****************************************************************************
    Qt-BSch3V schematic capture
    Copyright (C) 2002-2006 H.Okada

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*****************************************************************************/

#ifndef PRINTOPTIONDLG_H
#define PRINTOPTIONDLG_H

#include <QDialog>
#include "ui_printOption.h"

class printOptionDlg : public QDialog
{
    Q_OBJECT

public:
    printOptionDlg(QWidget *parent = 0);
    int exec();
    void accept();

    int m_left;
    int m_right;
    int m_top;
    int m_bottom;
    bool m_color;
private:
    Ui::printOption ui;
};



#endif // PRINTOPTIONDLG_H


/*
  Local Variables:
  mode: c++
  End:
 */
