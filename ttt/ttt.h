#include <vector>
#include <stdlib.h>
#include "main.h"
#include <iostream>
#include <windows.h>
#include <shellapi.h>

namespace ttt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ttt
	/// </summary>

	public ref class ttt : public System::Windows::Forms::Form
	{
	public:
		ttt(void)
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
		~ttt()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ playerInd;
	private: System::Windows::Forms::Button^ b011;
	private: System::Windows::Forms::Button^ b013;
	private: System::Windows::Forms::Button^ b012;
	private: System::Windows::Forms::Button^ b032;
	private: System::Windows::Forms::Button^ b033;
	private: System::Windows::Forms::Button^ b031;
	private: System::Windows::Forms::Button^ b022;
	private: System::Windows::Forms::Button^ b023;
	private: System::Windows::Forms::Button^ b021;
	private: System::Windows::Forms::Button^ b122;
	private: System::Windows::Forms::Button^ b123;
	private: System::Windows::Forms::Button^ b121;
	private: System::Windows::Forms::Button^ b132;
	private: System::Windows::Forms::Button^ b133;
	private: System::Windows::Forms::Button^ b131;
	private: System::Windows::Forms::Button^ b112;
	private: System::Windows::Forms::Button^ b113;
	private: System::Windows::Forms::Button^ b111;
	private: System::Windows::Forms::Button^ b222;
	private: System::Windows::Forms::Button^ b223;
	private: System::Windows::Forms::Button^ b221;
	private: System::Windows::Forms::Button^ b232;
	private: System::Windows::Forms::Button^ b233;
	private: System::Windows::Forms::Button^ b231;
	private: System::Windows::Forms::Button^ b212;
	private: System::Windows::Forms::Button^ b213;
	private: System::Windows::Forms::Button^ b211;
	private: System::Windows::Forms::Label^ p1wins;
	private: System::Windows::Forms::Label^ p2wins;
	private: System::Windows::Forms::Button^ restart;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ label1;




	protected:

	protected:


	protected:

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
			this->playerInd = (gcnew System::Windows::Forms::Label());
			this->b011 = (gcnew System::Windows::Forms::Button());
			this->b013 = (gcnew System::Windows::Forms::Button());
			this->b012 = (gcnew System::Windows::Forms::Button());
			this->b032 = (gcnew System::Windows::Forms::Button());
			this->b033 = (gcnew System::Windows::Forms::Button());
			this->b031 = (gcnew System::Windows::Forms::Button());
			this->b022 = (gcnew System::Windows::Forms::Button());
			this->b023 = (gcnew System::Windows::Forms::Button());
			this->b021 = (gcnew System::Windows::Forms::Button());
			this->b122 = (gcnew System::Windows::Forms::Button());
			this->b123 = (gcnew System::Windows::Forms::Button());
			this->b121 = (gcnew System::Windows::Forms::Button());
			this->b132 = (gcnew System::Windows::Forms::Button());
			this->b133 = (gcnew System::Windows::Forms::Button());
			this->b131 = (gcnew System::Windows::Forms::Button());
			this->b112 = (gcnew System::Windows::Forms::Button());
			this->b113 = (gcnew System::Windows::Forms::Button());
			this->b111 = (gcnew System::Windows::Forms::Button());
			this->b222 = (gcnew System::Windows::Forms::Button());
			this->b223 = (gcnew System::Windows::Forms::Button());
			this->b221 = (gcnew System::Windows::Forms::Button());
			this->b232 = (gcnew System::Windows::Forms::Button());
			this->b233 = (gcnew System::Windows::Forms::Button());
			this->b231 = (gcnew System::Windows::Forms::Button());
			this->b212 = (gcnew System::Windows::Forms::Button());
			this->b213 = (gcnew System::Windows::Forms::Button());
			this->b211 = (gcnew System::Windows::Forms::Button());
			this->p1wins = (gcnew System::Windows::Forms::Label());
			this->p2wins = (gcnew System::Windows::Forms::Label());
			this->restart = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// playerInd
			// 
			this->playerInd->AutoSize = true;
			this->playerInd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->playerInd->Location = System::Drawing::Point(331, 86);
			this->playerInd->Name = L"playerInd";
			this->playerInd->Size = System::Drawing::Size(91, 25);
			this->playerInd->TabIndex = 0;
			this->playerInd->Text = L"Player 1";
			this->playerInd->Click += gcnew System::EventHandler(this, &ttt::label1_Click);
			// 
			// b011
			// 
			this->b011->Location = System::Drawing::Point(102, 114);
			this->b011->Name = L"b011";
			this->b011->Size = System::Drawing::Size(43, 44);
			this->b011->TabIndex = 2;
			this->b011->UseVisualStyleBackColor = true;
			this->b011->Click += gcnew System::EventHandler(this, &ttt::b011_Click);
			// 
			// b013
			// 
			this->b013->Location = System::Drawing::Point(200, 114);
			this->b013->Name = L"b013";
			this->b013->Size = System::Drawing::Size(43, 44);
			this->b013->TabIndex = 3;
			this->b013->UseVisualStyleBackColor = true;
			this->b013->Click += gcnew System::EventHandler(this, &ttt::b013_Click);
			// 
			// b012
			// 
			this->b012->Location = System::Drawing::Point(151, 114);
			this->b012->Name = L"b012";
			this->b012->Size = System::Drawing::Size(43, 44);
			this->b012->TabIndex = 4;
			this->b012->UseVisualStyleBackColor = true;
			this->b012->Click += gcnew System::EventHandler(this, &ttt::b012_Click);
			// 
			// b032
			// 
			this->b032->Location = System::Drawing::Point(151, 214);
			this->b032->Name = L"b032";
			this->b032->Size = System::Drawing::Size(43, 44);
			this->b032->TabIndex = 7;
			this->b032->UseVisualStyleBackColor = true;
			this->b032->Click += gcnew System::EventHandler(this, &ttt::b032_Click);
			// 
			// b033
			// 
			this->b033->Location = System::Drawing::Point(200, 214);
			this->b033->Name = L"b033";
			this->b033->Size = System::Drawing::Size(43, 44);
			this->b033->TabIndex = 6;
			this->b033->UseVisualStyleBackColor = true;
			this->b033->Click += gcnew System::EventHandler(this, &ttt::b033_Click);
			// 
			// b031
			// 
			this->b031->Location = System::Drawing::Point(102, 214);
			this->b031->Name = L"b031";
			this->b031->Size = System::Drawing::Size(43, 44);
			this->b031->TabIndex = 5;
			this->b031->UseVisualStyleBackColor = true;
			this->b031->Click += gcnew System::EventHandler(this, &ttt::b031_Click);
			// 
			// b022
			// 
			this->b022->Location = System::Drawing::Point(151, 164);
			this->b022->Name = L"b022";
			this->b022->Size = System::Drawing::Size(43, 44);
			this->b022->TabIndex = 10;
			this->b022->UseVisualStyleBackColor = true;
			this->b022->Click += gcnew System::EventHandler(this, &ttt::b022_Click);
			// 
			// b023
			// 
			this->b023->Location = System::Drawing::Point(200, 164);
			this->b023->Name = L"b023";
			this->b023->Size = System::Drawing::Size(43, 44);
			this->b023->TabIndex = 9;
			this->b023->UseVisualStyleBackColor = true;
			this->b023->Click += gcnew System::EventHandler(this, &ttt::b023_Click);
			// 
			// b021
			// 
			this->b021->Location = System::Drawing::Point(102, 164);
			this->b021->Name = L"b021";
			this->b021->Size = System::Drawing::Size(43, 44);
			this->b021->TabIndex = 8;
			this->b021->UseVisualStyleBackColor = true;
			this->b021->Click += gcnew System::EventHandler(this, &ttt::b021_Click);
			// 
			// b122
			// 
			this->b122->Location = System::Drawing::Point(357, 164);
			this->b122->Name = L"b122";
			this->b122->Size = System::Drawing::Size(43, 44);
			this->b122->TabIndex = 19;
			this->b122->UseVisualStyleBackColor = true;
			this->b122->Click += gcnew System::EventHandler(this, &ttt::b122_Click);
			// 
			// b123
			// 
			this->b123->Location = System::Drawing::Point(406, 164);
			this->b123->Name = L"b123";
			this->b123->Size = System::Drawing::Size(43, 44);
			this->b123->TabIndex = 18;
			this->b123->UseVisualStyleBackColor = true;
			this->b123->Click += gcnew System::EventHandler(this, &ttt::b123_Click);
			// 
			// b121
			// 
			this->b121->Location = System::Drawing::Point(308, 164);
			this->b121->Name = L"b121";
			this->b121->Size = System::Drawing::Size(43, 44);
			this->b121->TabIndex = 17;
			this->b121->UseVisualStyleBackColor = true;
			this->b121->Click += gcnew System::EventHandler(this, &ttt::b121_Click);
			// 
			// b132
			// 
			this->b132->Location = System::Drawing::Point(357, 214);
			this->b132->Name = L"b132";
			this->b132->Size = System::Drawing::Size(43, 44);
			this->b132->TabIndex = 16;
			this->b132->UseVisualStyleBackColor = true;
			this->b132->Click += gcnew System::EventHandler(this, &ttt::b132_Click);
			// 
			// b133
			// 
			this->b133->Location = System::Drawing::Point(406, 214);
			this->b133->Name = L"b133";
			this->b133->Size = System::Drawing::Size(43, 44);
			this->b133->TabIndex = 15;
			this->b133->UseVisualStyleBackColor = true;
			this->b133->Click += gcnew System::EventHandler(this, &ttt::b133_Click);
			// 
			// b131
			// 
			this->b131->Location = System::Drawing::Point(308, 214);
			this->b131->Name = L"b131";
			this->b131->Size = System::Drawing::Size(43, 44);
			this->b131->TabIndex = 14;
			this->b131->UseVisualStyleBackColor = true;
			this->b131->Click += gcnew System::EventHandler(this, &ttt::b131_Click);
			// 
			// b112
			// 
			this->b112->Location = System::Drawing::Point(357, 114);
			this->b112->Name = L"b112";
			this->b112->Size = System::Drawing::Size(43, 44);
			this->b112->TabIndex = 13;
			this->b112->UseVisualStyleBackColor = true;
			this->b112->Click += gcnew System::EventHandler(this, &ttt::b112_Click);
			// 
			// b113
			// 
			this->b113->Location = System::Drawing::Point(406, 114);
			this->b113->Name = L"b113";
			this->b113->Size = System::Drawing::Size(43, 44);
			this->b113->TabIndex = 12;
			this->b113->UseVisualStyleBackColor = true;
			this->b113->Click += gcnew System::EventHandler(this, &ttt::b113_Click);
			// 
			// b111
			// 
			this->b111->Location = System::Drawing::Point(308, 114);
			this->b111->Name = L"b111";
			this->b111->Size = System::Drawing::Size(43, 44);
			this->b111->TabIndex = 11;
			this->b111->UseVisualStyleBackColor = true;
			this->b111->Click += gcnew System::EventHandler(this, &ttt::b111_Click);
			// 
			// b222
			// 
			this->b222->Location = System::Drawing::Point(564, 164);
			this->b222->Name = L"b222";
			this->b222->Size = System::Drawing::Size(43, 44);
			this->b222->TabIndex = 28;
			this->b222->UseVisualStyleBackColor = true;
			this->b222->Click += gcnew System::EventHandler(this, &ttt::b222_Click);
			// 
			// b223
			// 
			this->b223->Location = System::Drawing::Point(613, 164);
			this->b223->Name = L"b223";
			this->b223->Size = System::Drawing::Size(43, 44);
			this->b223->TabIndex = 27;
			this->b223->UseVisualStyleBackColor = true;
			this->b223->Click += gcnew System::EventHandler(this, &ttt::b223_Click);
			// 
			// b221
			// 
			this->b221->Location = System::Drawing::Point(515, 164);
			this->b221->Name = L"b221";
			this->b221->Size = System::Drawing::Size(43, 44);
			this->b221->TabIndex = 26;
			this->b221->UseVisualStyleBackColor = true;
			this->b221->Click += gcnew System::EventHandler(this, &ttt::b221_Click);
			// 
			// b232
			// 
			this->b232->Location = System::Drawing::Point(564, 214);
			this->b232->Name = L"b232";
			this->b232->Size = System::Drawing::Size(43, 44);
			this->b232->TabIndex = 25;
			this->b232->UseVisualStyleBackColor = true;
			this->b232->Click += gcnew System::EventHandler(this, &ttt::b232_Click);
			// 
			// b233
			// 
			this->b233->Location = System::Drawing::Point(613, 214);
			this->b233->Name = L"b233";
			this->b233->Size = System::Drawing::Size(43, 44);
			this->b233->TabIndex = 24;
			this->b233->UseVisualStyleBackColor = true;
			this->b233->Click += gcnew System::EventHandler(this, &ttt::b233_Click);
			// 
			// b231
			// 
			this->b231->Location = System::Drawing::Point(515, 214);
			this->b231->Name = L"b231";
			this->b231->Size = System::Drawing::Size(43, 44);
			this->b231->TabIndex = 23;
			this->b231->UseVisualStyleBackColor = true;
			this->b231->Click += gcnew System::EventHandler(this, &ttt::b231_Click);
			// 
			// b212
			// 
			this->b212->Location = System::Drawing::Point(564, 114);
			this->b212->Name = L"b212";
			this->b212->Size = System::Drawing::Size(43, 44);
			this->b212->TabIndex = 22;
			this->b212->UseVisualStyleBackColor = true;
			this->b212->Click += gcnew System::EventHandler(this, &ttt::b212_Click);
			// 
			// b213
			// 
			this->b213->Location = System::Drawing::Point(613, 114);
			this->b213->Name = L"b213";
			this->b213->Size = System::Drawing::Size(43, 44);
			this->b213->TabIndex = 21;
			this->b213->UseVisualStyleBackColor = true;
			this->b213->Click += gcnew System::EventHandler(this, &ttt::b213_Click);
			// 
			// b211
			// 
			this->b211->Location = System::Drawing::Point(515, 114);
			this->b211->Name = L"b211";
			this->b211->Size = System::Drawing::Size(43, 44);
			this->b211->TabIndex = 20;
			this->b211->UseVisualStyleBackColor = true;
			this->b211->Click += gcnew System::EventHandler(this, &ttt::b211_Click);
			// 
			// p1wins
			// 
			this->p1wins->AutoSize = true;
			this->p1wins->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->p1wins->Location = System::Drawing::Point(276, 293);
			this->p1wins->Name = L"p1wins";
			this->p1wins->Size = System::Drawing::Size(207, 31);
			this->p1wins->TabIndex = 29;
			this->p1wins->Text = L"Player 1 WINS!!";
			this->p1wins->Visible = false;
			// 
			// p2wins
			// 
			this->p2wins->AutoSize = true;
			this->p2wins->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->p2wins->Location = System::Drawing::Point(276, 293);
			this->p2wins->Name = L"p2wins";
			this->p2wins->Size = System::Drawing::Size(207, 31);
			this->p2wins->TabIndex = 30;
			this->p2wins->Text = L"Player 2 WINS!!";
			this->p2wins->Visible = false;
			// 
			// restart
			// 
			this->restart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->restart->Location = System::Drawing::Point(652, 362);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(107, 34);
			this->restart->TabIndex = 31;
			this->restart->Text = L"RESTART";
			this->restart->UseVisualStyleBackColor = true;
			this->restart->Visible = false;
			this->restart->Click += gcnew System::EventHandler(this, &ttt::restart_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.25F));
			this->title->Location = System::Drawing::Point(247, 24);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(257, 36);
			this->title->TabIndex = 32;
			this->title->Text = L"Better Tic Tac Toe";
			this->title->Click += gcnew System::EventHandler(this, &ttt::label1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label1->Location = System::Drawing::Point(297, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 16);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Made By: Eric Verheyden";
			// 
			// ttt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 408);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->title);
			this->Controls->Add(this->restart);
			this->Controls->Add(this->p2wins);
			this->Controls->Add(this->p1wins);
			this->Controls->Add(this->b222);
			this->Controls->Add(this->b223);
			this->Controls->Add(this->b221);
			this->Controls->Add(this->b232);
			this->Controls->Add(this->b233);
			this->Controls->Add(this->b231);
			this->Controls->Add(this->b212);
			this->Controls->Add(this->b213);
			this->Controls->Add(this->b211);
			this->Controls->Add(this->b122);
			this->Controls->Add(this->b123);
			this->Controls->Add(this->b121);
			this->Controls->Add(this->b132);
			this->Controls->Add(this->b133);
			this->Controls->Add(this->b131);
			this->Controls->Add(this->b112);
			this->Controls->Add(this->b113);
			this->Controls->Add(this->b111);
			this->Controls->Add(this->b022);
			this->Controls->Add(this->b023);
			this->Controls->Add(this->b021);
			this->Controls->Add(this->b032);
			this->Controls->Add(this->b033);
			this->Controls->Add(this->b031);
			this->Controls->Add(this->b012);
			this->Controls->Add(this->b013);
			this->Controls->Add(this->b011);
			this->Controls->Add(this->playerInd);
			this->Name = L"ttt";
			this->Text = L"ttt";
			this->Load += gcnew System::EventHandler(this, &ttt::ttt_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//gameStuff* game = new gameStuff();
		bool isPlayer1Turn = true;

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ttt_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b011_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 0;
		int l3 = 0;
		if (!isTaken(l1,l2,l3) && !isBoardDead(l1)) {
			setBoard(l1,l2,l3, true);
			b011->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if(!isGameLost()){
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b012_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 0;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b012->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b013_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 0;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b013->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b021_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 1;
		int l3 = 0;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b021->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b022_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 1;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b022->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b023_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 1;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b023->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b031_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 2;
		int l3 = 0;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b031->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b032_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 2;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b032->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b033_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 0;
		int l2 = 2;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b033->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}




	private: System::Void b111_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 0;
		int l3 = 0;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b111->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b112_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 0;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b112->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b113_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 0;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b113->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b121_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 1;
		int l3 = 0;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b121->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b122_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 1;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b122->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b123_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 1;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b123->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b131_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 2;
		int l3 = 0;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b131->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b132_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 2;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b132->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b133_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 1;
		int l2 = 2;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b133->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}




	private: System::Void b211_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 0;
		int l3 = 0;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b211->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b212_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 0;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b212->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b213_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 0;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b213->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b221_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 1;
		int l3 = 0;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b221->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b222_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 1;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b222->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b223_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 1;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b223->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b231_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 2;
		int l3 = 0;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b231->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b232_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 2;
		int l3 = 1;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b232->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}

	private: System::Void b233_Click(System::Object^ sender, System::EventArgs^ e) {
		int l1 = 2;
		int l2 = 2;
		int l3 = 2;
		if (!isTaken(l1, l2, l3) && !isBoardDead(l1)) {
			setBoard(l1, l2, l3, true);
			b233->Text = "X";
			checkBoardDead();
			if (isGameLost() && isPlayer1Turn) {
				p2wins->Visible = true;
			}
			else if (isGameLost() && !isPlayer1Turn) {
				p1wins->Visible = true;
			}
			if (isPlayer1Turn && !isGameLost()) {
				isPlayer1Turn = false;
				playerInd->Text = "Player 2";
				restart->Visible = true;
			}
			else if (!isGameLost()) {
				isPlayer1Turn = true;
				playerInd->Text = "Player 1";
				restart->Visible = true;
			}
		}
	}
	private: System::Void restart_Click(System::Object^ sender, System::EventArgs^ e) {
		gameReset();
		isPlayer1Turn = true;
		playerInd->Text = "Player 1";
		p1wins->Visible = false;
		p2wins->Visible = false;
		
		b011->Text = "";
		b012->Text = "";
		b013->Text = "";
		b021->Text = "";
		b022->Text = "";
		b023->Text = "";
		b031->Text = "";
		b032->Text = "";
		b033->Text = "";

		b111->Text = "";
		b112->Text = "";
		b113->Text = "";
		b121->Text = "";
		b122->Text = "";
		b123->Text = "";
		b131->Text = "";
		b132->Text = "";
		b133->Text = "";

		b211->Text = "";
		b212->Text = "";
		b213->Text = "";
		b221->Text = "";
		b222->Text = "";
		b223->Text = "";
		b231->Text = "";
		b232->Text = "";
		b233->Text = "";

		restart->Visible = false;
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
};

}
