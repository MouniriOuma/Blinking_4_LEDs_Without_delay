void main() {
    unsigned int counter = 0;
    TRISB = 0b11110000;
    PORTB = 0x00;

    while (1) {
        // LED control using bitwise operations
        PORTB =
            (((counter % 20) < 10) << 0) |
            (((counter % 40) < 20) << 1) |
            (((counter % 60) < 30) << 2) |
            (((counter % 80) < 40) << 3);

        // Base delay and counter increment
        delay_ms(10);
        counter++;
    }
}