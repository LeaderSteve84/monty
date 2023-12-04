// Online C compiler to run C program online
// #include <stdarg.h>
// #include <stdio.h>
//
// void my_function(const char* format, va_list args) {
//     int i;
//         double d;
//             char* s;
//                 switch (*format) {
//                         case 'i':
//                                     i = va_arg(args, int);
//                                                 printf("int: %d\n", i);
//                                                             break;
//                                                                     case 'd':
//                                                                                 d = va_arg(args, double);
//                                                                                             printf("double: %f\n", d);
//                                                                                                         break;
//                                                                                                                 case 's':
//                                                                                                                             s = va_arg(args, char*);
//                                                                                                                                         printf("string: %s\n", s);
//                                                                                                                                                     break;
//                                                                                                                                                             default:
//                                                                                                                                                                         printf("Unknown format specifier\n");
//                                                                                                                                                                                     break;
//                                                                                                                                                                                         }
//                                                                                                                                                                                         }
//
//                                                                                                                                                                                         int Test(char *format, ...)
//                                                                                                                                                                                         {
//                                                                                                                                                                                             va_list args;
//                                                                                                                                                                                                 va_start(args, format);
//                                                                                                                                                                                                     my_function(format, args);
//                                                                                                                                                                                                         //my_function(format, args);
//                                                                                                                                                                                                             //my_function(format, args);
//                                                                                                                                                                                                                 va_end(args);
//                                                                                                                                                                                                                 }
//
//                                                                                                                                                                                                                 int main() {
//                                                                                                                                                                                                                     Test("s", "hello");
//                                                                                                                                                                                                                         return 0;
//                                                                                                                                                                                                                         }
