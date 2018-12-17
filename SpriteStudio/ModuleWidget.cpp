#include "stdafx.h"
#include "ModuleWidget.h"

ModuleWidget::ModuleWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    CreateTable();
}

ModuleWidget::~ModuleWidget()
{
}

void ModuleWidget::CreateTable()
{
    tableModel = new QStandardItemModel();
    ui.tableView->setModel(tableModel);

    // table model
    tableModel->setRowCount(6);
    tableModel->setRowCount(10);
    tableModel->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("Id")));
    tableModel->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("X")));
    tableModel->setHorizontalHeaderItem(2, new QStandardItem(QObject::tr("Y")));
    tableModel->setHorizontalHeaderItem(3, new QStandardItem(QObject::tr("Width")));
    tableModel->setHorizontalHeaderItem(4, new QStandardItem(QObject::tr("Height")));
    tableModel->setHorizontalHeaderItem(5, new QStandardItem(QObject::tr("Info")));

    // table view
    ui.tableView->setColumnWidth(0, 50);
    ui.tableView->setColumnWidth(1, 60);
    ui.tableView->setColumnWidth(2, 60);
    ui.tableView->setColumnWidth(3, 80);
    ui.tableView->setColumnWidth(4, 80);
    ui.tableView->setColumnWidth(5, 100);

    ui.tableView->verticalHeader()->setVisible(false);
    ui.tableView->horizontalHeader()->setStretchLastSection(true);

    ui.tableView->setAlternatingRowColors(true);
    ui.tableView->setStyleSheet("QTableView{background-color: rgb(250, 250, 250);"
        "alternate-background-color: rgb(240, 240, 240);}");

    ui.tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui.tableView->setContextMenuPolicy(Qt::CustomContextMenu);

    // ÕûÐÐÑ¡Ôñ
    ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

