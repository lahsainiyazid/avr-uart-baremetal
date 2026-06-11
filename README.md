# avr-uart-baremetal
baremetal c code to send chars through uart with arduino
Features
- UART initialization at register level
- 9600 baud communication
- Character transmission
- Polling using UDRE0 flag
- No Arduino libraries
- ATmega328P / Arduino Uno
- Here is the documentation i used during this project:
- UART REGISTERS

UBRR = Baud Rate Register
    H -> High byte
    L -> Low byte

UCSR = Control & Status Register
    A -> Status
    B -> Enable features
    C -> Character format

UDR = Data Register


UART BITS

TXEN = Transmit Enable
RXEN = Receive Enable

UDRE = Data Register Empty

UCSZ = Character Size


