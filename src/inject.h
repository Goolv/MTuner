//--------------------------------------------------------------------------//
/// Copyright (c) 2019 by Milos Tosic. All Rights Reserved.                ///
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------//

#ifndef RTM_MTUNER_EXTERNALEDITOR_H
#define RTM_MTUNER_EXTERNALEDITOR_H

#include <MTuner/.qt/qt_ui/inject_ui.h>

class Inject : public QDialog
{
	Q_OBJECT

public:
	Inject(QWidget* _parent = 0, Qt::WindowFlags _flags = 0);

	void	changeEvent(QEvent* _event);

public Q_SLOTS:
	void launch();

private:
	Ui::Inject ui;
};

#endif // RTM_MTUNER_EXTERNALEDITOR_H
