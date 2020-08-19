# 第九章 Swing组件

## 第一节 组合框与列表

### 一、组合框( JComboBox) 

JComboBox是下拉式列表。 

常用方法 

void setSelectedIndex() 

object getselectedItem()

事件处理: 

选择选项时产生 ActionEvent事件 

注册 ActionListener监听器。 

或者触发 ItemListener事件。 

### 二、列表(JList) 

1. ListSelection Event事件

   addListSelectionListener():接口

   valueChanged( ListSelectionEvent e):接口方法 

2. 方法 :

   getselectedValue(): 

   setVisibleRowCount(int visible Row Count): 

3. setSelectionMode():设置选择模式。

   ListSelectionModel. SINGLE_SELECTION:只能进行单项选择。 

   ListSelectionModel SINCLE_INTERVAL_SELECTION ：可多项选择,但多个选项必须是连续的。 

   ListSelectionModel.MULTIPLE_INTERVAL_SELECTION ：可多项选择,多个选项可以是间断的,这是选择模式的默认值。 

## 第二节 文本组件

### 一、文本域( JTextField) 

1. 常用方法: 
   - String getText() 
   - void setText(String text) 
   - void setEditable(boolean b) 

2. 事件处理: 
   - 在 JTextField里按下回车键时,产生 ActionEvent 事件
   - 注册 ActionListener监听器,重写 actionPerformed()

### 二、 文本区( JTextArea) 

1. 构造方法 
   - JTextArea(), 
   - JTextArea(int rows, int cols)
   - JTextArea(String text) 

2. 常用方法: 
   - String getText() 
   - void setText(String text )
   - void copy()
   - void cut ()
   - void paste() 
   - void append(String str):将指定文本str追加到文本区 
   - void insert( String str; int pos):将指定文本st插入到文本区的特定位置pos处。 
   - void replaceRange( String str, int stan, int end)用指定文本st替换文本区中从起始位置stan到结尾位置end的内容。 

