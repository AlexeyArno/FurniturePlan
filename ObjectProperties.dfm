object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Object Change'
  ClientHeight = 310
  ClientWidth = 554
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 305
    Height = 294
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 22
      Height = 13
      Caption = 'View'
    end
    object Image1: TImage
      Left = 8
      Top = 27
      Width = 280
      Height = 230
    end
  end
  object Panel2: TPanel
    Left = 319
    Top = 8
    Width = 227
    Height = 294
    BorderWidth = 5
    TabOrder = 1
    object Label2: TLabel
      Left = 16
      Top = 8
      Width = 35
      Height = 13
      Caption = 'Control'
    end
    object Label3: TLabel
      Left = 16
      Top = 36
      Width = 31
      Height = 13
      Caption = 'Name:'
    end
    object Label4: TLabel
      Left = 16
      Top = 72
      Width = 29
      Height = 13
      Caption = 'Color:'
    end
    object Label5: TLabel
      Left = 16
      Top = 144
      Width = 55
      Height = 13
      Caption = 'Proportions'
    end
    object Label6: TLabel
      Left = 16
      Top = 172
      Width = 32
      Height = 13
      Caption = 'Width:'
    end
    object Label7: TLabel
      Left = 16
      Top = 212
      Width = 35
      Height = 13
      Caption = 'Height:'
    end
    object Edit1: TEdit
      Left = 88
      Top = 33
      Width = 121
      Height = 21
      TabOrder = 0
      OnChange = Edit1Change
    end
    object Edit2: TEdit
      Left = 88
      Top = 169
      Width = 121
      Height = 21
      TabOrder = 1
      OnChange = Edit2Change
    end
    object Edit3: TEdit
      Left = 88
      Top = 209
      Width = 121
      Height = 21
      TabOrder = 2
      OnChange = Edit3Change
    end
    object Panel3: TPanel
      Left = 16
      Top = 104
      Width = 25
      Height = 28
      BorderWidth = 5
      BorderStyle = bsSingle
      Color = clNavy
      Enabled = False
      ParentBackground = False
      TabOrder = 3
    end
    object Button1: TButton
      Left = 16
      Top = 256
      Width = 75
      Height = 25
      Caption = 'Save'
      TabOrder = 4
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 136
      Top = 256
      Width = 75
      Height = 25
      Caption = 'Cancel'
      TabOrder = 5
      OnClick = Button2Click
    end
  end
end
