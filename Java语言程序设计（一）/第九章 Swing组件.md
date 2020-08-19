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