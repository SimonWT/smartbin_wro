object Form7: TForm7
  Left = 0
  Top = 0
  Caption = 'Form7'
  ClientHeight = 445
  ClientWidth = 418
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object StaticText1: TStaticText
    Left = 40
    Top = 280
    Width = 30
    Height = 17
    Caption = 'logen'
    TabOrder = 0
  end
  object Button1: TButton
    Left = 76
    Top = 320
    Width = 105
    Height = 25
    Caption = 'Ne vishlo'
    TabOrder = 1
    OnClick = Button1Click
  end
  object DBEdit1: TDBEdit
    Left = 76
    Top = 276
    Width = 121
    Height = 21
    DataField = 'Login'
    DataSource = DataSource1
    TabOrder = 2
  end
  object DBGrid1: TDBGrid
    Left = 32
    Top = 8
    Width = 320
    Height = 120
    DataSource = DataSource1
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=ODBC ' +
      '5.1 Reload'
    LoginPrompt = False
    Left = 40
    Top = 144
  end
  object tl: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from data ORDER BY Login')
    Left = 120
    Top = 144
  end
  object DataSource1: TDataSource
    DataSet = tl
    Left = 192
    Top = 152
  end
end
