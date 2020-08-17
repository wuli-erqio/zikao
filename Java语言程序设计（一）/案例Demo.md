# 案例Demo

```java
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;
public class Demo extends JFrame {
	
	// 按钮，文本框
	JButton btn;
	JTextField txtN;
	Demo () {
		// 创建组件
		btn = new JButton("按下我");
		btn.addActionListener(new MyListener());// 指明由谁处理
		txtN = new JTextField(20);
		// 1。流式布局管理器来布局
		FlowLayout f1 = new FlowLayout();
		// 2.获取当前内容窗格
		Container c = getContentPane();
		// 3.把内容窗格设为流式布局
		c.setLayout(f1);
		// 4.把组件加载进来
		c.add(btn);
		c.add(txtN);
	}
	class MyListener implements ActionListener {

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			// 处理方式
			String s1 = txtN.getText();
			System.out.println(s1);
		}
		
	}
	public static void main(String[] args) {
		Demo f=new Demo();
		f.setSize(400, 200);
		f.setVisible(true);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
	}

}

```

