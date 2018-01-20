object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Furniture Plan'
  ClientHeight = 518
  ClientWidth = 923
  Color = clBtnFace
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
    Height = 153
    TabOrder = 0
    object Label1: TLabel
      Left = 12
      Top = 40
      Width = 27
      Height = 13
      Caption = 'Name'
    end
    object Label2: TLabel
      Left = 16
      Top = 8
      Width = 76
      Height = 13
      Caption = 'Current Subject'
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
    end
    object Button2: TButton
      Left = 82
      Top = 109
      Width = 75
      Height = 25
      Caption = #9207
      TabOrder = 2
    end
    object Button3: TButton
      Left = 155
      Top = 109
      Width = 75
      Height = 25
      Caption = #9205
      TabOrder = 3
    end
    object Button4: TButton
      Left = 82
      Top = 85
      Width = 75
      Height = 25
      Caption = #9206
      TabOrder = 4
    end
    object Button5: TButton
      Left = 9
      Top = 85
      Width = 74
      Height = 25
      Caption = 'Rotate Left'
      TabOrder = 5
    end
    object Button6: TButton
      Left = 155
      Top = 85
      Width = 75
      Height = 25
      Caption = 'Rotate Right'
      TabOrder = 6
    end
  end
  object Panel3: TPanel
    Left = 679
    Top = 167
    Width = 236
    Height = 134
    TabOrder = 1
    object Label4: TLabel
      Left = 16
      Top = 16
      Width = 64
      Height = 13
      Caption = 'Control Panel'
    end
  end
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 665
    Height = 502
    TabOrder = 2
    object Label3: TLabel
      Left = 8
      Top = 8
      Width = 22
      Height = 13
      Caption = 'View'
    end
    object Image1: TImage
      Left = 15
      Top = 40
      Width = 650
      Height = 450
    end
  end
  object Panel4: TPanel
    Left = 679
    Top = 307
    Width = 236
    Height = 203
    TabOrder = 3
    object Label5: TLabel
      Left = 16
      Top = 16
      Width = 81
      Height = 13
      Caption = 'Drawed Subjects'
    end
    object ListBox1: TListBox
      Left = 9
      Top = 56
      Width = 217
      Height = 137
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
      Caption = 'Delete'
      TabOrder = 1
      OnClick = Button7Click
    end
  end
  object MainMenu1: TMainMenu
    Left = 880
    Top = 472
    object N1: TMenuItem
      Caption = 'Furniture'
      object N2: TMenuItem
        Caption = '-'
      end
      object New1: TMenuItem
        Caption = '+ New'
      end
    end
  end
end
