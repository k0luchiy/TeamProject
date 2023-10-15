#pragma once
#include <cstdio>
#include <msclr\marshal_cppstd.h>
#include <string>

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for FilesAttrForm
	/// </summary>
	public ref class FilesAttrForm : public System::Windows::Forms::Form
	{
	public:
		FilesAttrForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		FilesAttrForm(System::Windows::Forms::Form^ parent_form)
		{
			this->parent_form = parent_form;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FilesAttrForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Form^ parent_form;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ actionToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ toMenuToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStrip;
	private: System::IO::FileInfo^ fileinfo;
	private: System::Windows::Forms::SplitContainer^ main_splitter;
	private: System::Windows::Forms::Label^ title_label;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ typeColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pathColumn;
	private: System::Windows::Forms::SplitContainer^ controls_splitter;
	private: System::Windows::Forms::TableLayoutPanel^ attr_tableView;
	private: System::Windows::Forms::GroupBox^ attr_groupBox;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::CheckBox^ archive_checkbox;
	private: System::Windows::Forms::CheckBox^ hidden_checkbox;
	private: System::Windows::Forms::CheckBox^ readOnly_checkbox;
	private: System::Windows::Forms::CheckBox^ system_checkbox;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::SplitContainer^ fileAttr_splitter3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ catalog_textbox;

	private: System::Windows::Forms::SplitContainer^ fileAttr_splitter2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ fileSize_textbox;

	private: System::Windows::Forms::SplitContainer^ fileAttr_splitter1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ fileName_textbox;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sizeColumn;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ modefiedDate_textbox;

	private: System::Windows::Forms::CheckBox^ applyToAll_checkbox;

	private: System::Windows::Forms::Button^ clear_btn;
	private: System::Windows::Forms::Button^ openFile_btn;
	private: System::Windows::Forms::Button^ apply_btn;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ fileExtension_textbox;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->actionToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toMenuToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->main_splitter = (gcnew System::Windows::Forms::SplitContainer());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->typeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pathColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sizeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->controls_splitter = (gcnew System::Windows::Forms::SplitContainer());
			this->attr_tableView = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->fileExtension_textbox = (gcnew System::Windows::Forms::TextBox());
			this->applyToAll_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->fileAttr_splitter3 = (gcnew System::Windows::Forms::SplitContainer());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->catalog_textbox = (gcnew System::Windows::Forms::TextBox());
			this->fileAttr_splitter2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fileSize_textbox = (gcnew System::Windows::Forms::TextBox());
			this->fileAttr_splitter1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fileName_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->modefiedDate_textbox = (gcnew System::Windows::Forms::TextBox());
			this->attr_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->archive_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->hidden_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->readOnly_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->system_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->openFile_btn = (gcnew System::Windows::Forms::Button());
			this->apply_btn = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_splitter))->BeginInit();
			this->main_splitter->Panel1->SuspendLayout();
			this->main_splitter->Panel2->SuspendLayout();
			this->main_splitter->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controls_splitter))->BeginInit();
			this->controls_splitter->Panel1->SuspendLayout();
			this->controls_splitter->Panel2->SuspendLayout();
			this->controls_splitter->SuspendLayout();
			this->attr_tableView->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileAttr_splitter3))->BeginInit();
			this->fileAttr_splitter3->Panel1->SuspendLayout();
			this->fileAttr_splitter3->Panel2->SuspendLayout();
			this->fileAttr_splitter3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileAttr_splitter2))->BeginInit();
			this->fileAttr_splitter2->Panel1->SuspendLayout();
			this->fileAttr_splitter2->Panel2->SuspendLayout();
			this->fileAttr_splitter2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileAttr_splitter1))->BeginInit();
			this->fileAttr_splitter1->Panel1->SuspendLayout();
			this->fileAttr_splitter1->Panel2->SuspendLayout();
			this->fileAttr_splitter1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->attr_groupBox->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->actionToolStrip,
					this->aboutToolStrip, this->exitToolStrip
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(444, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// actionToolStrip
			// 
			this->actionToolStrip->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toMenuToolStrip });
			this->actionToolStrip->Name = L"actionToolStrip";
			this->actionToolStrip->Size = System::Drawing::Size(70, 20);
			this->actionToolStrip->Text = L"Действия";
			// 
			// toMenuToolStrip
			// 
			this->toMenuToolStrip->Name = L"toMenuToolStrip";
			this->toMenuToolStrip->Size = System::Drawing::Size(116, 22);
			this->toMenuToolStrip->Text = L"В меню";
			this->toMenuToolStrip->Click += gcnew System::EventHandler(this, &FilesAttrForm::toMenuToolStrip_Click);
			// 
			// aboutToolStrip
			// 
			this->aboutToolStrip->Name = L"aboutToolStrip";
			this->aboutToolStrip->Size = System::Drawing::Size(96, 20);
			this->aboutToolStrip->Text = L"О Программе";
			this->aboutToolStrip->Click += gcnew System::EventHandler(this, &FilesAttrForm::aboutToolStrip_Click);
			// 
			// exitToolStrip
			// 
			this->exitToolStrip->Name = L"exitToolStrip";
			this->exitToolStrip->Size = System::Drawing::Size(54, 20);
			this->exitToolStrip->Text = L"Выход";
			this->exitToolStrip->Click += gcnew System::EventHandler(this, &FilesAttrForm::exitToolStrip_Click);
			// 
			// main_splitter
			// 
			this->main_splitter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_splitter->Location = System::Drawing::Point(0, 24);
			this->main_splitter->Name = L"main_splitter";
			this->main_splitter->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// main_splitter.Panel1
			// 
			this->main_splitter->Panel1->Controls->Add(this->title_label);
			// 
			// main_splitter.Panel2
			// 
			this->main_splitter->Panel2->Controls->Add(this->splitContainer2);
			this->main_splitter->Size = System::Drawing::Size(444, 434);
			this->main_splitter->SplitterDistance = 40;
			this->main_splitter->TabIndex = 3;
			// 
			// title_label
			// 
			this->title_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->title_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_label->Location = System::Drawing::Point(0, 0);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(444, 40);
			this->title_label->TabIndex = 0;
			this->title_label->Text = L"Изменение атрибутов файлов";
			this->title_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->dataGridView1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->controls_splitter);
			this->splitContainer2->Size = System::Drawing::Size(444, 390);
			this->splitContainer2->SplitterDistance = 147;
			this->splitContainer2->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->NameColumn,
					this->typeColumn, this->pathColumn, this->sizeColumn
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 147);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FilesAttrForm::dataGridView1_RowEnter);
			// 
			// NameColumn
			// 
			this->NameColumn->HeaderText = L"Name";
			this->NameColumn->Name = L"NameColumn";
			this->NameColumn->ReadOnly = true;
			// 
			// typeColumn
			// 
			this->typeColumn->HeaderText = L"Type";
			this->typeColumn->Name = L"typeColumn";
			this->typeColumn->ReadOnly = true;
			// 
			// pathColumn
			// 
			this->pathColumn->HeaderText = L"Path";
			this->pathColumn->Name = L"pathColumn";
			this->pathColumn->ReadOnly = true;
			this->pathColumn->Width = 200;
			// 
			// sizeColumn
			// 
			this->sizeColumn->HeaderText = L"Size";
			this->sizeColumn->Name = L"sizeColumn";
			this->sizeColumn->ReadOnly = true;
			// 
			// controls_splitter
			// 
			this->controls_splitter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->controls_splitter->Location = System::Drawing::Point(0, 0);
			this->controls_splitter->Name = L"controls_splitter";
			this->controls_splitter->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// controls_splitter.Panel1
			// 
			this->controls_splitter->Panel1->Controls->Add(this->attr_tableView);
			// 
			// controls_splitter.Panel2
			// 
			this->controls_splitter->Panel2->Controls->Add(this->tableLayoutPanel1);
			this->controls_splitter->Size = System::Drawing::Size(444, 239);
			this->controls_splitter->SplitterDistance = 207;
			this->controls_splitter->TabIndex = 0;
			// 
			// attr_tableView
			// 
			this->attr_tableView->ColumnCount = 1;
			this->attr_tableView->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->attr_tableView->Controls->Add(this->groupBox1, 0, 1);
			this->attr_tableView->Controls->Add(this->attr_groupBox, 0, 0);
			this->attr_tableView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->attr_tableView->Location = System::Drawing::Point(0, 0);
			this->attr_tableView->Name = L"attr_tableView";
			this->attr_tableView->RowCount = 2;
			this->attr_tableView->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 42.99517F)));
			this->attr_tableView->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 57.00483F)));
			this->attr_tableView->Size = System::Drawing::Size(444, 207);
			this->attr_tableView->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel3);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(8, 97);
			this->groupBox1->Margin = System::Windows::Forms::Padding(8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(428, 102);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Атрибуты файла";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->splitContainer3, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->applyToAll_checkbox, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->fileAttr_splitter3, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->fileAttr_splitter2, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->fileAttr_splitter1, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->splitContainer1, 1, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(422, 83);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(3, 57);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->label5);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->fileExtension_textbox);
			this->splitContainer3->Size = System::Drawing::Size(205, 23);
			this->splitContainer3->SplitterDistance = 68;
			this->splitContainer3->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Тип:";
			// 
			// fileExtension_textbox
			// 
			this->fileExtension_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fileExtension_textbox->Location = System::Drawing::Point(0, 0);
			this->fileExtension_textbox->Name = L"fileExtension_textbox";
			this->fileExtension_textbox->Size = System::Drawing::Size(133, 20);
			this->fileExtension_textbox->TabIndex = 0;
			// 
			// applyToAll_checkbox
			// 
			this->applyToAll_checkbox->AutoSize = true;
			this->applyToAll_checkbox->Location = System::Drawing::Point(214, 57);
			this->applyToAll_checkbox->Name = L"applyToAll_checkbox";
			this->applyToAll_checkbox->Size = System::Drawing::Size(127, 17);
			this->applyToAll_checkbox->TabIndex = 4;
			this->applyToAll_checkbox->Text = L"Применить ко всем";
			this->applyToAll_checkbox->UseVisualStyleBackColor = true;
			// 
			// fileAttr_splitter3
			// 
			this->fileAttr_splitter3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fileAttr_splitter3->Location = System::Drawing::Point(3, 30);
			this->fileAttr_splitter3->Name = L"fileAttr_splitter3";
			// 
			// fileAttr_splitter3.Panel1
			// 
			this->fileAttr_splitter3->Panel1->Controls->Add(this->label3);
			// 
			// fileAttr_splitter3.Panel2
			// 
			this->fileAttr_splitter3->Panel2->Controls->Add(this->catalog_textbox);
			this->fileAttr_splitter3->Size = System::Drawing::Size(205, 21);
			this->fileAttr_splitter3->SplitterDistance = 68;
			this->fileAttr_splitter3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Каталог:";
			// 
			// catalog_textbox
			// 
			this->catalog_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->catalog_textbox->Location = System::Drawing::Point(0, 0);
			this->catalog_textbox->Name = L"catalog_textbox";
			this->catalog_textbox->Size = System::Drawing::Size(133, 20);
			this->catalog_textbox->TabIndex = 0;
			// 
			// fileAttr_splitter2
			// 
			this->fileAttr_splitter2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fileAttr_splitter2->Location = System::Drawing::Point(214, 3);
			this->fileAttr_splitter2->Name = L"fileAttr_splitter2";
			// 
			// fileAttr_splitter2.Panel1
			// 
			this->fileAttr_splitter2->Panel1->Controls->Add(this->label2);
			// 
			// fileAttr_splitter2.Panel2
			// 
			this->fileAttr_splitter2->Panel2->Controls->Add(this->fileSize_textbox);
			this->fileAttr_splitter2->Size = System::Drawing::Size(205, 21);
			this->fileAttr_splitter2->SplitterDistance = 68;
			this->fileAttr_splitter2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Размер:";
			// 
			// fileSize_textbox
			// 
			this->fileSize_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fileSize_textbox->Location = System::Drawing::Point(0, 0);
			this->fileSize_textbox->Name = L"fileSize_textbox";
			this->fileSize_textbox->ReadOnly = true;
			this->fileSize_textbox->Size = System::Drawing::Size(133, 20);
			this->fileSize_textbox->TabIndex = 0;
			// 
			// fileAttr_splitter1
			// 
			this->fileAttr_splitter1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fileAttr_splitter1->Location = System::Drawing::Point(3, 3);
			this->fileAttr_splitter1->Name = L"fileAttr_splitter1";
			// 
			// fileAttr_splitter1.Panel1
			// 
			this->fileAttr_splitter1->Panel1->Controls->Add(this->label1);
			// 
			// fileAttr_splitter1.Panel2
			// 
			this->fileAttr_splitter1->Panel2->Controls->Add(this->fileName_textbox);
			this->fileAttr_splitter1->Size = System::Drawing::Size(205, 21);
			this->fileAttr_splitter1->SplitterDistance = 68;
			this->fileAttr_splitter1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя:";
			// 
			// fileName_textbox
			// 
			this->fileName_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fileName_textbox->Location = System::Drawing::Point(0, 0);
			this->fileName_textbox->Name = L"fileName_textbox";
			this->fileName_textbox->Size = System::Drawing::Size(133, 20);
			this->fileName_textbox->TabIndex = 0;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(214, 30);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->modefiedDate_textbox);
			this->splitContainer1->Size = System::Drawing::Size(205, 21);
			this->splitContainer1->SplitterDistance = 68;
			this->splitContainer1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Дата измен:";
			// 
			// modefiedDate_textbox
			// 
			this->modefiedDate_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->modefiedDate_textbox->Location = System::Drawing::Point(0, 0);
			this->modefiedDate_textbox->Name = L"modefiedDate_textbox";
			this->modefiedDate_textbox->ReadOnly = true;
			this->modefiedDate_textbox->Size = System::Drawing::Size(133, 20);
			this->modefiedDate_textbox->TabIndex = 0;
			// 
			// attr_groupBox
			// 
			this->attr_groupBox->Controls->Add(this->tableLayoutPanel2);
			this->attr_groupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->attr_groupBox->Location = System::Drawing::Point(8, 8);
			this->attr_groupBox->Margin = System::Windows::Forms::Padding(8);
			this->attr_groupBox->Name = L"attr_groupBox";
			this->attr_groupBox->Size = System::Drawing::Size(428, 73);
			this->attr_groupBox->TabIndex = 0;
			this->attr_groupBox->TabStop = false;
			this->attr_groupBox->Text = L"Атрибуты файла";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->archive_checkbox, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->hidden_checkbox, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->readOnly_checkbox, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->system_checkbox, 1, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(422, 54);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// archive_checkbox
			// 
			this->archive_checkbox->AutoSize = true;
			this->archive_checkbox->Location = System::Drawing::Point(3, 3);
			this->archive_checkbox->Name = L"archive_checkbox";
			this->archive_checkbox->Size = System::Drawing::Size(52, 17);
			this->archive_checkbox->TabIndex = 0;
			this->archive_checkbox->Text = L"Сжат";
			this->archive_checkbox->UseVisualStyleBackColor = true;
			// 
			// hidden_checkbox
			// 
			this->hidden_checkbox->AutoSize = true;
			this->hidden_checkbox->Location = System::Drawing::Point(3, 30);
			this->hidden_checkbox->Name = L"hidden_checkbox";
			this->hidden_checkbox->Size = System::Drawing::Size(58, 17);
			this->hidden_checkbox->TabIndex = 1;
			this->hidden_checkbox->Text = L"Скрыт";
			this->hidden_checkbox->UseVisualStyleBackColor = true;
			// 
			// readOnly_checkbox
			// 
			this->readOnly_checkbox->AutoSize = true;
			this->readOnly_checkbox->Location = System::Drawing::Point(214, 3);
			this->readOnly_checkbox->Name = L"readOnly_checkbox";
			this->readOnly_checkbox->Size = System::Drawing::Size(121, 17);
			this->readOnly_checkbox->TabIndex = 2;
			this->readOnly_checkbox->Text = L"Только для чтения";
			this->readOnly_checkbox->UseVisualStyleBackColor = true;
			// 
			// system_checkbox
			// 
			this->system_checkbox->AutoSize = true;
			this->system_checkbox->Location = System::Drawing::Point(214, 30);
			this->system_checkbox->Name = L"system_checkbox";
			this->system_checkbox->Size = System::Drawing::Size(84, 17);
			this->system_checkbox->TabIndex = 3;
			this->system_checkbox->Text = L"Системный";
			this->system_checkbox->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Controls->Add(this->clear_btn, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->openFile_btn, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->apply_btn, 2, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(444, 28);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// clear_btn
			// 
			this->clear_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->clear_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear_btn->Location = System::Drawing::Point(151, 3);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(142, 22);
			this->clear_btn->TabIndex = 2;
			this->clear_btn->Text = L"Очистить";
			this->clear_btn->UseVisualStyleBackColor = true;
			this->clear_btn->Click += gcnew System::EventHandler(this, &FilesAttrForm::clear_btn_Click);
			// 
			// openFile_btn
			// 
			this->openFile_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->openFile_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->openFile_btn->Location = System::Drawing::Point(3, 3);
			this->openFile_btn->Name = L"openFile_btn";
			this->openFile_btn->Size = System::Drawing::Size(142, 22);
			this->openFile_btn->TabIndex = 1;
			this->openFile_btn->Text = L"Открыть файл";
			this->openFile_btn->UseVisualStyleBackColor = true;
			this->openFile_btn->Click += gcnew System::EventHandler(this, &FilesAttrForm::openFile_btn_Click);
			// 
			// apply_btn
			// 
			this->apply_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->apply_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->apply_btn->Location = System::Drawing::Point(299, 3);
			this->apply_btn->Name = L"apply_btn";
			this->apply_btn->Size = System::Drawing::Size(142, 22);
			this->apply_btn->TabIndex = 0;
			this->apply_btn->Text = L"Применить";
			this->apply_btn->UseVisualStyleBackColor = true;
			this->apply_btn->Click += gcnew System::EventHandler(this, &FilesAttrForm::apply_btn_Click);
			// 
			// FilesAttrForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 458);
			this->Controls->Add(this->main_splitter);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"FilesAttrForm";
			this->Text = L"FilesAttrForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->main_splitter->Panel1->ResumeLayout(false);
			this->main_splitter->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_splitter))->EndInit();
			this->main_splitter->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->controls_splitter->Panel1->ResumeLayout(false);
			this->controls_splitter->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controls_splitter))->EndInit();
			this->controls_splitter->ResumeLayout(false);
			this->attr_tableView->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->fileAttr_splitter3->Panel1->ResumeLayout(false);
			this->fileAttr_splitter3->Panel1->PerformLayout();
			this->fileAttr_splitter3->Panel2->ResumeLayout(false);
			this->fileAttr_splitter3->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileAttr_splitter3))->EndInit();
			this->fileAttr_splitter3->ResumeLayout(false);
			this->fileAttr_splitter2->Panel1->ResumeLayout(false);
			this->fileAttr_splitter2->Panel1->PerformLayout();
			this->fileAttr_splitter2->Panel2->ResumeLayout(false);
			this->fileAttr_splitter2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileAttr_splitter2))->EndInit();
			this->fileAttr_splitter2->ResumeLayout(false);
			this->fileAttr_splitter1->Panel1->ResumeLayout(false);
			this->fileAttr_splitter1->Panel1->PerformLayout();
			this->fileAttr_splitter1->Panel2->ResumeLayout(false);
			this->fileAttr_splitter1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileAttr_splitter1))->EndInit();
			this->fileAttr_splitter1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->attr_groupBox->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void toMenuToolStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		//GraphicsForm^ graphics_form = (gcnew GraphicsForm(this));
		this->parent_form->Show();
		this->Hide();
	}
	private: System::Void aboutToolStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"Лабораторная работа #8 разработанная командой: Возжаевой Н.С. Кривелевой К.А. Осиповым А.Ю. Чистковым М.Ф.", L"Информация");
	}
	private: System::Void exitToolStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		this->parent_form->Close();
		this->Close();
	}

		   void my() {
			   this->fileinfo = (gcnew System::IO::FileInfo("C:\\users\\"));
			   File::SetCreationTime("file",DateTime());
			   //FileInfo().
		   }
	private: System::Void openFile_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Multiselect = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			for(size_t i = 0; i < openFileDialog1->FileNames->Length; ++i)
			{
				FileInfo^ fi = gcnew FileInfo(openFileDialog1->FileNames[i]);
				dataGridView1->Rows->Add(fi->Name, fi->Extension + " File", fi->FullName, fi->Length);
				dataGridView1->Focus();
			}
		}
	}

	private: System::Void clear_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		archive_checkbox->Checked = false;
		hidden_checkbox->Checked = false;
		readOnly_checkbox->Checked = false;
		system_checkbox->Checked = false;
		applyToAll_checkbox->Checked = false;

		fileName_textbox->Text = L"";
		catalog_textbox->Text = L"";
		fileSize_textbox->Text = L"";
		fileExtension_textbox->Text = L"";
		modefiedDate_textbox->Text = L"";
	}
	private: System::Void dataGridView1_RowEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		FileInfo^ fi = gcnew FileInfo(dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString());
		FileAttributes fa = File::GetAttributes(fi->FullName);

		archive_checkbox->Checked = (fa & FileAttributes::Archive) == FileAttributes::Archive;
		hidden_checkbox->Checked = (fa & FileAttributes::Hidden) == FileAttributes::Hidden;
		readOnly_checkbox->Checked = (fa & FileAttributes::ReadOnly) == FileAttributes::ReadOnly;
		system_checkbox->Checked = (fa & FileAttributes::System) == FileAttributes::System;

		fileName_textbox->Text = fi->Name;
		catalog_textbox->Text = fi->Directory->ToString();
		fileSize_textbox->Text = fi->Length.ToString();
		fileExtension_textbox->Text = fi->Extension;
		//catalog_textbox->Text = fi->FullName;
	}

	private: System::Void change_fileAttr(String^ file_name, size_t RowInd) {
		FileInfo^ fi = gcnew FileInfo(file_name);
		FileAttributes fa = File::GetAttributes(file_name);
		fa = archive_checkbox->Checked ? (fa | FileAttributes::Archive) : (fa & ~FileAttributes::Archive);
		fa = hidden_checkbox->Checked ? (fa | FileAttributes::Hidden) : (fa & ~FileAttributes::Hidden);
		fa = readOnly_checkbox->Checked ? (fa | FileAttributes::ReadOnly) : (fa & ~FileAttributes::ReadOnly);
		fa = system_checkbox->Checked ? (fa | FileAttributes::System) : (fa & ~FileAttributes::System);
		
		String^ out_file_name = applyToAll_checkbox->Checked ? fi->Name : fileName_textbox->Text;
		File::SetAttributes(file_name, fa);
		if (fi->Directory->ToString() != catalog_textbox->Text) {
			//String^ temp_name = applyToAll_checkbox->Checked ? fi->Name : fileName_textbox->Text;
			fi->MoveTo(catalog_textbox->Text + L"\\" + out_file_name);
			FileInfo^ temp_fi = gcnew FileInfo(catalog_textbox->Text + L"\\" + out_file_name);
			dataGridView1->Rows[RowInd]->Cells[0]->Value = temp_fi->Name;
			dataGridView1->Rows[RowInd]->Cells[2]->Value = temp_fi->FullName;
		}
		if (fi->Name != out_file_name) {
			std::string from = msclr::interop::marshal_as<std::string>(file_name);
			std::string to = msclr::interop::marshal_as<std::string>(fi->Directory + L"\\" + out_file_name);
			std::rename(from.c_str(), to.c_str());
			dataGridView1->Rows[RowInd]->Cells[0]->Value = out_file_name;
			dataGridView1->Rows[RowInd]->Cells[2]->Value = fi->Directory + L"\\" + out_file_name;
		}
	}
	private: System::Void apply_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (applyToAll_checkbox->Checked) {
			for (size_t i = 0; i < dataGridView1->Rows->Count-1; ++i) {
				String^ file_name = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
				change_fileAttr(file_name, i);
			}
		}
		else {
			String^ file_name = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
			change_fileAttr(file_name, dataGridView1->CurrentRow->Index);
		}
	}
};
}
