#pragma once

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OrganizerForm
	/// </summary>
	public ref class OrganizerForm : public System::Windows::Forms::Form
	{
	public:
		OrganizerForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		OrganizerForm(System::Windows::Forms::Form^ parent_form)
		{
			this->parent_form = parent_form;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrganizerForm()
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
	private: System::Windows::Forms::SplitContainer^ main_splitter;

	private: System::Windows::Forms::Label^ title_label;
	private: System::Windows::Forms::SplitContainer^ io_splitter;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ addDate_groupBox;
	private: System::Windows::Forms::SplitContainer^ addDate_splitter;



	private: System::Windows::Forms::Button^ addDate_btn;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ addDate_textbox;



	private: System::Windows::Forms::Button^ addTask_btn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ addTask_textbox;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::SplitContainer^ deleteTask_splitter;
	private: System::Windows::Forms::TextBox^ deleteTask_textbox;


	private: System::Windows::Forms::Button^ deleteTask_btn;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TextBox^ selectedTask_textbox;









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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Сходить в магазин"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Покушать"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"20.10.2023", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode1,
					treeNode2
			}));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Сделать 8 лабораторную"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"15.10.2023", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode4 }));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->actionToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toMenuToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->main_splitter = (gcnew System::Windows::Forms::SplitContainer());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->io_splitter = (gcnew System::Windows::Forms::SplitContainer());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->selectedTask_textbox = (gcnew System::Windows::Forms::TextBox());
			this->addTask_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->addTask_textbox = (gcnew System::Windows::Forms::TextBox());
			this->addDate_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->addDate_splitter = (gcnew System::Windows::Forms::SplitContainer());
			this->addDate_textbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->addDate_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->deleteTask_splitter = (gcnew System::Windows::Forms::SplitContainer());
			this->deleteTask_textbox = (gcnew System::Windows::Forms::TextBox());
			this->deleteTask_btn = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_splitter))->BeginInit();
			this->main_splitter->Panel1->SuspendLayout();
			this->main_splitter->Panel2->SuspendLayout();
			this->main_splitter->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->io_splitter))->BeginInit();
			this->io_splitter->Panel1->SuspendLayout();
			this->io_splitter->Panel2->SuspendLayout();
			this->io_splitter->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->addDate_groupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addDate_splitter))->BeginInit();
			this->addDate_splitter->Panel1->SuspendLayout();
			this->addDate_splitter->Panel2->SuspendLayout();
			this->addDate_splitter->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deleteTask_splitter))->BeginInit();
			this->deleteTask_splitter->Panel1->SuspendLayout();
			this->deleteTask_splitter->Panel2->SuspendLayout();
			this->deleteTask_splitter->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(433, 24);
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
			this->toMenuToolStrip->Click += gcnew System::EventHandler(this, &OrganizerForm::toMenuToolStrip_Click);
			// 
			// aboutToolStrip
			// 
			this->aboutToolStrip->Name = L"aboutToolStrip";
			this->aboutToolStrip->Size = System::Drawing::Size(96, 20);
			this->aboutToolStrip->Text = L"О Программе";
			this->aboutToolStrip->Click += gcnew System::EventHandler(this, &OrganizerForm::aboutToolStrip_Click);
			// 
			// exitToolStrip
			// 
			this->exitToolStrip->Name = L"exitToolStrip";
			this->exitToolStrip->Size = System::Drawing::Size(54, 20);
			this->exitToolStrip->Text = L"Выход";
			this->exitToolStrip->Click += gcnew System::EventHandler(this, &OrganizerForm::exitToolStrip_Click);
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
			this->main_splitter->Panel2->Controls->Add(this->io_splitter);
			this->main_splitter->Size = System::Drawing::Size(433, 391);
			this->main_splitter->SplitterDistance = 63;
			this->main_splitter->TabIndex = 3;
			// 
			// title_label
			// 
			this->title_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->title_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_label->Location = System::Drawing::Point(0, 0);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(433, 63);
			this->title_label->TabIndex = 0;
			this->title_label->Text = L"Органайзер";
			this->title_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// io_splitter
			// 
			this->io_splitter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->io_splitter->Location = System::Drawing::Point(0, 0);
			this->io_splitter->Name = L"io_splitter";
			// 
			// io_splitter.Panel1
			// 
			this->io_splitter->Panel1->Controls->Add(this->tableLayoutPanel1);
			// 
			// io_splitter.Panel2
			// 
			this->io_splitter->Panel2->Controls->Add(this->treeView1);
			this->io_splitter->Size = System::Drawing::Size(433, 324);
			this->io_splitter->SplitterDistance = 144;
			this->io_splitter->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->addDate_groupBox, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->groupBox2, 0, 2);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(144, 324);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(3, 84);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(138, 156);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавить задание";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->selectedTask_textbox, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->addTask_btn, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->addTask_textbox, 0, 3);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(132, 137);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// selectedTask_textbox
			// 
			this->selectedTask_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->selectedTask_textbox->Location = System::Drawing::Point(3, 30);
			this->selectedTask_textbox->Name = L"selectedTask_textbox";
			this->selectedTask_textbox->ReadOnly = true;
			this->selectedTask_textbox->Size = System::Drawing::Size(126, 20);
			this->selectedTask_textbox->TabIndex = 5;
			// 
			// addTask_btn
			// 
			this->addTask_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addTask_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addTask_btn->Location = System::Drawing::Point(3, 111);
			this->addTask_btn->Name = L"addTask_btn";
			this->addTask_btn->Size = System::Drawing::Size(126, 23);
			this->addTask_btn->TabIndex = 4;
			this->addTask_btn->Text = L"Добавить";
			this->addTask_btn->UseVisualStyleBackColor = true;
			this->addTask_btn->Click += gcnew System::EventHandler(this, &OrganizerForm::addTask_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(3, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите задание";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выбранное задание";
			// 
			// addTask_textbox
			// 
			this->addTask_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addTask_textbox->Location = System::Drawing::Point(3, 84);
			this->addTask_textbox->Name = L"addTask_textbox";
			this->addTask_textbox->Size = System::Drawing::Size(126, 20);
			this->addTask_textbox->TabIndex = 3;
			// 
			// addDate_groupBox
			// 
			this->addDate_groupBox->Controls->Add(this->addDate_splitter);
			this->addDate_groupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addDate_groupBox->Location = System::Drawing::Point(3, 3);
			this->addDate_groupBox->Name = L"addDate_groupBox";
			this->addDate_groupBox->Size = System::Drawing::Size(138, 75);
			this->addDate_groupBox->TabIndex = 0;
			this->addDate_groupBox->TabStop = false;
			this->addDate_groupBox->Text = L"Добавить дату";
			// 
			// addDate_splitter
			// 
			this->addDate_splitter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addDate_splitter->Location = System::Drawing::Point(3, 16);
			this->addDate_splitter->Name = L"addDate_splitter";
			this->addDate_splitter->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// addDate_splitter.Panel1
			// 
			this->addDate_splitter->Panel1->Controls->Add(this->addDate_textbox);
			// 
			// addDate_splitter.Panel2
			// 
			this->addDate_splitter->Panel2->Controls->Add(this->addDate_btn);
			this->addDate_splitter->Size = System::Drawing::Size(132, 56);
			this->addDate_splitter->SplitterDistance = 25;
			this->addDate_splitter->TabIndex = 0;
			// 
			// addDate_textbox
			// 
			this->addDate_textbox->Culture = (gcnew System::Globalization::CultureInfo(L"ru-RU"));
			this->addDate_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addDate_textbox->Location = System::Drawing::Point(0, 0);
			this->addDate_textbox->Mask = L"00/00/0000";
			this->addDate_textbox->Name = L"addDate_textbox";
			this->addDate_textbox->Size = System::Drawing::Size(132, 20);
			this->addDate_textbox->TabIndex = 0;
			this->addDate_textbox->ValidatingType = System::DateTime::typeid;
			// 
			// addDate_btn
			// 
			this->addDate_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addDate_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addDate_btn->Location = System::Drawing::Point(0, 0);
			this->addDate_btn->Name = L"addDate_btn";
			this->addDate_btn->Size = System::Drawing::Size(132, 27);
			this->addDate_btn->TabIndex = 0;
			this->addDate_btn->Text = L"Добавить";
			this->addDate_btn->UseVisualStyleBackColor = true;
			this->addDate_btn->Click += gcnew System::EventHandler(this, &OrganizerForm::addDate_btn_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->deleteTask_splitter);
			this->groupBox2->Location = System::Drawing::Point(3, 246);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(138, 73);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Удалить дату/задание";
			// 
			// deleteTask_splitter
			// 
			this->deleteTask_splitter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteTask_splitter->Location = System::Drawing::Point(3, 16);
			this->deleteTask_splitter->Name = L"deleteTask_splitter";
			this->deleteTask_splitter->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// deleteTask_splitter.Panel1
			// 
			this->deleteTask_splitter->Panel1->Controls->Add(this->deleteTask_textbox);
			// 
			// deleteTask_splitter.Panel2
			// 
			this->deleteTask_splitter->Panel2->Controls->Add(this->deleteTask_btn);
			this->deleteTask_splitter->Size = System::Drawing::Size(132, 54);
			this->deleteTask_splitter->SplitterDistance = 25;
			this->deleteTask_splitter->TabIndex = 1;
			// 
			// deleteTask_textbox
			// 
			this->deleteTask_textbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteTask_textbox->Location = System::Drawing::Point(0, 0);
			this->deleteTask_textbox->Name = L"deleteTask_textbox";
			this->deleteTask_textbox->ReadOnly = true;
			this->deleteTask_textbox->Size = System::Drawing::Size(132, 20);
			this->deleteTask_textbox->TabIndex = 4;
			// 
			// deleteTask_btn
			// 
			this->deleteTask_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteTask_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteTask_btn->Location = System::Drawing::Point(0, 0);
			this->deleteTask_btn->Name = L"deleteTask_btn";
			this->deleteTask_btn->Size = System::Drawing::Size(132, 25);
			this->deleteTask_btn->TabIndex = 0;
			this->deleteTask_btn->Text = L"Удалить";
			this->deleteTask_btn->UseVisualStyleBackColor = true;
			this->deleteTask_btn->Click += gcnew System::EventHandler(this, &OrganizerForm::deleteTask_btn_Click);
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"RootChildNode";
			treeNode1->Text = L"Сходить в магазин";
			treeNode2->Name = L"Node1";
			treeNode2->Text = L"Покушать";
			treeNode3->Name = L"DateNode20.10.2023";
			treeNode3->Text = L"20.10.2023";
			treeNode4->Name = L"Node0";
			treeNode4->Text = L"Сделать 8 лабораторную";
			treeNode5->Name = L"DateNode15.10.2023";
			treeNode5->Text = L"15.10.2023";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode3, treeNode5 });
			this->treeView1->Size = System::Drawing::Size(285, 324);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &OrganizerForm::treeView1_AfterSelect);
			// 
			// OrganizerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 415);
			this->Controls->Add(this->main_splitter);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"OrganizerForm";
			this->Text = L"OrganizerForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->main_splitter->Panel1->ResumeLayout(false);
			this->main_splitter->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_splitter))->EndInit();
			this->main_splitter->ResumeLayout(false);
			this->io_splitter->Panel1->ResumeLayout(false);
			this->io_splitter->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->io_splitter))->EndInit();
			this->io_splitter->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->addDate_groupBox->ResumeLayout(false);
			this->addDate_splitter->Panel1->ResumeLayout(false);
			this->addDate_splitter->Panel1->PerformLayout();
			this->addDate_splitter->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addDate_splitter))->EndInit();
			this->addDate_splitter->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->deleteTask_splitter->Panel1->ResumeLayout(false);
			this->deleteTask_splitter->Panel1->PerformLayout();
			this->deleteTask_splitter->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deleteTask_splitter))->EndInit();
			this->deleteTask_splitter->ResumeLayout(false);
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

	private: System::Void addDate_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::TreeNode^ newNode = (gcnew System::Windows::Forms::TreeNode(addDate_textbox->Text));
		newNode->Name = L"DateNode " + addDate_textbox->Text;
		this->treeView1->Nodes->Add(newNode);
		this->treeView1->Refresh();
	}
	private: System::Void addTask_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::TreeNode^ newNode = (gcnew System::Windows::Forms::TreeNode(addTask_textbox->Text));
		this->treeView1->SelectedNode->Nodes->Add(newNode);
		this->treeView1->Refresh();
	}
	private: System::Void deleteTask_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->treeView1->SelectedNode->Remove();
		this->treeView1->Refresh();
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
		selectedTask_textbox->Text = e->Node->Text;
		deleteTask_textbox->Text = e->Node->Text;
	}
};
}
