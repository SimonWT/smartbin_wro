object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'LK'
  ClientHeight = 434
  ClientWidth = 877
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 72
    Top = 105
    Width = 257
    Height = 249
  end
  object Label1: TLabel
    Left = 96
    Top = 360
    Width = 203
    Height = 40
    Caption = 'Your QR Code'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -33
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 402
    Top = 24
    Width = 155
    Height = 42
    Caption = 'Username'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -35
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 506
    Top = 129
    Width = 172
    Height = 33
    Caption = 'Plastic bottles:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 482
    Top = 185
    Width = 196
    Height = 33
    Caption = 'Aluminium cans:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 538
    Top = 248
    Width = 140
    Height = 33
    Caption = 'Paper cups:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 538
    Top = 361
    Width = 112
    Height = 39
    Caption = 'Points:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 754
    Top = 129
    Width = 15
    Height = 33
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 754
    Top = 185
    Width = 15
    Height = 33
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label9: TLabel
    Left = 754
    Top = 248
    Width = 15
    Height = 33
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label10: TLabel
    Left = 754
    Top = 366
    Width = 15
    Height = 33
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 40
    Top = 24
    Width = 185
    Height = 42
    Caption = '<- Back to Main page'
    TabOrder = 0
    OnClick = Button1Click
  end
  object LKTable: TADOTable
    Active = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=ODBC ' +
      '5.1 Reload'
    CursorType = ctStatic
    TableName = 'data'
    Left = 832
    Top = 16
  end
end
