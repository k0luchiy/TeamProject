#pragma once

struct Vector2D {
	int X, Y;
};

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	

	/// <summary>
	/// Summary for GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
	public:
		GraphicsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		GraphicsForm(System::Windows::Forms::Form^ parent_form)
		{
			this->parent_form = parent_form;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::NumericUpDown^ penWidth_numeric;
	private: System::Windows::Forms::Button^ penColor_btn;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Label^ penWidth_label;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::Button^ open_btn;
	private: System::Windows::Forms::Button^ clear_btn;
	private: System::Windows::Forms::Form^ parent_form;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ actionToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ toMenuToolStrip;
		   /*private: Vector2D* mousePosition;*/
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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->open_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->penColor_btn = (gcnew System::Windows::Forms::Button());
			this->penWidth_numeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->penWidth_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->actionToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toMenuToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->penWidth_numeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 24);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->tableLayoutPanel1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->pictureBox1);
			this->splitContainer1->Panel2->Margin = System::Windows::Forms::Padding(10);
			this->splitContainer1->Size = System::Drawing::Size(734, 368);
			this->splitContainer1->SplitterDistance = 43;
			this->splitContainer1->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->Controls->Add(this->save_btn, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->open_btn, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->clear_btn, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->penColor_btn, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->penWidth_numeric, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->penWidth_label, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(734, 43);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// save_btn
			// 
			this->save_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->save_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_btn->Location = System::Drawing::Point(618, 8);
			this->save_btn->Margin = System::Windows::Forms::Padding(8);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(108, 27);
			this->save_btn->TabIndex = 8;
			this->save_btn->Text = L"Сохранить";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Click += gcnew System::EventHandler(this, &GraphicsForm::save_btn_Click);
			// 
			// open_btn
			// 
			this->open_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->open_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->open_btn->Location = System::Drawing::Point(496, 8);
			this->open_btn->Margin = System::Windows::Forms::Padding(8);
			this->open_btn->Name = L"open_btn";
			this->open_btn->Size = System::Drawing::Size(106, 27);
			this->open_btn->TabIndex = 7;
			this->open_btn->Text = L"Открыть";
			this->open_btn->UseVisualStyleBackColor = true;
			this->open_btn->Click += gcnew System::EventHandler(this, &GraphicsForm::open_btn_Click);
			// 
			// clear_btn
			// 
			this->clear_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->clear_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear_btn->Location = System::Drawing::Point(374, 8);
			this->clear_btn->Margin = System::Windows::Forms::Padding(8);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(106, 27);
			this->clear_btn->TabIndex = 6;
			this->clear_btn->Text = L"Очистить";
			this->clear_btn->UseVisualStyleBackColor = true;
			this->clear_btn->Click += gcnew System::EventHandler(this, &GraphicsForm::clear_btn_Click);
			// 
			// penColor_btn
			// 
			this->penColor_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->penColor_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->penColor_btn->Location = System::Drawing::Point(252, 8);
			this->penColor_btn->Margin = System::Windows::Forms::Padding(8);
			this->penColor_btn->Name = L"penColor_btn";
			this->penColor_btn->Size = System::Drawing::Size(106, 27);
			this->penColor_btn->TabIndex = 1;
			this->penColor_btn->Text = L"Цвет";
			this->penColor_btn->UseVisualStyleBackColor = true;
			this->penColor_btn->Click += gcnew System::EventHandler(this, &GraphicsForm::penColor_btn_Click);
			// 
			// penWidth_numeric
			// 
			this->penWidth_numeric->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->penWidth_numeric->Location = System::Drawing::Point(125, 11);
			this->penWidth_numeric->Name = L"penWidth_numeric";
			this->penWidth_numeric->Size = System::Drawing::Size(116, 20);
			this->penWidth_numeric->TabIndex = 2;
			this->penWidth_numeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->penWidth_numeric->ValueChanged += gcnew System::EventHandler(this, &GraphicsForm::penWidth_numeric_ValueChanged);
			// 
			// penWidth_label
			// 
			this->penWidth_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->penWidth_label->Location = System::Drawing::Point(3, 0);
			this->penWidth_label->Name = L"penWidth_label";
			this->penWidth_label->Size = System::Drawing::Size(116, 43);
			this->penWidth_label->TabIndex = 5;
			this->penWidth_label->Text = L"Размер кисти:";
			this->penWidth_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(734, 321);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphicsForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphicsForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphicsForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphicsForm::pictureBox1_MouseUp);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->actionToolStrip,
					this->aboutToolStrip, this->exitToolStrip
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(734, 24);
			this->menuStrip1->TabIndex = 1;
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
			this->toMenuToolStrip->Click += gcnew System::EventHandler(this, &GraphicsForm::toMenuToolStrip_Click);
			// 
			// aboutToolStrip
			// 
			this->aboutToolStrip->Name = L"aboutToolStrip";
			this->aboutToolStrip->Size = System::Drawing::Size(96, 20);
			this->aboutToolStrip->Text = L"О Программе";
			this->aboutToolStrip->Click += gcnew System::EventHandler(this, &GraphicsForm::aboutToolStrip_Click);
			// 
			// exitToolStrip
			// 
			this->exitToolStrip->Name = L"exitToolStrip";
			this->exitToolStrip->Size = System::Drawing::Size(54, 20);
			this->exitToolStrip->Text = L"Выход";
			this->exitToolStrip->Click += gcnew System::EventHandler(this, &GraphicsForm::exitToolStrip_Click);
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 392);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"GraphicsForm";
			this->Text = L"GraphicsForm";
			this->Load += gcnew System::EventHandler(this, &GraphicsForm::GraphicsForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->penWidth_numeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private:
		Graphics^ canvas;
		List <Point>^ points;
		Pen^ pen;
		bool draw;
		Bitmap^ background;
		Color color;
		Bitmap^ texture;
		float size;
		bool clearAll;
		String^ filename;
		int statePen;
	private: Vector2D* mousePosition;
	private: System::Void open_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Image Files|*.jpg;*.jpeg;*.png|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 0;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//this->pictureBox1->ImageLocation = openFileDialog1->FileName;
			filename = openFileDialog1->FileName;//ñ÷èòûâàåì ïóòü äî ôàéëà ("ïîëíîå èìÿ")

			//Ïðîâåðêà âûáîðà
			if (filename == "openFileDialog1")
				return;

			background = gcnew Bitmap(filename);//çàãðóæàåì ôîí
			background = gcnew Bitmap(background, this->Width, this->Height);
			this->Width = background->Width;
			this->Height = background->Height;
			canvas = Graphics::FromImage(background);//ïðèìåíÿåì ôîí
			pictureBox1->Image = background;
		}

	}


		   System::Void  pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e)
		   {

			   if (pictureBox1->Image) { 
				   if (background)
					   background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);
				   else
					   background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);

				   delete canvas;
				   canvas = Graphics::FromImage(background);
				   //canvas = Graphics::FromImage(img);
				   pictureBox1->Image = background;
				   //pictureBox1->Image = img;
				   pictureBox1->Refresh();
				   pictureBox1->Invalidate();
			   }
		   }

		   System::Void  pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		   {
			   if (statePen == 1) {
				   points->Clear();
				   points->Add(e->Location);
				   draw = true;

				   pictureBox1->SizeMode = PictureBoxSizeMode::Normal;
			   }
			   else {
				   mousePosition->X = e->Location.X;
				   mousePosition->Y = e->Location.Y;
			   }

			   pictureBox1->Invalidate();
		   }

		   System::Void  pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		   {
			   if (draw && points->Contains(Point(e->X, e->Y)) == false) {
				   if (e->Button == System::Windows::Forms::MouseButtons::Left) {
					   points->Add(e->Location);
				   }
				   pictureBox1->Invalidate();
			   }
		   }

		   System::Void  pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		   {
			   draw = false;
			   pictureBox1->Invalidate();

			   mousePosition->X = -1;
			   mousePosition->Y = -1;
		   }

		   void DrawBackground()
		   {
			   //Ïðèìåíÿåì ôîí
			   if (filename != "openFileDialog1") {
				   background = gcnew Bitmap(filename);
				   background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);
			   }
			   else
				   background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);

			   delete canvas;
			   canvas = Graphics::FromImage(background);
			   pictureBox1->Image = background;
			   pictureBox1->Refresh();
			   pictureBox1->Invalidate();
		   }

		   System::Void  pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		   {
			   switch (statePen)
			   {
			   case 1:
				   if (points->Count > 1) {
					   canvas->DrawLines(pen, points->ToArray());
				   }
				   break;

			   case 2:
				   if (mousePosition->X != -1 && mousePosition->Y != -1)
					   canvas->DrawRectangle(pen, mousePosition->X, mousePosition->Y, Convert::ToInt32(penWidth_numeric->Value), Convert::ToInt32(penWidth_numeric->Value));
				   break;

			   case 3:
				   if (mousePosition->X != -1 && mousePosition->Y != -1)
					   canvas->DrawEllipse(pen, mousePosition->X, mousePosition->Y, Convert::ToInt32(penWidth_numeric->Value), Convert::ToInt32(penWidth_numeric->Value));
				   break;

			   case 4:
				   if (mousePosition->X != -1 && mousePosition->Y != -1)
					   canvas->DrawImage(texture, mousePosition->X, mousePosition->Y, texture->Width, texture->Height);
				   break;

			   default:
				   break;
			   }

			   if (clearAll) {
				   points->Clear();
				   canvas->Clear(Color::White);
				   clearAll = false;

				   mousePosition->X = -1;
				   mousePosition->Y = -1;

				   DrawBackground();
			   }
		   }

		   System::Void GraphicsForm_Load(System::Object^ sender, System::EventArgs^ e)
		   {
			   color = Color::Red;
			   size = 3;
			   pen = gcnew Pen(color, size);
			   points = gcnew List <Point>();
			   draw = false;
			   statePen = 1;
			   mousePosition = new Vector2D();

			   Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			   canvas = Graphics::FromImage(Img);
			   pictureBox1->Image = Img;
			   pictureBox1->BackColor = Color::White;
			   clearAll = false;
			   filename = "openFileDialog1";

			   return System::Void();
		   }

	private: System::Void clear_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		clearAll = true;
		pictureBox1->Invalidate();

		return System::Void();
	}
	private: System::Void penColor_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::ColorDialog^ colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
		colorDialog1->ShowDialog();
		color = colorDialog1->Color;
		
		penColor_btn->BackColor = color;

		if (color == Color::Black) {
			penColor_btn->ForeColor = Color::White;
		}
		else {
			penColor_btn->ForeColor = Color::Black;
		}

		pen = gcnew Pen(color, size);
	}
	private: System::Void penWidth_numeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		size = Convert::ToSingle(penWidth_numeric->Value);
		pen = gcnew Pen(color, size);
	}

	private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fname;
		System::Windows::Forms::SaveFileDialog^ saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
		saveFileDialog1->Filter = "All pictures (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
		saveFileDialog1->ShowDialog();
		fname = saveFileDialog1->FileName;
		if (fname == "")
			return;

		Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
		img->Save(fname);

		//MessageBox::Show(L"Ошибка файл \"" + fname + "\"cj[", L"Успех");

		return System::Void();
	}
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
