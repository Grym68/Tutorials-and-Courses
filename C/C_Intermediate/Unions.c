union val {
    int int_num;
    float fl_num;
    char str[20];
};

typedef struct {
    char make[20];
    int model_year;
    int id_type; // 0 for id_num, 1 for VIN
    union {
        int id_num;
        char VIN[20];
    }id;
}vehicle;

int exercise1() {
    union val u1;
    union val u2;
    u1.int_num = 42;
    // this overrides the value assigned above
    //u1.fl_num = 12.28;
    u2 = u1;
    printf("%d", u2.int_num);
    return 0;
}

int exercise2() {
    vehicle car1;
    strcpy_s(car1.make, 20, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 123098;

    printf("Make: %s\n", car1.make);
    printf("Model year: %d\n", car1.model_year);
    if (car1.id_type == 0)
        printf("ID: %d\n", car1.id.id_num);
    else
        printf("VIN: $s\n", car1.id.VIN);

    return 0;
}