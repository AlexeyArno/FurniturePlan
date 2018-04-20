object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1052#1077#1073#1077#1083#1100
  ClientHeight = 491
  ClientWidth = 924
  Color = clBtnFace
  Constraints.MaxHeight = 550
  Constraints.MaxWidth = 940
  Constraints.MinHeight = 550
  Constraints.MinWidth = 940
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel2: TPanel
    Left = 679
    Top = 8
    Width = 236
    Height = 145
    TabOrder = 0
    object Label1: TLabel
      Left = 12
      Top = 40
      Width = 19
      Height = 13
      Caption = #1048#1084#1103
    end
    object Label2: TLabel
      Left = 16
      Top = 8
      Width = 87
      Height = 13
      Caption = #1058#1077#1082#1091#1097#1080#1081' '#1054#1073#1098#1077#1082#1090
    end
    object Edit1: TEdit
      Left = 93
      Top = 37
      Width = 121
      Height = 21
      Enabled = False
      TabOrder = 0
    end
    object Button1: TButton
      Left = 9
      Top = 109
      Width = 75
      Height = 25
      Caption = #9204
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 82
      Top = 109
      Width = 75
      Height = 25
      Caption = #9207
      TabOrder = 2
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 155
      Top = 109
      Width = 75
      Height = 25
      Caption = #9205
      TabOrder = 3
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 82
      Top = 85
      Width = 75
      Height = 25
      Caption = #9206
      TabOrder = 4
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 155
      Top = 85
      Width = 74
      Height = 25
      Caption = #1055#1086#1074#1077#1088#1085#1091#1090#1100
      TabOrder = 5
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 9
      Top = 85
      Width = 75
      Height = 25
      Caption = #1055#1086#1074#1077#1088#1085#1091#1090#1100
      TabOrder = 6
      OnClick = Button6Click
    end
  end
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 665
    Height = 481
    TabOrder = 1
    object Image1: TImage
      Left = 0
      Top = 8
      Width = 650
      Height = 465
    end
    object Label3: TLabel
      Left = 8
      Top = 8
      Width = 3
      Height = 13
    end
  end
  object Panel4: TPanel
    Left = 679
    Top = 159
    Width = 236
    Height = 324
    TabOrder = 2
    object Label5: TLabel
      Left = 16
      Top = 16
      Width = 47
      Height = 13
      Caption = #1054#1073#1098#1077#1082#1090#1099
    end
    object ListBox1: TListBox
      Left = 9
      Top = 39
      Width = 217
      Height = 274
      ItemHeight = 13
      TabOrder = 0
      OnClick = ListBox1Click
      OnDblClick = ListBox1DblClick
    end
    object Button7: TButton
      Left = 152
      Top = 8
      Width = 75
      Height = 25
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 1
      OnClick = Button7Click
    end
  end
  object MainMenu1: TMainMenu
    Left = 880
    Top = 472
    object N1: TMenuItem
      Caption = #1052#1077#1073#1077#1083#1100
      object N2: TMenuItem
        Caption = '-'
      end
      object New1: TMenuItem
        Caption = '+ New'
      end
    end
  end
end
