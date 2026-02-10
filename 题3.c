#include <stdio.h>
#include <math.h>

double f(double x, double a3, double a2, double a1, double a0) {
    return a3*x*x*x + a2*x*x + a1*x + a0;
}

int main() {
    double a3, a2, a1, a0;
    double a, b;
    
    if(scanf("%lf %lf %lf %lf", &a3, &a2, &a1, &a0) != 4) {
        printf("输入错误\n");
        return 1;
    }
    if(scanf("%lf %lf", &a, &b) != 2) {
        printf("输入错误\n");
        return 1;
    }
    
    double fa = f(a, a3, a2, a1, a0);
    double fb = f(b, a3, a2, a1, a0);
    
    // 检查端点是否为根
    if(fabs(fa) < 1e-10) {
        printf("%.2f\n", a);
        return 0;
    }
    if(fabs(fb) < 1e-10) {
        printf("%.2f\n", b);
        return 0;
    }
    
    // 确保区间内有根
    if(fa * fb > 0) {
        printf("区间内可能没有根\n");
        return 1;
    }
    
    double m, fm;
    int max_iterations = 100;
    int i; 
    
    for(i = 0; i < max_iterations && fabs(b - a) > 1e-5; i++) 
	{
        m = (a + b) / 2;
        fm = f(m, a3, a2, a1, a0);
        
        if(fabs(fm) < 1e-10) {
            break;
        }
        
        if(fa * fm < 0) {
            b = m;
            fb = fm;
        } else {
            a = m;
            fa = fm;
        }
    }
    
    m = (a + b) / 2;
    printf("%.2f\n", m);
    
    return 0;
}
