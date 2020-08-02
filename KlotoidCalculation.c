#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164

int main()
{
	setlocale(LC_ALL, "Turkish");

	double L, A, R;
	double l, r, To, to, X, Y, x, y, Ym, Xm, xm, ym, Rak, rak, Tk, Tu, tk, tu, S, s, sigma;

	/* NOT: Programda 3 Farklı şekilde klotoid elemanlarının hesaplanması düşünüldü.
	A ve L için Klotoid elemanlarının hesaplanması
	A ve R için Klotoid elemanlarının hesaplanması
	R ve L için Klotoid elemanlarının hesaplanması */
		/// Bilinenleri isteyelim.
	/* L : Klotoidin boyu
	A : Klotoidin büyüklüğünün belirlenmesindeki parametre değeri
	R : Kurbun yarıçapı
	NOT: Aşağıdaki formül ile verilen değerler ile diğer değerin hesaplanması yapılır.
	R = (A^2) / L; */
	printf("L değerini giriniz: ");
	scanf("%lf", &L);
	printf("A değerini giriniz: ");
	scanf("%lf", &A);
	R = pow(A, 2) / L;
	printf("R değeri: %f\n", R);

		// Bilinmeyenlerin hesaplanması;
	printf("\n\t=== Hesap sonuçları! === \n");
	/* Klotoid Elemanlarının hesaplanması
	Birim klotoidin boyu (Klotoidin boyunun cetvel değeri)
	l = L / A; */
	l = L / A;
	printf("Birim klotoidin boyu değeri: %f\n", l);
	/* Dairenin yarıçapının bulunması
	r = R / A;  (birim klotoid için) */
	r = R / A;
	printf("Dairenin yarıçap değeri: %f\n", r);
	/* Klotoid elemanının açısı
	To = (L / (2 * R)) * (200 / PI);
	to = To; (birim klotoid için) */
	To = (L / (2 * R)) * (200 / PI);
	to = To;
	printf("Klotoid elemanı açı değeri: %f\n", to);
	/* Klotoid sonunun dik koordinatları
	X = L - (((L^5)) / (40 * (A^ 4))) + (((L^9)) / (3456 * (A^8)));
	Y = (((L^3)) / (6 * (A^2))) - (((L^7)) / (336 * ((A^ 6)))) + (((L^11)) / (42240 * (A^10)));
	x = X / A; (birim klotoid için)
	y = Y / A; (birim klotoid için) */
	X = L - ((pow(L, 5)) / (40 * pow(A, 4))) + ((pow(L, 9)) / (3456 * pow(A, 8)));
	Y = ((pow(L, 3)) / (6 * pow(A, 2))) - ((pow(L, 7)) / (336 * (pow(A, 6)))) + ((pow(L, 11)) / (42240 * pow(A, 10)));
	x = X / A;
	y = Y / A;
	printf("x değeri: %f\n", x);
	printf("y değeri: %f\n", y); 
	/* Daire merkezinin koordinatları
	Ym = Y + (R * (cos((L / (2 * R)))));
	Xm = X - (R * (sin((L / (2 * R)))));
	xm = Xm / A; (birim klotoid için)
	ym = Ym / A; (birim klotoid için) */
	Ym = Y + (R * (cos((L / (2 * R)))));
	Xm = X - (R * (sin((L / (2 * R)))));
	xm = Xm / A;
	ym = Ym / A;
	printf("xm değeri: %f\n", xm);
	printf("ym değeri: %f\n", ym);
	/* Rakordman payı
	Rak = Ym - R;
	rak = Rak / A; (birim klotoid için) */
	Rak = Ym - R;
	rak = Rak / A;
	printf("rak değeri: %f\n", rak);
	/* Kısa ve uzun teğet
	Tk = Y / (sin((L / (2 * R))));
	Tu = X - Y * 1 / (tan((L / (2 * R))));
	tk = Tk / A; (birim klotoid için)
	tu = Tu / A; (birim klotoid için) */
	Tk = Y / (sin((L / (2 * R))));
	Tu = X - Y * 1 / (tan((L / (2 * R))));
	tk = Tk / A;
	tu = Tu / A;
	printf("tk değeri: %f\n", tk);
	printf("tu değeri: %f\n", tu);
	/* Kutupsal koordinatlar
	S = Sqrt((X^2) + (Y^2));
	s = S / A; (birim klotoid için) */
	S = pow((pow(X, 2) + pow(Y, 2)), 0.5);
	s = S / A;
	printf("s değeri: %f\n", s);
	/* Açı değeri
	sigma = (atan(Y / X)) * (200 / (PI)); */
	sigma = (atan(Y / X)) * (200 / (PI));
	printf("sigma değeri: %f\n", sigma);	

	return 0;
}
