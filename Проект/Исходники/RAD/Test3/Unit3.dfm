object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 303
  ClientWidth = 648
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 232
    Top = 199
    Width = 320
    Height = 96
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 96
    Top = 48
    Width = 417
    Height = 73
    Caption = 'LOGIN'
    TabOrder = 1
    OnClick = Button1Click
  end
  object TLogin: TADOTable
    Active = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=ODBC ' +
      '5.1 Reload'
    CursorType = ctStatic
    TableName = 'data'
    Left = 88
    Top = 256
  end
  object DataSource1: TDataSource
    DataSet = TLogin
    Left = 152
    Top = 256
  end
end
