//Add two complex numbers by passing structures to a function


struct complex_complex_453
{
    double rl_complex_453;
    double img_complex_453;
};
typedef struct complex_complex_453 number_complex_453;

number_complex_453 add_complex_453(number_complex_453 a_complex_453,number_complex_453 b_complex_453)
{
    a_complex_453.rl_complex_453=a_complex_453.rl_complex_453+b_complex_453.rl_complex_453;
    a_complex_453.img_complex_453=a_complex_453.img_complex_453+b_complex_453.img_complex_453;
    return a_complex_453;
}

void complex()
{
    number_complex_453 a_complex_453,b_complex_453;
    printf("For first complex number\n");
    printf("Enter the real number: ");
    scanf("%lf",&a_complex_453.rl_complex_453);
    printf("Enter the imaginary number: ");
    scanf("%lf",&a_complex_453.img_complex_453);

    printf("For second complex number\n");
    printf("Enter the real number: ");
    scanf("%lf",&b_complex_453.rl_complex_453);
    printf("Enter the imaginary number: ");
    scanf("%lf",&b_complex_453.img_complex_453);

    number_complex_453 res_complex_453;
    res_complex_453=add_complex_453(a_complex_453,b_complex_453);

    printf("After addition complex number is %lf+%lfi. \n",res_complex_453.rl_complex_453,res_complex_453.img_complex_453);

}