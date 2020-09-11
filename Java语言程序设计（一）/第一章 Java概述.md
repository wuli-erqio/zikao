# 第一章 Java概述

1. ava语言的特点
2. Java的运行机制
3. Java环境变量的配置
4. 面向对象的基本概念

## 第一节 Java语言简介

### 一 、Java语言的起源

Java语言的前身是Oak语言,是美国Sun Microsystems 公司于1991年推出的,仅限于公司内部使用的语言。

1995年,Sun公司将Oak语言更名为ava语言,并正式向公众推出。

这之后,ava语言不断更新,其类库越来越丰富,性能逐渐提升,应用领域也显著拓展,已成为当今最通用,最流行的软件开发语言之一,是许多专业开发人员的首选开发语言。2009年美国Oracle 公司收购sun公司,从此,Java语言的更新版本改由Oracle 公司发布。

###  二、java语言的特点

1. 语法简单,功能强大,安全可靠
2. 与平台无关
3. 解释编译两种运行方式
4. 多线程
5. 动态执行兼有丰富的API文档及类库

## 二、Java开发环境的安装与设置

### 一、文件下载

登录到下列网址，下载JDK: http://www.oracle.com/technetwork/java/javase/downloads/index.html

以window10环境为例，下载文件是 jdk-8ul3l-windows-x64.exe

### 二、安装软件

### 三、配置环境变量

JAVA_HOME、CLASSPATH、Path

## 第三节 Java程序示例

### 一 、Java程序的两种形式

- 一种是ava程序(Java Application 

- 另一种是Java小应用程序(Java Applet ),或叫java小程序。

### 二、Java程序

程序1.1  一个基本的ava应用程序。

简单的应用程序HelloWorld 

```
public class HelloWorldApp {

	public static void main (String args[]) {

		System.out.println("HelloWorld!");
	}
}
```

###  三、编译

创建HelloWorldApp.java 源文件后,可以用下面的命令

编译:

$javacHelloWorldAppjava 或者

javac [选项] 源文件名

javac d :\ java\HelloWorldApp.java 

### 四、运行

$java HolloWorldApp

###  五、IDE

目前已有多个开发java程序的IDE,其中使用较多的有Eclipse 和NetBeans 

Eclipse 是一款开源免费的,基于ava的可扩展开发平台, 具体来说是一个框架和一组服务,通过插件可以构建开发环境。Eclipse 附带了一个标准的插件集,包括Java开发工具DK,所以可用来开发ava程序。当然,如果更换其他的插件,也可以用来开发其他编程语言的程序,包括C/C++，JavaScript ，perl，PHP和Python 等

## 第四节 使用Java核心API文档

类库

## 第五节 Java中的面向对象技术

### 一、 面向对象技术

所谓面向对象的方法学,就是使分析、设计和实现一个系统的方法尽可能地接近人们认识一个系统的方法。

通常包括3个方面:

面向对象的分析(Object -Oriented Analysis ,OOA)

面向对象的设计(Object -Oriented Design ,OOD)

面向对象的程序设计(Object -Oriented Programming OOP )

面向对象技术包含的概念主要有抽象、对象、类、类型层次(子类)、封装、继承性、多态性等。

### 二、 、OOP

OOP中采用了三大技术:封装、继承和多态。封装体现的特点是将对象的属性及实现细节隐藏起来,只给出如何使用的信息。将数据及对数据的操作捆绑在一起成为类,这就是封装技术。对象是类的实例,外界使用对象中的数据及可用的操作受到类定义的限制。

程序员只有一种基本的结构,即类。将一个已有类中的数据和方法保留,并加上自己特殊的数据和方法,从而构成一个新类,这是OOP中的继承。原来的类是父类,也称为基类或超类。新类是子类,子类派生于父类或说子类继承于父类。继承体现的是一种层次关系,下一层的类可从上一层的类继承定义同时还可以改变和扩充一些特性。

在个类或多个类中,可以让多个方法使用同一个名字,从而具有多态性。多态可以保证对不同类型的数据进行等同的操作,名字空间也更加宽松。多态还有一个重要的特点,即使用相同的操作名,能根据具体的对象自动选择对应的操作。