#include "qtDLGDebugStrings.h"

qtDLGDebugStrings::qtDLGDebugStrings(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	setupUi(this);
	setLayout(verticalLayout);
}

qtDLGDebugStrings::~qtDLGDebugStrings()
{

}