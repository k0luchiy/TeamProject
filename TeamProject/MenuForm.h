#pragma once
#include "PlayerForm.h"
#include "TextEditorForm.h"
#include "GraphicsForm.h"
#include "OrganizerForm.h"
#include "FilesAttrForm.h"

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ player_btn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ filesAttr_btn;

	private: System::Windows::Forms::Button^ organizer_btn;

	private: System::Windows::Forms::Button^ graphics_btn;

	private: System::Windows::Forms::Button^ textEdit_btn;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ actionToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ toMenuToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStrip;


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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->filesAttr_btn = (gcnew System::Windows::Forms::Button());
			this->organizer_btn = (gcnew System::Windows::Forms::Button());
			this->graphics_btn = (gcnew System::Windows::Forms::Button());
			this->textEdit_btn = (gcnew System::Windows::Forms::Button());
			this->player_btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->actionToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toMenuToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(0, 27);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tableLayoutPanel2);
			this->splitContainer1->Size = System::Drawing::Size(563, 306);
			this->splitContainer1->SplitterDistance = 46;
			this->splitContainer1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(563, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Проект команды гастарбайтеров";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(563, 256);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->filesAttr_btn, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->organizer_btn, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->graphics_btn, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textEdit_btn, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->player_btn, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(171, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(219, 250);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// filesAttr_btn
			// 
			this->filesAttr_btn->BackColor = System::Drawing::Color::CornflowerBlue;
			this->filesAttr_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->filesAttr_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->filesAttr_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filesAttr_btn->Location = System::Drawing::Point(8, 208);
			this->filesAttr_btn->Margin = System::Windows::Forms::Padding(8);
			this->filesAttr_btn->Name = L"filesAttr_btn";
			this->filesAttr_btn->Size = System::Drawing::Size(203, 34);
			this->filesAttr_btn->TabIndex = 4;
			this->filesAttr_btn->Text = L"Работа с файлами";
			this->filesAttr_btn->UseVisualStyleBackColor = false;
			this->filesAttr_btn->Click += gcnew System::EventHandler(this, &MenuForm::filesAttr_btn_Click);
			// 
			// organizer_btn
			// 
			this->organizer_btn->BackColor = System::Drawing::Color::CornflowerBlue;
			this->organizer_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->organizer_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->organizer_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->organizer_btn->Location = System::Drawing::Point(8, 158);
			this->organizer_btn->Margin = System::Windows::Forms::Padding(8);
			this->organizer_btn->Name = L"organizer_btn";
			this->organizer_btn->Size = System::Drawing::Size(203, 34);
			this->organizer_btn->TabIndex = 3;
			this->organizer_btn->Text = L"Органайзер";
			this->organizer_btn->UseVisualStyleBackColor = false;
			this->organizer_btn->Click += gcnew System::EventHandler(this, &MenuForm::organizer_btn_Click);
			// 
			// graphics_btn
			// 
			this->graphics_btn->BackColor = System::Drawing::Color::CornflowerBlue;
			this->graphics_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->graphics_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->graphics_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->graphics_btn->Location = System::Drawing::Point(8, 108);
			this->graphics_btn->Margin = System::Windows::Forms::Padding(8);
			this->graphics_btn->Name = L"graphics_btn";
			this->graphics_btn->Size = System::Drawing::Size(203, 34);
			this->graphics_btn->TabIndex = 2;
			this->graphics_btn->Text = L"Графический редактор";
			this->graphics_btn->UseVisualStyleBackColor = false;
			this->graphics_btn->Click += gcnew System::EventHandler(this, &MenuForm::graphics_btn_Click);
			// 
			// textEdit_btn
			// 
			this->textEdit_btn->BackColor = System::Drawing::Color::CornflowerBlue;
			this->textEdit_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textEdit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->textEdit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEdit_btn->Location = System::Drawing::Point(8, 58);
			this->textEdit_btn->Margin = System::Windows::Forms::Padding(8);
			this->textEdit_btn->Name = L"textEdit_btn";
			this->textEdit_btn->Size = System::Drawing::Size(203, 34);
			this->textEdit_btn->TabIndex = 1;
			this->textEdit_btn->Text = L"Текстовый редактор";
			this->textEdit_btn->UseVisualStyleBackColor = false;
			this->textEdit_btn->Click += gcnew System::EventHandler(this, &MenuForm::textEdit_btn_Click);
			// 
			// player_btn
			// 
			this->player_btn->BackColor = System::Drawing::Color::CornflowerBlue;
			this->player_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->player_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->player_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player_btn->Location = System::Drawing::Point(8, 8);
			this->player_btn->Margin = System::Windows::Forms::Padding(8);
			this->player_btn->Name = L"player_btn";
			this->player_btn->Size = System::Drawing::Size(203, 34);
			this->player_btn->TabIndex = 0;
			this->player_btn->Text = L"Плеер";
			this->player_btn->UseVisualStyleBackColor = false;
			this->player_btn->Click += gcnew System::EventHandler(this, &MenuForm::player_btn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->actionToolStrip,
					this->aboutToolStrip, this->exitToolStrip
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(0);
			this->menuStrip1->Size = System::Drawing::Size(563, 24);
			this->menuStrip1->TabIndex = 3;
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
			this->toMenuToolStrip->Click += gcnew System::EventHandler(this, &MenuForm::toMenuToolStrip_Click);
			// 
			// aboutToolStrip
			// 
			this->aboutToolStrip->Name = L"aboutToolStrip";
			this->aboutToolStrip->Size = System::Drawing::Size(96, 20);
			this->aboutToolStrip->Text = L"О Программе";
			this->aboutToolStrip->Click += gcnew System::EventHandler(this, &MenuForm::aboutToolStrip_Click);
			// 
			// exitToolStrip
			// 
			this->exitToolStrip->Name = L"exitToolStrip";
			this->exitToolStrip->Size = System::Drawing::Size(54, 20);
			this->exitToolStrip->Text = L"Выход";
			this->exitToolStrip->Click += gcnew System::EventHandler(this, &MenuForm::exitToolStrip_Click);

			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 335);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toMenuToolStrip_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void aboutToolStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"Лабораторная работа #8 разработанная командой: Возжаевой Н.С. Кривелевой К.А. Осиповым А.Ю. Чистковым М.Ф.", L"Информация");
	}
	private: System::Void exitToolStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void player_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		PlayerForm^ player_form = (gcnew PlayerForm(this));
		player_form->Show();
		this->Hide();
	}
	private: System::Void textEdit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		TextEditorForm^ textEdit_form = (gcnew TextEditorForm(this));
		textEdit_form->Show();
		this->Hide();
	}
	private: System::Void graphics_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphicsForm^ graphics_form = (gcnew GraphicsForm(this));
		graphics_form->Show();
		this->Hide();
	}
	private: System::Void organizer_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		OrganizerForm^ organizer_form = (gcnew OrganizerForm(this));
		organizer_form->Show();
		this->Hide();
	}
	private: System::Void filesAttr_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		FilesAttrForm^ filesAttr_form = (gcnew FilesAttrForm(this));
		filesAttr_form->Show();
		this->Hide();
	}

};
}
