#pragma once
//#include "questionGenerator.cpp"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cricket
	/// </summary>
	public ref class Cricket : public System::Windows::Forms::Form
	{
	public:
		Cricket(void)
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
		~Cricket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  QuestionLabel;
	protected:

	private: System::Windows::Forms::Label^  LevelLabel;
	private: System::Windows::Forms::Label^  TargetLabel;
	private: System::Windows::Forms::Label^  ScoreLabel;
	private: System::Windows::Forms::Label^  OversLeftLabel;
	private: System::Windows::Forms::Label^  RunsNeededLabel;
	private: System::Windows::Forms::Label^  Batsman1ScoreLabel;
	private: System::Windows::Forms::Label^  Batsman2Label;
	private: System::Windows::Forms::Panel^  SliderPanel;
	private: System::Windows::Forms::Timer^  SliderTimer;
	private: System::ComponentModel::IContainer^  components;






	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Cricket::typeid));
			this->QuestionLabel = (gcnew System::Windows::Forms::Label());
			this->LevelLabel = (gcnew System::Windows::Forms::Label());
			this->TargetLabel = (gcnew System::Windows::Forms::Label());
			this->ScoreLabel = (gcnew System::Windows::Forms::Label());
			this->OversLeftLabel = (gcnew System::Windows::Forms::Label());
			this->RunsNeededLabel = (gcnew System::Windows::Forms::Label());
			this->Batsman1ScoreLabel = (gcnew System::Windows::Forms::Label());
			this->Batsman2Label = (gcnew System::Windows::Forms::Label());
			this->SliderPanel = (gcnew System::Windows::Forms::Panel());
			this->SliderTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// QuestionLabel
			// 
			this->QuestionLabel->AutoSize = true;
			this->QuestionLabel->Location = System::Drawing::Point(288, 107);
			this->QuestionLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->QuestionLabel->Name = L"QuestionLabel";
			this->QuestionLabel->Size = System::Drawing::Size(47, 13);
			this->QuestionLabel->TabIndex = 0;
			this->QuestionLabel->Text = L"question";
			// 
			// LevelLabel
			// 
			this->LevelLabel->AutoSize = true;
			this->LevelLabel->Location = System::Drawing::Point(552, 29);
			this->LevelLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LevelLabel->Name = L"LevelLabel";
			this->LevelLabel->Size = System::Drawing::Size(45, 13);
			this->LevelLabel->TabIndex = 1;
			this->LevelLabel->Text = L"Level -1";
			// 
			// TargetLabel
			// 
			this->TargetLabel->AutoSize = true;
			this->TargetLabel->Location = System::Drawing::Point(25, 29);
			this->TargetLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TargetLabel->Name = L"TargetLabel";
			this->TargetLabel->Size = System::Drawing::Size(38, 13);
			this->TargetLabel->TabIndex = 2;
			this->TargetLabel->Text = L"Target";
			// 
			// ScoreLabel
			// 
			this->ScoreLabel->AutoSize = true;
			this->ScoreLabel->Location = System::Drawing::Point(90, 29);
			this->ScoreLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ScoreLabel->Name = L"ScoreLabel";
			this->ScoreLabel->Size = System::Drawing::Size(35, 13);
			this->ScoreLabel->TabIndex = 3;
			this->ScoreLabel->Text = L"Score";
			// 
			// OversLeftLabel
			// 
			this->OversLeftLabel->AutoSize = true;
			this->OversLeftLabel->Location = System::Drawing::Point(239, 29);
			this->OversLeftLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->OversLeftLabel->Name = L"OversLeftLabel";
			this->OversLeftLabel->Size = System::Drawing::Size(56, 13);
			this->OversLeftLabel->TabIndex = 4;
			this->OversLeftLabel->Text = L"Overs Left";
			// 
			// RunsNeededLabel
			// 
			this->RunsNeededLabel->AutoSize = true;
			this->RunsNeededLabel->Location = System::Drawing::Point(150, 29);
			this->RunsNeededLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->RunsNeededLabel->Name = L"RunsNeededLabel";
			this->RunsNeededLabel->Size = System::Drawing::Size(73, 13);
			this->RunsNeededLabel->TabIndex = 5;
			this->RunsNeededLabel->Text = L"Runs Needed";
			// 
			// Batsman1ScoreLabel
			// 
			this->Batsman1ScoreLabel->AutoSize = true;
			this->Batsman1ScoreLabel->Location = System::Drawing::Point(318, 29);
			this->Batsman1ScoreLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Batsman1ScoreLabel->Name = L"Batsman1ScoreLabel";
			this->Batsman1ScoreLabel->Size = System::Drawing::Size(54, 13);
			this->Batsman1ScoreLabel->TabIndex = 6;
			this->Batsman1ScoreLabel->Text = L"Batsman1";
			// 
			// Batsman2Label
			// 
			this->Batsman2Label->AutoSize = true;
			this->Batsman2Label->Location = System::Drawing::Point(409, 29);
			this->Batsman2Label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Batsman2Label->Name = L"Batsman2Label";
			this->Batsman2Label->Size = System::Drawing::Size(54, 13);
			this->Batsman2Label->TabIndex = 7;
			this->Batsman2Label->Text = L"Batsman2";
			// 
			// SliderPanel
			// 
			this->SliderPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SliderPanel.BackgroundImage")));
			this->SliderPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->SliderPanel->Location = System::Drawing::Point(74, 302);
			this->SliderPanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SliderPanel->Name = L"SliderPanel";
			this->SliderPanel->Size = System::Drawing::Size(28, 30);
			this->SliderPanel->TabIndex = 8;
			// 
			// SliderTimer
			// 
			this->SliderTimer->Interval = 1;
			this->SliderTimer->Tick += gcnew System::EventHandler(this, &Cricket::SliderTimer_Tick);
			// 
			// Cricket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 443);
			this->Controls->Add(this->SliderPanel);
			this->Controls->Add(this->Batsman2Label);
			this->Controls->Add(this->Batsman1ScoreLabel);
			this->Controls->Add(this->RunsNeededLabel);
			this->Controls->Add(this->OversLeftLabel);
			this->Controls->Add(this->ScoreLabel);
			this->Controls->Add(this->TargetLabel);
			this->Controls->Add(this->LevelLabel);
			this->Controls->Add(this->QuestionLabel);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Cricket";
			this->Text = L"Cricket";
			this->Load += gcnew System::EventHandler(this, &Cricket::Cricket_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int level=1;
		int stuID = 1;
		int xloc = 0;
		int sliderFlag = 0;

	private: System::Void Cricket_Load(System::Object^  sender, System::EventArgs^  e) {
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String ^ Sql = "Select [Level] from Cricket where [StudentId] = " + stuID + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 level =  (int) command->ExecuteScalar();
					 LevelLabel->Text = "Level: "+level;
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 SliderTimer->Start();
	}
private: System::Void SliderTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (sliderFlag ==0)
			 {
				 xloc++;
				 SliderPanel->Left++;
			 }
			 else
			 {
				 xloc--;
				 SliderPanel->Left--;
			 }

			 if (xloc == 0 || xloc == 100)
			 {
				 sliderFlag++;
				 sliderFlag %= 2;
			 }
}
};
}
