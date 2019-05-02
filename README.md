# Vending-Mechine
A vending machine that is based on the principle of finite state machine. The machine has two bump switches, one corresponds to entering 2 rupees in the vending machine while the other corresponds to entering 1 rupee in the machine. We have set the rate of commodity as 6 rupees. So we enter the money using these switches. We have designed the circuit that as when we reach the state where total amount entered by the user is seven rupees, the machine resets corresponding to return of the total money in a real life vending machine. This is one finite state machine. We have extended this by creating another finite state machine that is used to display the number of commodity left in the vending machine. The machine is designed as such that initially there are 3 articles of the commodity  in the vending machine that reduce to zero successively as whenever the total amount of money in vending machine is 6 rupees.  We have used two seven segment display,one show the total amount of money entered by the user and the other display shows the number of articles left in the vending machine.

Arduino Code is attached i nthe file sketch 31 mar. We used arduino just to provide the clock the circuit we built.

Components Used
Male to Female Jumper Wires
Male to Male Jumper Wires
2 Bump Switches
3 Push Buttons
2 Seven Segment Display (Common Anode)
20 Resistor (540 ohms) for BCD to seven segment conversion
2 IC-74LS47 for BCD
3 IC-CD4013 (D flip lop)
3 IC-CD4071 (OR Gate)
3 IC-CD4081 (XOR Gate)
3 IC-CD4070 (AND GAte)
1 IC-CD4069 (Not Gate)


