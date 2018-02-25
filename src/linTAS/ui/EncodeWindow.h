/*
    Copyright 2015-2016 Clément Gallet <clement.gallet@ens-lyon.org>

    This file is part of libTAS.

    libTAS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libTAS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libTAS.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LINTAS_ENCODEWINDOW_H_INCLUDED
#define LINTAS_ENCODEWINDOW_H_INCLUDED

#ifdef LIBTAS_ENABLE_AVDUMPING

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>
#include <QSpinBox>

#include "../Context.h"

class EncodeWindow : public QDialog {
    Q_OBJECT

public:
    EncodeWindow(Context *c, QWidget *parent = Q_NULLPTR, Qt::WindowFlags flags = 0);

    /* Update UI elements when the config has changed */
    void update_config();

private:
    Context *context;

    QLineEdit *encodePath;
    QPushButton *browseEncodePath;
    QComboBox *videoChoice;
    QSpinBox *videoBitrate;
    QComboBox *audioChoice;
    QSpinBox *audioBitrate;

private slots:
    void slotBrowseEncodePath();
    void slotVideoCodec(int index);
    void slotAudioCodec(int index);
    void slotOk();
};

#endif
#endif
