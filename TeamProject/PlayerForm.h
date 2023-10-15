#pragma once

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlayerForm
	/// </summary>
	public ref class PlayerForm : public System::Windows::Forms::Form
	{
	public:
		PlayerForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		PlayerForm(System::Windows::Forms::Form^ parent_form)
		{
			this->parent_form = parent_form;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PlayerForm()
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

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
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
			this->toMenuToolStrip->Click += gcnew System::EventHandler(this, &PlayerForm::toMenuToolStrip_Click);
			// 
			// aboutToolStrip
			// 
			this->aboutToolStrip->Name = L"aboutToolStrip";
			this->aboutToolStrip->Size = System::Drawing::Size(96, 20);
			this->aboutToolStrip->Text = L"О Программе";
			this->aboutToolStrip->Click += gcnew System::EventHandler(this, &PlayerForm::aboutToolStrip_Click);
			// 
			// exitToolStrip
			// 
			this->exitToolStrip->Name = L"exitToolStrip";
			this->exitToolStrip->Size = System::Drawing::Size(54, 20);
			this->exitToolStrip->Text = L"Выход";
			this->exitToolStrip->Click += gcnew System::EventHandler(this, &PlayerForm::exitToolStrip_Click);

			// 
			// PlayerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"PlayerForm";
			this->Text = L"PlayerForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
	};
}
