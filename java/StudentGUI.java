import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class StudentGUI {

    public static void main(String[] args) {

        JFrame frame = new JFrame("Student Registration");

        JLabel title = new JLabel("Student Registration");
        title.setFont(new Font("Arial", Font.BOLD, 20));

        JLabel nameLabel = new JLabel("Name");
        JTextField nameField = new JTextField();

        JLabel ageLabel = new JLabel("umar");
        JTextField ageField = new JTextField();

        JLabel marksLabel = new JLabel("Marks");
        JTextField marksField = new JTextField();

        JButton saveButton = new JButton("Save Student");

        JLabel result = new JLabel("");

        saveButton.addActionListener(new ActionListener() {

            public void actionPerformed(ActionEvent e) {

                String name = nameField.getText();
                String age = ageField.getText();
                String marks = marksField.getText();

                result.setText(
                    "Saved: " + name +
                    " | Age: " + age +
                    " | Marks: " + marks
                );
            }
        });

        frame.setLayout(new GridLayout(6,2,10,10));

        frame.add(title);
        frame.add(new JLabel(""));

        frame.add(nameLabel);
        frame.add(nameField);

        frame.add(ageLabel);
        frame.add(ageField);

        frame.add(marksLabel);
        frame.add(marksField);

        frame.add(saveButton);
        frame.add(new JLabel(""));

        frame.add(result);

        frame.setSize(450,300);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        frame.setVisible(true);
    }
}
