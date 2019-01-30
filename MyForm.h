#pragma once
#include "GFX_SDL.h"

//Headers needed for math down below
#include <ctgmath>
#include <math.h>
#define M_PI           3.14159265358979323846  /* pi definition */

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::GroupBox^  pixels_groupbox;


			 //New Managed pointer to shuffle canvas around after each function call.
			 GFX_SDL ^ CanvasPtr = nullptr;


	protected:

	protected:

	private: System::Windows::Forms::TextBox^  p1_y;
	private: System::Windows::Forms::Label^  p1_label_y;
	private: System::Windows::Forms::Button^  p_drawbutton;
	protected:




	private: System::Windows::Forms::TextBox^  p1_x;
	private: System::Windows::Forms::Label^  p1_label_x;
	private: System::Windows::Forms::GroupBox^  line_groupbox;
	private: System::Windows::Forms::GroupBox^  circle_groupbox;





	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::PictureBox^  p_pb;

	private: System::Windows::Forms::Label^  p_colorlabel;



	private: System::Windows::Forms::TextBox^  p5_y;
	private: System::Windows::Forms::Label^  p5_label_y;


	private: System::Windows::Forms::TextBox^  p5_x;
	private: System::Windows::Forms::Label^  p5_label_x;


	private: System::Windows::Forms::TextBox^  p4_y;
	private: System::Windows::Forms::Label^  p4_label_y;


	private: System::Windows::Forms::TextBox^  p4_x;
	private: System::Windows::Forms::Label^  p4_label_x;


	private: System::Windows::Forms::TextBox^  p3_y;
	private: System::Windows::Forms::Label^  p3_label_y;


	private: System::Windows::Forms::TextBox^  p3_x;
	private: System::Windows::Forms::Label^  p3_label_x;



	private: System::Windows::Forms::TextBox^  p2_y;
	private: System::Windows::Forms::Label^  p2_label_y;


	private: System::Windows::Forms::TextBox^  p2_x;
	private: System::Windows::Forms::Label^  p2_label_x;


	private: System::Windows::Forms::TextBox^  p_num;
	private: System::Windows::Forms::Label^  p_label_howmany;
	private: System::Windows::Forms::Button^  clear_canvas_button;

	private: System::Windows::Forms::Label^  canvas_height;

	private: System::Windows::Forms::Label^  canvas_height_label;
	private: System::Windows::Forms::Label^  l_label_rotation;
	private: System::Windows::Forms::TextBox^  l_rot;




	private: System::Windows::Forms::Label^  l_label_translation;

	private: System::Windows::Forms::PictureBox^  l_pb;


	private: System::Windows::Forms::Label^  l_colorlabel;
private: System::Windows::Forms::TextBox^  l_t_y;


	private: System::Windows::Forms::Label^  l_label_y;




	private: System::Windows::Forms::Label^  canvas_width;
private: System::Windows::Forms::TextBox^  l_t_x;


private: System::Windows::Forms::Label^  l_label_x;


	private: System::Windows::Forms::Label^  canvas_width_label;
private: System::Windows::Forms::Button^  l_drawbutton;
private: System::Windows::Forms::PictureBox^  c_pb;




private: System::Windows::Forms::Label^  c_colorlabel;
private: System::Windows::Forms::Label^  c_label_scale;



private: System::Windows::Forms::Label^  c_label_translation;
private: System::Windows::Forms::TextBox^  c_scale;




private: System::Windows::Forms::TextBox^  c_t_y;

private: System::Windows::Forms::Label^  c_label_y;
private: System::Windows::Forms::Button^  c_drawbutton;
private: System::Windows::Forms::TextBox^  c_t_x;



private: System::Windows::Forms::Label^  c_label_x;
private: System::Windows::Forms::Label^  c_label_radius;
private: System::Windows::Forms::TextBox^  c_radius;


private: System::Windows::Forms::Label^  c_label_coordinates;
private: System::Windows::Forms::TextBox^  c_center_y;


private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  c_center_x;

private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  l_label_coordinates;
private: System::Windows::Forms::TextBox^  l_ep_y;


private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  l_ep_x;

private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  l_label_degs;

private: System::Windows::Forms::Label^  l_theda;
private: System::Windows::Forms::Label^  l_length;
private: System::Windows::Forms::Label^  l_label_length;


private: System::Windows::Forms::Label^  l_yff;
private: System::Windows::Forms::Label^  l_xff;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::CheckBox^  c_fill;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  c_depth;
private: System::Windows::Forms::CheckBox^  canvas_crosssection;
private: System::Windows::Forms::Label^  l_tan;

private: System::Windows::Forms::Label^  l_label_tan;
private: System::Windows::Forms::Label^  l_cos;


private: System::Windows::Forms::Label^  l_sin;

private: System::Windows::Forms::Label^  l_label_cos;
private: System::Windows::Forms::Label^  l_label_sin;
private: System::Windows::Forms::CheckBox^  canvas_clear_newrender;







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
			this->pixels_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->p_num = (gcnew System::Windows::Forms::TextBox());
			this->p_label_howmany = (gcnew System::Windows::Forms::Label());
			this->p5_y = (gcnew System::Windows::Forms::TextBox());
			this->p5_label_y = (gcnew System::Windows::Forms::Label());
			this->p_pb = (gcnew System::Windows::Forms::PictureBox());
			this->p_drawbutton = (gcnew System::Windows::Forms::Button());
			this->p5_x = (gcnew System::Windows::Forms::TextBox());
			this->p_colorlabel = (gcnew System::Windows::Forms::Label());
			this->p5_label_x = (gcnew System::Windows::Forms::Label());
			this->p4_y = (gcnew System::Windows::Forms::TextBox());
			this->p4_label_y = (gcnew System::Windows::Forms::Label());
			this->p4_x = (gcnew System::Windows::Forms::TextBox());
			this->p4_label_x = (gcnew System::Windows::Forms::Label());
			this->p3_y = (gcnew System::Windows::Forms::TextBox());
			this->p3_label_y = (gcnew System::Windows::Forms::Label());
			this->p3_x = (gcnew System::Windows::Forms::TextBox());
			this->p3_label_x = (gcnew System::Windows::Forms::Label());
			this->p2_y = (gcnew System::Windows::Forms::TextBox());
			this->p2_label_y = (gcnew System::Windows::Forms::Label());
			this->p2_x = (gcnew System::Windows::Forms::TextBox());
			this->p2_label_x = (gcnew System::Windows::Forms::Label());
			this->p1_y = (gcnew System::Windows::Forms::TextBox());
			this->p1_label_y = (gcnew System::Windows::Forms::Label());
			this->p1_x = (gcnew System::Windows::Forms::TextBox());
			this->p1_label_x = (gcnew System::Windows::Forms::Label());
			this->clear_canvas_button = (gcnew System::Windows::Forms::Button());
			this->line_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->l_tan = (gcnew System::Windows::Forms::Label());
			this->l_label_tan = (gcnew System::Windows::Forms::Label());
			this->l_cos = (gcnew System::Windows::Forms::Label());
			this->l_sin = (gcnew System::Windows::Forms::Label());
			this->l_label_cos = (gcnew System::Windows::Forms::Label());
			this->l_label_sin = (gcnew System::Windows::Forms::Label());
			this->l_yff = (gcnew System::Windows::Forms::Label());
			this->l_xff = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->l_length = (gcnew System::Windows::Forms::Label());
			this->l_label_length = (gcnew System::Windows::Forms::Label());
			this->l_theda = (gcnew System::Windows::Forms::Label());
			this->l_label_coordinates = (gcnew System::Windows::Forms::Label());
			this->l_label_degs = (gcnew System::Windows::Forms::Label());
			this->l_ep_y = (gcnew System::Windows::Forms::TextBox());
			this->l_label_rotation = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->l_rot = (gcnew System::Windows::Forms::TextBox());
			this->l_ep_x = (gcnew System::Windows::Forms::TextBox());
			this->l_label_translation = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->l_pb = (gcnew System::Windows::Forms::PictureBox());
			this->l_colorlabel = (gcnew System::Windows::Forms::Label());
			this->l_t_y = (gcnew System::Windows::Forms::TextBox());
			this->l_label_y = (gcnew System::Windows::Forms::Label());
			this->l_t_x = (gcnew System::Windows::Forms::TextBox());
			this->l_label_x = (gcnew System::Windows::Forms::Label());
			this->l_drawbutton = (gcnew System::Windows::Forms::Button());
			this->canvas_height = (gcnew System::Windows::Forms::Label());
			this->canvas_height_label = (gcnew System::Windows::Forms::Label());
			this->canvas_width = (gcnew System::Windows::Forms::Label());
			this->canvas_width_label = (gcnew System::Windows::Forms::Label());
			this->circle_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->c_fill = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->c_depth = (gcnew System::Windows::Forms::TextBox());
			this->c_label_radius = (gcnew System::Windows::Forms::Label());
			this->c_radius = (gcnew System::Windows::Forms::TextBox());
			this->c_label_coordinates = (gcnew System::Windows::Forms::Label());
			this->c_center_y = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->c_center_x = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->c_pb = (gcnew System::Windows::Forms::PictureBox());
			this->c_colorlabel = (gcnew System::Windows::Forms::Label());
			this->c_label_scale = (gcnew System::Windows::Forms::Label());
			this->c_label_translation = (gcnew System::Windows::Forms::Label());
			this->c_scale = (gcnew System::Windows::Forms::TextBox());
			this->c_t_y = (gcnew System::Windows::Forms::TextBox());
			this->c_label_y = (gcnew System::Windows::Forms::Label());
			this->c_drawbutton = (gcnew System::Windows::Forms::Button());
			this->c_t_x = (gcnew System::Windows::Forms::TextBox());
			this->c_label_x = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->canvas_crosssection = (gcnew System::Windows::Forms::CheckBox());
			this->canvas_clear_newrender = (gcnew System::Windows::Forms::CheckBox());
			this->pixels_groupbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p_pb))->BeginInit();
			this->line_groupbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l_pb))->BeginInit();
			this->circle_groupbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_pb))->BeginInit();
			this->SuspendLayout();
			// 
			// pixels_groupbox
			// 
			this->pixels_groupbox->Controls->Add(this->p_num);
			this->pixels_groupbox->Controls->Add(this->p_label_howmany);
			this->pixels_groupbox->Controls->Add(this->p5_y);
			this->pixels_groupbox->Controls->Add(this->p5_label_y);
			this->pixels_groupbox->Controls->Add(this->p_pb);
			this->pixels_groupbox->Controls->Add(this->p_drawbutton);
			this->pixels_groupbox->Controls->Add(this->p5_x);
			this->pixels_groupbox->Controls->Add(this->p_colorlabel);
			this->pixels_groupbox->Controls->Add(this->p5_label_x);
			this->pixels_groupbox->Controls->Add(this->p4_y);
			this->pixels_groupbox->Controls->Add(this->p4_label_y);
			this->pixels_groupbox->Controls->Add(this->p4_x);
			this->pixels_groupbox->Controls->Add(this->p4_label_x);
			this->pixels_groupbox->Controls->Add(this->p3_y);
			this->pixels_groupbox->Controls->Add(this->p3_label_y);
			this->pixels_groupbox->Controls->Add(this->p3_x);
			this->pixels_groupbox->Controls->Add(this->p3_label_x);
			this->pixels_groupbox->Controls->Add(this->p2_y);
			this->pixels_groupbox->Controls->Add(this->p2_label_y);
			this->pixels_groupbox->Controls->Add(this->p2_x);
			this->pixels_groupbox->Controls->Add(this->p2_label_x);
			this->pixels_groupbox->Controls->Add(this->p1_y);
			this->pixels_groupbox->Controls->Add(this->p1_label_y);
			this->pixels_groupbox->Controls->Add(this->p1_x);
			this->pixels_groupbox->Controls->Add(this->p1_label_x);
			this->pixels_groupbox->Location = System::Drawing::Point(434, 12);
			this->pixels_groupbox->Name = L"pixels_groupbox";
			this->pixels_groupbox->Size = System::Drawing::Size(321, 147);
			this->pixels_groupbox->TabIndex = 0;
			this->pixels_groupbox->TabStop = false;
			this->pixels_groupbox->Text = L"Draw Pixels";
			// 
			// p_num
			// 
			this->p_num->Location = System::Drawing::Point(152, 17);
			this->p_num->Name = L"p_num";
			this->p_num->Size = System::Drawing::Size(34, 20);
			this->p_num->TabIndex = 24;
			this->p_num->Text = L"0";
			this->p_num->TextChanged += gcnew System::EventHandler(this, &MyForm::p_num_TextChanged);
			// 
			// p_label_howmany
			// 
			this->p_label_howmany->AutoSize = true;
			this->p_label_howmany->Location = System::Drawing::Point(30, 20);
			this->p_label_howmany->Name = L"p_label_howmany";
			this->p_label_howmany->Size = System::Drawing::Size(116, 13);
			this->p_label_howmany->TabIndex = 23;
			this->p_label_howmany->Text = L"How many pixles\? (1-5)";
			// 
			// p5_y
			// 
			this->p5_y->Enabled = false;
			this->p5_y->Location = System::Drawing::Point(276, 121);
			this->p5_y->Name = L"p5_y";
			this->p5_y->Size = System::Drawing::Size(26, 20);
			this->p5_y->TabIndex = 22;
			this->p5_y->Text = L"0";
			// 
			// p5_label_y
			// 
			this->p5_label_y->AutoSize = true;
			this->p5_label_y->Enabled = false;
			this->p5_label_y->Location = System::Drawing::Point(256, 124);
			this->p5_label_y->Name = L"p5_label_y";
			this->p5_label_y->Size = System::Drawing::Size(23, 13);
			this->p5_label_y->TabIndex = 21;
			this->p5_label_y->Text = L"Y - ";
			// 
			// p_pb
			// 
			this->p_pb->BackColor = System::Drawing::Color::Black;
			this->p_pb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p_pb->Location = System::Drawing::Point(65, 85);
			this->p_pb->Name = L"p_pb";
			this->p_pb->Size = System::Drawing::Size(23, 20);
			this->p_pb->TabIndex = 5;
			this->p_pb->TabStop = false;
			this->p_pb->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// p_drawbutton
			// 
			this->p_drawbutton->Location = System::Drawing::Point(112, 83);
			this->p_drawbutton->Name = L"p_drawbutton";
			this->p_drawbutton->Size = System::Drawing::Size(75, 23);
			this->p_drawbutton->TabIndex = 2;
			this->p_drawbutton->Text = L"Draw!";
			this->p_drawbutton->UseVisualStyleBackColor = true;
			this->p_drawbutton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// p5_x
			// 
			this->p5_x->Enabled = false;
			this->p5_x->Location = System::Drawing::Point(224, 121);
			this->p5_x->Name = L"p5_x";
			this->p5_x->Size = System::Drawing::Size(26, 20);
			this->p5_x->TabIndex = 20;
			this->p5_x->Text = L"0";
			// 
			// p_colorlabel
			// 
			this->p_colorlabel->AutoSize = true;
			this->p_colorlabel->Location = System::Drawing::Point(16, 88);
			this->p_colorlabel->Name = L"p_colorlabel";
			this->p_colorlabel->Size = System::Drawing::Size(53, 13);
			this->p_colorlabel->TabIndex = 6;
			this->p_colorlabel->Text = L"COLOR - ";
			// 
			// p5_label_x
			// 
			this->p5_label_x->AutoSize = true;
			this->p5_label_x->Enabled = false;
			this->p5_label_x->Location = System::Drawing::Point(204, 124);
			this->p5_label_x->Name = L"p5_label_x";
			this->p5_label_x->Size = System::Drawing::Size(23, 13);
			this->p5_label_x->TabIndex = 19;
			this->p5_label_x->Text = L"X - ";
			// 
			// p4_y
			// 
			this->p4_y->Enabled = false;
			this->p4_y->Location = System::Drawing::Point(276, 95);
			this->p4_y->Name = L"p4_y";
			this->p4_y->Size = System::Drawing::Size(26, 20);
			this->p4_y->TabIndex = 18;
			this->p4_y->Text = L"0";
			// 
			// p4_label_y
			// 
			this->p4_label_y->AutoSize = true;
			this->p4_label_y->Enabled = false;
			this->p4_label_y->Location = System::Drawing::Point(256, 98);
			this->p4_label_y->Name = L"p4_label_y";
			this->p4_label_y->Size = System::Drawing::Size(23, 13);
			this->p4_label_y->TabIndex = 17;
			this->p4_label_y->Text = L"Y - ";
			// 
			// p4_x
			// 
			this->p4_x->Enabled = false;
			this->p4_x->Location = System::Drawing::Point(224, 95);
			this->p4_x->Name = L"p4_x";
			this->p4_x->Size = System::Drawing::Size(26, 20);
			this->p4_x->TabIndex = 16;
			this->p4_x->Text = L"0";
			// 
			// p4_label_x
			// 
			this->p4_label_x->AutoSize = true;
			this->p4_label_x->Enabled = false;
			this->p4_label_x->Location = System::Drawing::Point(204, 98);
			this->p4_label_x->Name = L"p4_label_x";
			this->p4_label_x->Size = System::Drawing::Size(23, 13);
			this->p4_label_x->TabIndex = 15;
			this->p4_label_x->Text = L"X - ";
			// 
			// p3_y
			// 
			this->p3_y->Enabled = false;
			this->p3_y->Location = System::Drawing::Point(276, 69);
			this->p3_y->Name = L"p3_y";
			this->p3_y->Size = System::Drawing::Size(26, 20);
			this->p3_y->TabIndex = 14;
			this->p3_y->Text = L"0";
			// 
			// p3_label_y
			// 
			this->p3_label_y->AutoSize = true;
			this->p3_label_y->Enabled = false;
			this->p3_label_y->Location = System::Drawing::Point(256, 72);
			this->p3_label_y->Name = L"p3_label_y";
			this->p3_label_y->Size = System::Drawing::Size(23, 13);
			this->p3_label_y->TabIndex = 13;
			this->p3_label_y->Text = L"Y - ";
			// 
			// p3_x
			// 
			this->p3_x->Enabled = false;
			this->p3_x->Location = System::Drawing::Point(224, 69);
			this->p3_x->Name = L"p3_x";
			this->p3_x->Size = System::Drawing::Size(26, 20);
			this->p3_x->TabIndex = 12;
			this->p3_x->Text = L"0";
			// 
			// p3_label_x
			// 
			this->p3_label_x->AutoSize = true;
			this->p3_label_x->Enabled = false;
			this->p3_label_x->Location = System::Drawing::Point(204, 72);
			this->p3_label_x->Name = L"p3_label_x";
			this->p3_label_x->Size = System::Drawing::Size(23, 13);
			this->p3_label_x->TabIndex = 11;
			this->p3_label_x->Text = L"X - ";
			// 
			// p2_y
			// 
			this->p2_y->Enabled = false;
			this->p2_y->Location = System::Drawing::Point(276, 43);
			this->p2_y->Name = L"p2_y";
			this->p2_y->Size = System::Drawing::Size(26, 20);
			this->p2_y->TabIndex = 10;
			this->p2_y->Text = L"0";
			// 
			// p2_label_y
			// 
			this->p2_label_y->AutoSize = true;
			this->p2_label_y->Enabled = false;
			this->p2_label_y->Location = System::Drawing::Point(256, 46);
			this->p2_label_y->Name = L"p2_label_y";
			this->p2_label_y->Size = System::Drawing::Size(23, 13);
			this->p2_label_y->TabIndex = 9;
			this->p2_label_y->Text = L"Y - ";
			// 
			// p2_x
			// 
			this->p2_x->Enabled = false;
			this->p2_x->Location = System::Drawing::Point(224, 43);
			this->p2_x->Name = L"p2_x";
			this->p2_x->Size = System::Drawing::Size(26, 20);
			this->p2_x->TabIndex = 8;
			this->p2_x->Text = L"0";
			// 
			// p2_label_x
			// 
			this->p2_label_x->AutoSize = true;
			this->p2_label_x->Enabled = false;
			this->p2_label_x->Location = System::Drawing::Point(204, 46);
			this->p2_label_x->Name = L"p2_label_x";
			this->p2_label_x->Size = System::Drawing::Size(23, 13);
			this->p2_label_x->TabIndex = 7;
			this->p2_label_x->Text = L"X - ";
			// 
			// p1_y
			// 
			this->p1_y->Enabled = false;
			this->p1_y->Location = System::Drawing::Point(276, 17);
			this->p1_y->Name = L"p1_y";
			this->p1_y->Size = System::Drawing::Size(26, 20);
			this->p1_y->TabIndex = 4;
			this->p1_y->Text = L"0";
			// 
			// p1_label_y
			// 
			this->p1_label_y->AutoSize = true;
			this->p1_label_y->Enabled = false;
			this->p1_label_y->Location = System::Drawing::Point(256, 20);
			this->p1_label_y->Name = L"p1_label_y";
			this->p1_label_y->Size = System::Drawing::Size(23, 13);
			this->p1_label_y->TabIndex = 3;
			this->p1_label_y->Text = L"Y - ";
			// 
			// p1_x
			// 
			this->p1_x->Enabled = false;
			this->p1_x->Location = System::Drawing::Point(224, 17);
			this->p1_x->Name = L"p1_x";
			this->p1_x->Size = System::Drawing::Size(26, 20);
			this->p1_x->TabIndex = 1;
			this->p1_x->Text = L"0";
			// 
			// p1_label_x
			// 
			this->p1_label_x->AutoSize = true;
			this->p1_label_x->Enabled = false;
			this->p1_label_x->Location = System::Drawing::Point(204, 20);
			this->p1_label_x->Name = L"p1_label_x";
			this->p1_label_x->Size = System::Drawing::Size(23, 13);
			this->p1_label_x->TabIndex = 0;
			this->p1_label_x->Text = L"X - ";
			// 
			// clear_canvas_button
			// 
			this->clear_canvas_button->Location = System::Drawing::Point(578, 203);
			this->clear_canvas_button->Name = L"clear_canvas_button";
			this->clear_canvas_button->Size = System::Drawing::Size(158, 46);
			this->clear_canvas_button->TabIndex = 3;
			this->clear_canvas_button->Text = L"manually clear canvas";
			this->clear_canvas_button->UseVisualStyleBackColor = true;
			this->clear_canvas_button->Click += gcnew System::EventHandler(this, &MyForm::clear_canvas_button_Click);
			// 
			// line_groupbox
			// 
			this->line_groupbox->Controls->Add(this->l_tan);
			this->line_groupbox->Controls->Add(this->l_label_tan);
			this->line_groupbox->Controls->Add(this->l_cos);
			this->line_groupbox->Controls->Add(this->l_sin);
			this->line_groupbox->Controls->Add(this->l_label_cos);
			this->line_groupbox->Controls->Add(this->l_label_sin);
			this->line_groupbox->Controls->Add(this->l_yff);
			this->line_groupbox->Controls->Add(this->l_xff);
			this->line_groupbox->Controls->Add(this->label5);
			this->line_groupbox->Controls->Add(this->label1);
			this->line_groupbox->Controls->Add(this->l_length);
			this->line_groupbox->Controls->Add(this->l_label_length);
			this->line_groupbox->Controls->Add(this->l_theda);
			this->line_groupbox->Controls->Add(this->l_label_coordinates);
			this->line_groupbox->Controls->Add(this->l_label_degs);
			this->line_groupbox->Controls->Add(this->l_ep_y);
			this->line_groupbox->Controls->Add(this->l_label_rotation);
			this->line_groupbox->Controls->Add(this->label6);
			this->line_groupbox->Controls->Add(this->l_rot);
			this->line_groupbox->Controls->Add(this->l_ep_x);
			this->line_groupbox->Controls->Add(this->l_label_translation);
			this->line_groupbox->Controls->Add(this->label7);
			this->line_groupbox->Controls->Add(this->l_pb);
			this->line_groupbox->Controls->Add(this->l_colorlabel);
			this->line_groupbox->Controls->Add(this->l_t_y);
			this->line_groupbox->Controls->Add(this->l_label_y);
			this->line_groupbox->Controls->Add(this->l_t_x);
			this->line_groupbox->Controls->Add(this->l_label_x);
			this->line_groupbox->Controls->Add(this->l_drawbutton);
			this->line_groupbox->Location = System::Drawing::Point(12, 12);
			this->line_groupbox->Name = L"line_groupbox";
			this->line_groupbox->Size = System::Drawing::Size(410, 115);
			this->line_groupbox->TabIndex = 1;
			this->line_groupbox->TabStop = false;
			this->line_groupbox->Text = L"Draw Line";
			// 
			// l_tan
			// 
			this->l_tan->AutoSize = true;
			this->l_tan->Location = System::Drawing::Point(351, 93);
			this->l_tan->Name = L"l_tan";
			this->l_tan->Size = System::Drawing::Size(13, 13);
			this->l_tan->TabIndex = 58;
			this->l_tan->Text = L"0";
			// 
			// l_label_tan
			// 
			this->l_label_tan->AutoSize = true;
			this->l_label_tan->Location = System::Drawing::Point(323, 93);
			this->l_label_tan->Name = L"l_label_tan";
			this->l_label_tan->Size = System::Drawing::Size(29, 13);
			this->l_label_tan->TabIndex = 57;
			this->l_label_tan->Text = L"Tan:";
			// 
			// l_cos
			// 
			this->l_cos->AutoSize = true;
			this->l_cos->Location = System::Drawing::Point(351, 79);
			this->l_cos->Name = L"l_cos";
			this->l_cos->Size = System::Drawing::Size(13, 13);
			this->l_cos->TabIndex = 56;
			this->l_cos->Text = L"0";
			// 
			// l_sin
			// 
			this->l_sin->AutoSize = true;
			this->l_sin->Location = System::Drawing::Point(351, 65);
			this->l_sin->Name = L"l_sin";
			this->l_sin->Size = System::Drawing::Size(13, 13);
			this->l_sin->TabIndex = 55;
			this->l_sin->Text = L"0";
			// 
			// l_label_cos
			// 
			this->l_label_cos->AutoSize = true;
			this->l_label_cos->Location = System::Drawing::Point(323, 79);
			this->l_label_cos->Name = L"l_label_cos";
			this->l_label_cos->Size = System::Drawing::Size(28, 13);
			this->l_label_cos->TabIndex = 54;
			this->l_label_cos->Text = L"Cos:";
			// 
			// l_label_sin
			// 
			this->l_label_sin->AutoSize = true;
			this->l_label_sin->Location = System::Drawing::Point(326, 65);
			this->l_label_sin->Name = L"l_label_sin";
			this->l_label_sin->Size = System::Drawing::Size(25, 13);
			this->l_label_sin->TabIndex = 53;
			this->l_label_sin->Text = L"Sin:";
			// 
			// l_yff
			// 
			this->l_yff->AutoSize = true;
			this->l_yff->Location = System::Drawing::Point(283, 91);
			this->l_yff->Name = L"l_yff";
			this->l_yff->Size = System::Drawing::Size(13, 13);
			this->l_yff->TabIndex = 52;
			this->l_yff->Text = L"0";
			// 
			// l_xff
			// 
			this->l_xff->AutoSize = true;
			this->l_xff->Location = System::Drawing::Point(283, 78);
			this->l_xff->Name = L"l_xff";
			this->l_xff->Size = System::Drawing::Size(13, 13);
			this->l_xff->TabIndex = 51;
			this->l_xff->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(242, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 50;
			this->label5->Text = L"New Y:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(242, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 49;
			this->label1->Text = L"New X:";
			// 
			// l_length
			// 
			this->l_length->AutoSize = true;
			this->l_length->Location = System::Drawing::Point(184, 91);
			this->l_length->Name = L"l_length";
			this->l_length->Size = System::Drawing::Size(13, 13);
			this->l_length->TabIndex = 48;
			this->l_length->Text = L"0";
			// 
			// l_label_length
			// 
			this->l_label_length->AutoSize = true;
			this->l_label_length->Location = System::Drawing::Point(144, 91);
			this->l_label_length->Name = L"l_label_length";
			this->l_label_length->Size = System::Drawing::Size(46, 13);
			this->l_label_length->TabIndex = 47;
			this->l_label_length->Text = L"Length: ";
			// 
			// l_theda
			// 
			this->l_theda->AutoSize = true;
			this->l_theda->Location = System::Drawing::Point(192, 76);
			this->l_theda->Name = L"l_theda";
			this->l_theda->Size = System::Drawing::Size(13, 13);
			this->l_theda->TabIndex = 36;
			this->l_theda->Text = L"0";
			// 
			// l_label_coordinates
			// 
			this->l_label_coordinates->AutoSize = true;
			this->l_label_coordinates->Location = System::Drawing::Point(15, 26);
			this->l_label_coordinates->Name = L"l_label_coordinates";
			this->l_label_coordinates->Size = System::Drawing::Size(112, 13);
			this->l_label_coordinates->TabIndex = 46;
			this->l_label_coordinates->Text = L"End-Point Coordinates";
			// 
			// l_label_degs
			// 
			this->l_label_degs->AutoSize = true;
			this->l_label_degs->Location = System::Drawing::Point(144, 76);
			this->l_label_degs->Name = L"l_label_degs";
			this->l_label_degs->Size = System::Drawing::Size(50, 13);
			this->l_label_degs->TabIndex = 35;
			this->l_label_degs->Text = L"Degrees:";
			// 
			// l_ep_y
			// 
			this->l_ep_y->Location = System::Drawing::Point(87, 42);
			this->l_ep_y->Name = L"l_ep_y";
			this->l_ep_y->Size = System::Drawing::Size(26, 20);
			this->l_ep_y->TabIndex = 45;
			this->l_ep_y->Text = L"0";
			// 
			// l_label_rotation
			// 
			this->l_label_rotation->AutoSize = true;
			this->l_label_rotation->Location = System::Drawing::Point(144, 26);
			this->l_label_rotation->Name = L"l_label_rotation";
			this->l_label_rotation->Size = System::Drawing::Size(74, 13);
			this->l_label_rotation->TabIndex = 32;
			this->l_label_rotation->Text = L"Rotation (deg)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(67, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Y - ";
			// 
			// l_rot
			// 
			this->l_rot->Location = System::Drawing::Point(147, 42);
			this->l_rot->Name = L"l_rot";
			this->l_rot->Size = System::Drawing::Size(44, 20);
			this->l_rot->TabIndex = 31;
			this->l_rot->Text = L"0";
			// 
			// l_ep_x
			// 
			this->l_ep_x->Location = System::Drawing::Point(35, 42);
			this->l_ep_x->Name = L"l_ep_x";
			this->l_ep_x->Size = System::Drawing::Size(26, 20);
			this->l_ep_x->TabIndex = 43;
			this->l_ep_x->Text = L"0";
			// 
			// l_label_translation
			// 
			this->l_label_translation->AutoSize = true;
			this->l_label_translation->Location = System::Drawing::Point(15, 70);
			this->l_label_translation->Name = L"l_label_translation";
			this->l_label_translation->Size = System::Drawing::Size(92, 13);
			this->l_label_translation->TabIndex = 29;
			this->l_label_translation->Text = L"Translation ( - , + )";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 13);
			this->label7->TabIndex = 42;
			this->label7->Text = L"X - ";
			// 
			// l_pb
			// 
			this->l_pb->BackColor = System::Drawing::Color::Black;
			this->l_pb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l_pb->Location = System::Drawing::Point(261, 36);
			this->l_pb->Name = L"l_pb";
			this->l_pb->Size = System::Drawing::Size(23, 20);
			this->l_pb->TabIndex = 25;
			this->l_pb->TabStop = false;
			this->l_pb->Click += gcnew System::EventHandler(this, &MyForm::l_pb_Click);
			// 
			// l_colorlabel
			// 
			this->l_colorlabel->AutoSize = true;
			this->l_colorlabel->Location = System::Drawing::Point(212, 39);
			this->l_colorlabel->Name = L"l_colorlabel";
			this->l_colorlabel->Size = System::Drawing::Size(53, 13);
			this->l_colorlabel->TabIndex = 26;
			this->l_colorlabel->Text = L"COLOR - ";
			// 
			// l_t_y
			// 
			this->l_t_y->Location = System::Drawing::Point(87, 86);
			this->l_t_y->Name = L"l_t_y";
			this->l_t_y->Size = System::Drawing::Size(26, 20);
			this->l_t_y->TabIndex = 28;
			this->l_t_y->Text = L"0";
			// 
			// l_label_y
			// 
			this->l_label_y->AutoSize = true;
			this->l_label_y->Location = System::Drawing::Point(67, 89);
			this->l_label_y->Name = L"l_label_y";
			this->l_label_y->Size = System::Drawing::Size(23, 13);
			this->l_label_y->TabIndex = 27;
			this->l_label_y->Text = L"Y - ";
			// 
			// l_t_x
			// 
			this->l_t_x->Location = System::Drawing::Point(35, 86);
			this->l_t_x->Name = L"l_t_x";
			this->l_t_x->Size = System::Drawing::Size(26, 20);
			this->l_t_x->TabIndex = 26;
			this->l_t_x->Text = L"0";
			// 
			// l_label_x
			// 
			this->l_label_x->AutoSize = true;
			this->l_label_x->Location = System::Drawing::Point(15, 89);
			this->l_label_x->Name = L"l_label_x";
			this->l_label_x->Size = System::Drawing::Size(23, 13);
			this->l_label_x->TabIndex = 25;
			this->l_label_x->Text = L"X - ";
			// 
			// l_drawbutton
			// 
			this->l_drawbutton->Location = System::Drawing::Point(309, 34);
			this->l_drawbutton->Name = L"l_drawbutton";
			this->l_drawbutton->Size = System::Drawing::Size(75, 23);
			this->l_drawbutton->TabIndex = 0;
			this->l_drawbutton->Text = L"Draw!";
			this->l_drawbutton->UseVisualStyleBackColor = true;
			this->l_drawbutton->Click += gcnew System::EventHandler(this, &MyForm::l_drawbutton_Click);
			// 
			// canvas_height
			// 
			this->canvas_height->AutoSize = true;
			this->canvas_height->Location = System::Drawing::Point(514, 230);
			this->canvas_height->Name = L"canvas_height";
			this->canvas_height->Size = System::Drawing::Size(25, 13);
			this->canvas_height->TabIndex = 34;
			this->canvas_height->Text = L"480";
			// 
			// canvas_height_label
			// 
			this->canvas_height_label->AutoSize = true;
			this->canvas_height_label->Location = System::Drawing::Point(431, 230);
			this->canvas_height_label->Name = L"canvas_height_label";
			this->canvas_height_label->Size = System::Drawing::Size(80, 13);
			this->canvas_height_label->TabIndex = 33;
			this->canvas_height_label->Text = L"Canvas Height:";
			// 
			// canvas_width
			// 
			this->canvas_width->AutoSize = true;
			this->canvas_width->Location = System::Drawing::Point(514, 211);
			this->canvas_width->Name = L"canvas_width";
			this->canvas_width->Size = System::Drawing::Size(25, 13);
			this->canvas_width->TabIndex = 5;
			this->canvas_width->Text = L"640";
			// 
			// canvas_width_label
			// 
			this->canvas_width_label->AutoSize = true;
			this->canvas_width_label->Location = System::Drawing::Point(431, 211);
			this->canvas_width_label->Name = L"canvas_width_label";
			this->canvas_width_label->Size = System::Drawing::Size(77, 13);
			this->canvas_width_label->TabIndex = 3;
			this->canvas_width_label->Text = L"Canvas Width:";
			// 
			// circle_groupbox
			// 
			this->circle_groupbox->Controls->Add(this->c_fill);
			this->circle_groupbox->Controls->Add(this->label8);
			this->circle_groupbox->Controls->Add(this->c_depth);
			this->circle_groupbox->Controls->Add(this->c_label_radius);
			this->circle_groupbox->Controls->Add(this->c_radius);
			this->circle_groupbox->Controls->Add(this->c_label_coordinates);
			this->circle_groupbox->Controls->Add(this->c_center_y);
			this->circle_groupbox->Controls->Add(this->label2);
			this->circle_groupbox->Controls->Add(this->c_center_x);
			this->circle_groupbox->Controls->Add(this->label3);
			this->circle_groupbox->Controls->Add(this->c_pb);
			this->circle_groupbox->Controls->Add(this->c_colorlabel);
			this->circle_groupbox->Controls->Add(this->c_label_scale);
			this->circle_groupbox->Controls->Add(this->c_label_translation);
			this->circle_groupbox->Controls->Add(this->c_scale);
			this->circle_groupbox->Controls->Add(this->c_t_y);
			this->circle_groupbox->Controls->Add(this->c_label_y);
			this->circle_groupbox->Controls->Add(this->c_drawbutton);
			this->circle_groupbox->Controls->Add(this->c_t_x);
			this->circle_groupbox->Controls->Add(this->c_label_x);
			this->circle_groupbox->Location = System::Drawing::Point(12, 133);
			this->circle_groupbox->Name = L"circle_groupbox";
			this->circle_groupbox->Size = System::Drawing::Size(410, 120);
			this->circle_groupbox->TabIndex = 2;
			this->circle_groupbox->TabStop = false;
			this->circle_groupbox->Text = L"Draw Circle";
			// 
			// c_fill
			// 
			this->c_fill->AutoSize = true;
			this->c_fill->Checked = true;
			this->c_fill->CheckState = System::Windows::Forms::CheckState::Checked;
			this->c_fill->Location = System::Drawing::Point(328, 91);
			this->c_fill->Name = L"c_fill";
			this->c_fill->Size = System::Drawing::Size(38, 17);
			this->c_fill->TabIndex = 44;
			this->c_fill->Text = L"Fill";
			this->c_fill->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(247, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Depth";
			// 
			// c_depth
			// 
			this->c_depth->Location = System::Drawing::Point(250, 89);
			this->c_depth->Name = L"c_depth";
			this->c_depth->Size = System::Drawing::Size(44, 20);
			this->c_depth->TabIndex = 42;
			this->c_depth->Text = L"0.01";
			// 
			// c_label_radius
			// 
			this->c_label_radius->AutoSize = true;
			this->c_label_radius->Location = System::Drawing::Point(144, 26);
			this->c_label_radius->Name = L"c_label_radius";
			this->c_label_radius->Size = System::Drawing::Size(40, 13);
			this->c_label_radius->TabIndex = 41;
			this->c_label_radius->Text = L"Radius";
			// 
			// c_radius
			// 
			this->c_radius->Location = System::Drawing::Point(147, 42);
			this->c_radius->Name = L"c_radius";
			this->c_radius->Size = System::Drawing::Size(44, 20);
			this->c_radius->TabIndex = 40;
			this->c_radius->Text = L"0";
			// 
			// c_label_coordinates
			// 
			this->c_label_coordinates->AutoSize = true;
			this->c_label_coordinates->Location = System::Drawing::Point(15, 26);
			this->c_label_coordinates->Name = L"c_label_coordinates";
			this->c_label_coordinates->Size = System::Drawing::Size(97, 13);
			this->c_label_coordinates->TabIndex = 39;
			this->c_label_coordinates->Text = L"Center Coordinates";
			// 
			// c_center_y
			// 
			this->c_center_y->Location = System::Drawing::Point(87, 42);
			this->c_center_y->Name = L"c_center_y";
			this->c_center_y->Size = System::Drawing::Size(26, 20);
			this->c_center_y->TabIndex = 38;
			this->c_center_y->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Y - ";
			// 
			// c_center_x
			// 
			this->c_center_x->Location = System::Drawing::Point(35, 42);
			this->c_center_x->Name = L"c_center_x";
			this->c_center_x->Size = System::Drawing::Size(26, 20);
			this->c_center_x->TabIndex = 36;
			this->c_center_x->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 35;
			this->label3->Text = L"X - ";
			// 
			// c_pb
			// 
			this->c_pb->BackColor = System::Drawing::Color::Black;
			this->c_pb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_pb->Location = System::Drawing::Point(261, 41);
			this->c_pb->Name = L"c_pb";
			this->c_pb->Size = System::Drawing::Size(23, 20);
			this->c_pb->TabIndex = 33;
			this->c_pb->TabStop = false;
			this->c_pb->Click += gcnew System::EventHandler(this, &MyForm::c_pb_Click);
			// 
			// c_colorlabel
			// 
			this->c_colorlabel->AutoSize = true;
			this->c_colorlabel->Location = System::Drawing::Point(212, 44);
			this->c_colorlabel->Name = L"c_colorlabel";
			this->c_colorlabel->Size = System::Drawing::Size(53, 13);
			this->c_colorlabel->TabIndex = 34;
			this->c_colorlabel->Text = L"COLOR - ";
			// 
			// c_label_scale
			// 
			this->c_label_scale->AutoSize = true;
			this->c_label_scale->Location = System::Drawing::Point(144, 73);
			this->c_label_scale->Name = L"c_label_scale";
			this->c_label_scale->Size = System::Drawing::Size(84, 13);
			this->c_label_scale->TabIndex = 34;
			this->c_label_scale->Text = L"Scale (Multiplier)";
			// 
			// c_label_translation
			// 
			this->c_label_translation->AutoSize = true;
			this->c_label_translation->Location = System::Drawing::Point(15, 73);
			this->c_label_translation->Name = L"c_label_translation";
			this->c_label_translation->Size = System::Drawing::Size(92, 13);
			this->c_label_translation->TabIndex = 34;
			this->c_label_translation->Text = L"Translation ( - , + )";
			// 
			// c_scale
			// 
			this->c_scale->Location = System::Drawing::Point(147, 89);
			this->c_scale->Name = L"c_scale";
			this->c_scale->Size = System::Drawing::Size(44, 20);
			this->c_scale->TabIndex = 33;
			this->c_scale->Text = L"0";
			// 
			// c_t_y
			// 
			this->c_t_y->Location = System::Drawing::Point(87, 89);
			this->c_t_y->Name = L"c_t_y";
			this->c_t_y->Size = System::Drawing::Size(26, 20);
			this->c_t_y->TabIndex = 33;
			this->c_t_y->Text = L"0";
			// 
			// c_label_y
			// 
			this->c_label_y->AutoSize = true;
			this->c_label_y->Location = System::Drawing::Point(67, 92);
			this->c_label_y->Name = L"c_label_y";
			this->c_label_y->Size = System::Drawing::Size(23, 13);
			this->c_label_y->TabIndex = 32;
			this->c_label_y->Text = L"Y - ";
			// 
			// c_drawbutton
			// 
			this->c_drawbutton->Location = System::Drawing::Point(309, 39);
			this->c_drawbutton->Name = L"c_drawbutton";
			this->c_drawbutton->Size = System::Drawing::Size(75, 23);
			this->c_drawbutton->TabIndex = 2;
			this->c_drawbutton->Text = L"Draw!";
			this->c_drawbutton->UseVisualStyleBackColor = true;
			this->c_drawbutton->Click += gcnew System::EventHandler(this, &MyForm::c_drawbutton_Click);
			// 
			// c_t_x
			// 
			this->c_t_x->Location = System::Drawing::Point(35, 89);
			this->c_t_x->Name = L"c_t_x";
			this->c_t_x->Size = System::Drawing::Size(26, 20);
			this->c_t_x->TabIndex = 31;
			this->c_t_x->Text = L"0";
			// 
			// c_label_x
			// 
			this->c_label_x->AutoSize = true;
			this->c_label_x->Location = System::Drawing::Point(15, 92);
			this->c_label_x->Name = L"c_label_x";
			this->c_label_x->Size = System::Drawing::Size(23, 13);
			this->c_label_x->TabIndex = 30;
			this->c_label_x->Text = L"X - ";
			// 
			// canvas_crosssection
			// 
			this->canvas_crosssection->AutoSize = true;
			this->canvas_crosssection->Location = System::Drawing::Point(434, 165);
			this->canvas_crosssection->Name = L"canvas_crosssection";
			this->canvas_crosssection->Size = System::Drawing::Size(206, 17);
			this->canvas_crosssection->TabIndex = 45;
			this->canvas_crosssection->Text = L"Draw a Cross Section on manual clear";
			this->canvas_crosssection->UseVisualStyleBackColor = true;
			// 
			// canvas_clear_newrender
			// 
			this->canvas_clear_newrender->AutoSize = true;
			this->canvas_clear_newrender->Checked = true;
			this->canvas_clear_newrender->CheckState = System::Windows::Forms::CheckState::Checked;
			this->canvas_clear_newrender->Location = System::Drawing::Point(434, 183);
			this->canvas_clear_newrender->Name = L"canvas_clear_newrender";
			this->canvas_clear_newrender->Size = System::Drawing::Size(160, 17);
			this->canvas_clear_newrender->TabIndex = 46;
			this->canvas_clear_newrender->Text = L"Clear Canvas on new render";
			this->canvas_clear_newrender->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 262);
			this->Controls->Add(this->canvas_clear_newrender);
			this->Controls->Add(this->canvas_crosssection);
			this->Controls->Add(this->canvas_height);
			this->Controls->Add(this->clear_canvas_button);
			this->Controls->Add(this->canvas_height_label);
			this->Controls->Add(this->line_groupbox);
			this->Controls->Add(this->circle_groupbox);
			this->Controls->Add(this->pixels_groupbox);
			this->Controls->Add(this->canvas_width_label);
			this->Controls->Add(this->canvas_width);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"COMP3520 - Assignment 2 - Nick Stanton - uWin ID: 104 484 258";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pixels_groupbox->ResumeLayout(false);
			this->pixels_groupbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p_pb))->EndInit();
			this->line_groupbox->ResumeLayout(false);
			this->line_groupbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l_pb))->EndInit();
			this->circle_groupbox->ResumeLayout(false);
			this->circle_groupbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_pb))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	if (canvas_clear_newrender->Checked == true) {
		CanvasPtr->CanvisClear();
	}

	//Check pixel boxes for values
	if (p1_x->Enabled == true) {
		CanvasPtr->DrawPixel(Int32::Parse(p1_x->Text), Int32::Parse(p1_y->Text), p_pb->BackColor.R, p_pb->BackColor.G, p_pb->BackColor.B, p_pb->BackColor.A);
	}
	if (p2_x->Enabled == true) {
		CanvasPtr->DrawPixel(Int32::Parse(p2_x->Text), Int32::Parse(p2_y->Text), p_pb->BackColor.R, p_pb->BackColor.G, p_pb->BackColor.B, p_pb->BackColor.A);
	}
	if (p3_x->Enabled == true) {
		CanvasPtr->DrawPixel(Int32::Parse(p3_x->Text), Int32::Parse(p3_y->Text), p_pb->BackColor.R, p_pb->BackColor.G, p_pb->BackColor.B, p_pb->BackColor.A);
	}
	if (p1_x->Enabled == true) {
		CanvasPtr->DrawPixel(Int32::Parse(p4_x->Text), Int32::Parse(p4_y->Text), p_pb->BackColor.R, p_pb->BackColor.G, p_pb->BackColor.B, p_pb->BackColor.A);
	}
	if (p1_x->Enabled == true) {
		CanvasPtr->DrawPixel(Int32::Parse(p5_x->Text), Int32::Parse(p5_y->Text), p_pb->BackColor.R, p_pb->BackColor.G, p_pb->BackColor.B, p_pb->BackColor.A);
	}

	//Render the pixels on screen
	CanvasPtr->CanvisRender();

}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	//Pick color for individual Pixels
	colorDialog1->ShowDialog();
	p_pb->BackColor = colorDialog1->Color;

}
private: System::Void p_num_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	//Check if number of pixels is anywhere between 1 and 5, and hide/show visuals accordingly
	if (p_num->Text->Equals("1")) {
		p1_label_x->Enabled = true;
		p1_label_y->Enabled = true;
		p1_x->Enabled = true;
		p1_y->Enabled = true;
	}
	if (p_num->Text->Equals("2")) {
		p1_label_x->Enabled = true;
		p1_label_y->Enabled = true;
		p1_x->Enabled = true;
		p1_y->Enabled = true;
		p2_label_x->Enabled = true;
		p2_label_y->Enabled = true;
		p2_x->Enabled = true;
		p2_y->Enabled = true;
	}
	if (p_num->Text->Equals("3")) {

		p1_label_x->Enabled = true;
		p1_label_y->Enabled = true;
		p1_x->Enabled = true;
		p1_y->Enabled = true;
		p2_label_x->Enabled = true;
		p2_label_y->Enabled = true;
		p2_x->Enabled = true;
		p2_y->Enabled = true;
		p3_label_x->Enabled = true;
		p3_label_y->Enabled = true;
		p3_x->Enabled = true;
		p3_y->Enabled = true;
	}
	if (p_num->Text->Equals("4")) {

		p1_label_x->Enabled = true;
		p1_label_y->Enabled = true;
		p1_x->Enabled = true;
		p1_y->Enabled = true;
		p2_label_x->Enabled = true;
		p2_label_y->Enabled = true;
		p2_x->Enabled = true;
		p2_y->Enabled = true;
		p3_label_x->Enabled = true;
		p3_label_y->Enabled = true;
		p3_x->Enabled = true;
		p3_y->Enabled = true;
		p4_label_x->Enabled = true;
		p4_label_y->Enabled = true;
		p4_x->Enabled = true;
		p4_y->Enabled = true;
	}
	if (p_num->Text->Equals("5")) {

		p1_label_x->Enabled = true;
		p1_label_y->Enabled = true;
		p1_x->Enabled = true;
		p1_y->Enabled = true;
		p2_label_x->Enabled = true;
		p2_label_y->Enabled = true;
		p2_x->Enabled = true;
		p2_y->Enabled = true;
		p3_label_x->Enabled = true;
		p3_label_y->Enabled = true;
		p3_x->Enabled = true;
		p3_y->Enabled = true;
		p4_label_x->Enabled = true;
		p4_label_y->Enabled = true;
		p4_x->Enabled = true;
		p4_y->Enabled = true;
		p5_label_x->Enabled = true;
		p5_label_y->Enabled = true;
		p5_x->Enabled = true;
		p5_y->Enabled = true;
	}
	
	//Convert string to integer
	if (p_num->Text->Equals("")) {
		p1_label_x->Enabled = false;
		p1_label_y->Enabled = false;
		p1_x->Enabled = false;
		p1_y->Enabled = false;
		p2_label_x->Enabled = false;
		p2_label_y->Enabled = false;
		p2_x->Enabled = false;
		p2_y->Enabled = false;
		p3_label_x->Enabled = false;
		p3_label_y->Enabled = false;
		p3_x->Enabled = false;
		p3_y->Enabled = false;
		p4_label_x->Enabled = false;
		p4_label_y->Enabled = false;
		p4_x->Enabled = false;
		p4_y->Enabled = false;
		p5_label_x->Enabled = false;
		p5_label_y->Enabled = false;
		p5_x->Enabled = false;
		p5_y->Enabled = false;
	}

}
private: System::Void l_pb_Click(System::Object^  sender, System::EventArgs^  e) {

	//Pick color for individual Pixels
	colorDialog1->ShowDialog();
	l_pb->BackColor = colorDialog1->Color;
}
private: System::Void c_pb_Click(System::Object^  sender, System::EventArgs^  e) {

	//Pick color for individual Pixels
	colorDialog1->ShowDialog();
	c_pb->BackColor = colorDialog1->Color;
}
private: System::Void clear_canvas_button_Click(System::Object^  sender, System::EventArgs^  e) {

	//Clear the canvas
	CanvasPtr->CanvisClear();

	//Check if we need to redraw a cross section through the middle (320, 240)
	if (canvas_crosssection->Checked == true) {
		//Draw the horizontal line
		for (int i = 0; i < 680; i++) {
			CanvasPtr->DrawPixel(i, 240, 0, 0, 0, 255);
		}
		//Draw the vertical line
		for (int i = 0; i < 480; i++) {
			CanvasPtr->DrawPixel(320, i, 0, 0, 0, 255);
		}

		CanvasPtr->CanvisRender();
	}


}
private: System::Void l_drawbutton_Click(System::Object^  sender, System::EventArgs^  e) {

	if (canvas_clear_newrender->Checked == true) {
		CanvasPtr->CanvisClear();
	}

	//Draw the Line using Point Draw starting from the center of the canvas (width / 2) (height / 2)

	//Grab the FINAL endpoint X and Y coordinates
	double xf = Int32::Parse(l_ep_x->Text->ToString());
	double yf = Int32::Parse(l_ep_y->Text->ToString());

	//Determine our INITIAL starting point (middle of screen)
	double xi = 320;		//Half of screen width
	double yi = 240;	//Half of screen height

	//Our X coordinates will always be increasing regardless, towards the endpoint. However, the Y coordinates will be run through an equasion that changes
	//depending on what the value of our X coordinate currently is.

	//Are we moving left or right?
	if (xf > xi) {

		//Moving Right

		//Convert slope M to rads
		double newrad = atan(-((double)yf - (double)yi) / ((double)xf - (double)xi));

		//Convert Radians to Degrees
		double newdeg = newrad * (180 / M_PI);

		//Create a new Theda by adding slope M to the degrees from the textbox L_ROT
		int rotation = Int32::Parse(l_rot->Text->ToString());
		double theda = newdeg + rotation;

		//Find the length of the original line
		double ys = pow((double)yf - (double)yi, 2);	//(Final y - Initial y) ^ 2
		double xs = pow((double)xf - (double)xi, 2);	//(Final x - Initial x) ^ 2
		double L = sqrt(xs + ys);	//Length of the line

		//Display the length of the line
		l_length->Text = L.ToString();

		if (rotation != 0) {

			//We are rotating. Need to modify the final x and y points

			//Change theda back to radians
			newrad = theda * (M_PI / 180);

			//Display the new Sin, Cos, and Tan
			l_sin->Text = sin(newrad).ToString();
			l_cos->Text = cos(newrad).ToString();
			l_tan->Text = tan(newrad).ToString();

			//Find the new length and height of the angled line
			double new_height = L * sin(newrad);
			double new_length = L * cos(newrad);

			//Find the new X and Y end coordinates and overwrite the initial final coordinates
			xf = xi + L * cos(newrad);
			yf = yi - L * sin(newrad);

		}

		//Display the new x and y end points after rotation
		l_xff->Text = xf.ToString();
		l_yff->Text = yf.ToString();

		//Display Correction
		if (theda < 0) {
			theda += 360;
		}
		if (theda > 360) {
			theda -= 360;
		}

		//Display new Theda
		l_theda->Text = theda.ToString();

		//Slope m
		double m = (yf - yi) / (xf - xi);

		if (xf < xi) {
			for (double f = xi; f > xf; f--) {
				//f starts at the middle, and works its way to the X value

				//New Y intercept
				double c = yf - (m * xf);

				//Create a new Y coordinate based on X
				double tmp = (m * f) + c;	// + c

				//Add translations
				double a = f + Int32::Parse(l_t_x->Text->ToString());
				double b = tmp + Int32::Parse(l_t_y->Text->ToString());

				//Draw! (pew pew)
				CanvasPtr->DrawPixel((int)a, (int)b, l_pb->BackColor.R, l_pb->BackColor.G, l_pb->BackColor.B, l_pb->BackColor.A);

			}
		}
		else {
			//Drawing to the right now
			for (double f = xi; f < xf; f++) {

				//New Y intercept
				double c = yf - (m * xf);

				//Create a new Y coordinate based on X
				double tmp = (m * f) + c;

				//Add translations
				double a = f + Int32::Parse(l_t_x->Text->ToString());
				double b = tmp + Int32::Parse(l_t_y->Text->ToString());

				//Draw! (pew pew)
				CanvasPtr->DrawPixel((int)a, (int)b, l_pb->BackColor.R, l_pb->BackColor.G, l_pb->BackColor.B, l_pb->BackColor.A);

			}
		}
	}
	else {


		//Convert slope M to rads
		double newrad = atan((yf - yi) / (xf - xi));

		//Convert Radians to Degrees
		double newdeg = newrad * (180 / M_PI);

		//Create a new Theda by adding slope M to the degrees in the textbox L_ROT
		double rotation = Int32::Parse(l_rot->Text->ToString());
		//float theda = 180 - (newdeg - rotation);
		double theda = newdeg - rotation;

		//Find the length of the original line
		double ys = pow(yf - yi, 2);
		double xs = pow(xf - xi, 2);
		double L = sqrt(xs + ys);

		//Check if the rotation box has been changed
		if (rotation != 0) {

			//This rotation is gonna be a little different.
			//Performing rotations within Q2 and Q3 are a mirror image of Q1 and Q4, flipped over the Y axis
			//As such, only the X coordinates will need to change accordingly. The Y coordinates can remain the same as the right side.

			//Change theda back to radians
			newrad = theda * (M_PI / 180);

			//Display the new Sin, Cos, and Tan
			l_sin->Text = sin(newrad).ToString();
			l_cos->Text = cos(newrad).ToString();
			l_tan->Text = tan(newrad).ToString();

			//Find the new X and Y end coordinates (Cos is negative only because we are on the opposite side
			xf = xi + L * (-(cos(newrad)));
			yf = yi - L * sin(newrad);

		}

		//Display the length and theda of the current line
		l_length->Text = L.ToString();
		theda = 180 - (theda + rotation);

		//Display the new x and y end points after rotation
		l_xff->Text = xf.ToString();
		l_yff->Text = yf.ToString();

		//Display Correction
		if (theda < 0) {
			theda += 360;
		}
		if (theda > 360) {
			theda -= 360;
		}

		//Slope m
		double m = (yf - yi) / (xf - xi);

		//Display new Theda
		l_theda->Text = theda.ToString();

		if (xf < xi) {
			for (double f = xi; f > xf; f--) {
				//f starts at the middle, and works its way to the X value

				//New Y intercept
				double c = yf - (m * xf);

				//Create a new Y coordinate based on X
				double tmp = (m * f) + c;	// + c

				//Add translations
				double a = f + Int32::Parse(l_t_x->Text->ToString());
				double b = tmp + Int32::Parse(l_t_y->Text->ToString());

				//Draw! (pew pew)
				CanvasPtr->DrawPixel((int)a, (int)b, l_pb->BackColor.R, l_pb->BackColor.G, l_pb->BackColor.B, l_pb->BackColor.A);

			}
		}
		else {
			//Drawing to the right now
			for (double f = xi; f < xf; f++) {

				//New Y intercept
				double c = yf - (m * xf);

				//Create a new Y coordinate based on X
				double tmp = (m * f) + c;

				//Add translations
				double a = f + Int32::Parse(l_t_x->Text->ToString());
				double b = tmp + Int32::Parse(l_t_y->Text->ToString());

				//Draw! (pew pew)
				CanvasPtr->DrawPixel((int)a, (int)b, l_pb->BackColor.R, l_pb->BackColor.G, l_pb->BackColor.B, l_pb->BackColor.A);

			}
		}
		//Display new Theda
		l_theda->Text = theda.ToString();
	}

	//Render the pixels on screen
	CanvasPtr->CanvisRender();

}
private: System::Void c_drawbutton_Click(System::Object^  sender, System::EventArgs^  e) {

	if (canvas_clear_newrender->Checked == true) {
		CanvasPtr->CanvisClear();
	}

	//Draw the Circle, starting from the points specified (x, y), and expanding outwards via the radius provided

	//Get the center of the circle
	double xi = Int32::Parse(c_center_x->Text->ToString());		//Half of screen width
	double yi = Int32::Parse(c_center_y->Text->ToString());	//Half of screen height

	//Pull the scale and radius 
	double scale = Convert::ToDouble(c_scale->Text->ToString());
	double radius = Convert::ToDouble(c_radius->Text->ToString()) * scale;

	//Get the translation coordinates
	double xt = Int32::Parse(c_t_x->Text->ToString());
	double yt = Int32::Parse(c_t_y->Text->ToString());

	//Get the Depth (number of iterations) we are drawing
	double depth = Convert::ToDouble(c_depth->Text->ToString());
	
	//Start drawing the bottom half of the circle
	for (double i = 0.0; i < M_PI; i += depth) {

		//Get new x and y points using Sin and Cos
		double x = radius * cos(i) + xi;
		double y = radius * sin(i) + yi;

		//Check if we are filling the circle
		if (c_fill->Checked == true) {

			//Fill in the bottom left half of the circle
			for (double j = x; j <= xi; j++) {
				CanvasPtr->DrawPixel((int)(j + xt), (int)y, c_pb->BackColor.R, c_pb->BackColor.G, c_pb->BackColor.B, c_pb->BackColor.A);
			}

			//Fill in the bottom right half of the circle
			for (double j = x; j > xi; j--) {
				CanvasPtr->DrawPixel((int)(j + xt), (int)y, c_pb->BackColor.R, c_pb->BackColor.G, c_pb->BackColor.B, c_pb->BackColor.A);
			}
		}

		//draw the border
		CanvasPtr->DrawPixel((int)(x + xt), (int)(y + yt), c_pb->BackColor.R, c_pb->BackColor.G, c_pb->BackColor.B, c_pb->BackColor.A);
	}

	//Draw the top half of the circle
	for (double i = M_PI; i < 2 * M_PI; i += depth) {

		//Get new x and y points using Sin and Cos
		double x = radius * cos(i) + xi;
		double y = radius * sin(i) + yi;

		//Check if we are filling the circle
		if (c_fill->Checked == true) {

			//Fill in the top left half of the circle
			for (double j = x; j <= xi; j++) {
				CanvasPtr->DrawPixel((int)(j + xt), (int)(y + yt), c_pb->BackColor.R, c_pb->BackColor.G, c_pb->BackColor.B, c_pb->BackColor.A);
			}

			//Fill in the top right half of the circle
			for (double j = x; j > xi; j--) {
				CanvasPtr->DrawPixel((int)(j + xt), (int)(y + yt), c_pb->BackColor.R, c_pb->BackColor.G, c_pb->BackColor.B, c_pb->BackColor.A);
			}
		}

		//draw the border
		CanvasPtr->DrawPixel((int)(x + xt), (int)(y + yt), c_pb->BackColor.R, c_pb->BackColor.G, c_pb->BackColor.B, c_pb->BackColor.A);
	}
	
	//Render the pixels on screen
	CanvasPtr->CanvisRender();

}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	//Set the managed pointer to a new instance of SDL
	CanvasPtr = gcnew GFX_SDL;
	CanvasPtr->CanvisClear();
	CanvasPtr->DrawPixel(320, 240, 0, 0, 0, 255);
	CanvasPtr->DrawPixel(321, 241, 0, 0, 0, 255);
	CanvasPtr->DrawPixel(321, 240, 0, 0, 0, 255);
	CanvasPtr->DrawPixel(319, 241, 0, 0, 0, 255);
	CanvasPtr->DrawPixel(319, 240, 0, 0, 0, 255);

	/*

	*/

	CanvasPtr->CanvisRender();
}
};
}
