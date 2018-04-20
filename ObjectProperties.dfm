object Form2: TForm2
  Left = 0
  Top = 0
  Caption = #1048#1079#1084#1077#1085#1077#1085#1080#1077' '#1086#1073#1098#1077#1082#1090#1072
  ClientHeight = 301
  ClientWidth = 554
  Color = clBtnFace
  Constraints.MaxHeight = 340
  Constraints.MaxWidth = 570
  Constraints.MinHeight = 340
  Constraints.MinWidth = 570
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
    object Label3: TLabel
      Left = 16
      Top = 36
      Width = 23
      Height = 13
      Caption = #1048#1084#1103':'
    end
    object Label4: TLabel
      Left = 16
      Top = 72
      Width = 30
      Height = 13
      Caption = #1062#1074#1077#1090':'
    end
    object Label5: TLabel
      Left = 16
      Top = 144
      Width = 55
      Height = 13
      Caption = #1055#1088#1086#1087#1086#1088#1094#1080#1080
    end
    object Label6: TLabel
      Left = 16
      Top = 172
      Width = 44
      Height = 13
      Caption = #1064#1080#1088#1080#1085#1072':'
    end
    object Label7: TLabel
      Left = 16
      Top = 212
      Width = 36
      Height = 13
      Caption = #1044#1083#1080#1085#1072':'
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
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      TabOrder = 4
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 136
      Top = 256
      Width = 75
      Height = 25
      Caption = #1054#1090#1084#1077#1085#1072
      TabOrder = 5
      OnClick = Button2Click
    end
  end
end
