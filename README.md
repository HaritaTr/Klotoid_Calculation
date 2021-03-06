# Klotoid Elemanlarını Hesaplama

**Amaç;**
=========

Bir yol hattı doğru ve daire yaylarından oluşur. Doğrudan daireye veya bir daireden başka bir daireye geçişte eğrilik değişir. Bunun sonucu olarak eğriliğin değiştiği noktada merkezkaç kuvvetinin etkisi fazlalaşır. Bu nedenle doğrudan daireye veya daireden daireye geçişi yumuşatmak için yarıçapı belirli bir kurala göre değişen klotoid kullanılır.

**Klotoid;**

+ Geçiş eğrisi olarak
+ Simetrik tepe klotoidi olarak
+ Dönme eğrisi (S eğrisi) olarak
+ Yumurta eğrisi olarak (Klotoid parçası)
+ Sepet klotoidi olarak

farklı durumlarda kullanılmaktadır. Klotoid elemanlarını hesaplama programı; isminden de anlaşılaşacağı üzere, yol projelerinde kullanılan klotoidin elemanlarının ve birim klotoidin elemanlarının hesaplanmasını kolaylaştırmak için kullanılmaktadır.

**Kullanım Rehberi;**
=====================

**Çalıştırılmadan önce;**

+ A ve L için klotoid elemanlarının hesaplanması
+ A ve R için klotoid elemanlarının hesaplanması
+ R ve L için klotoid elemanlarının hesaplanması

tercih edilir. Ve

+ L : Klotoidin boyu
+ A : Klotoidin büyüklüğünün belirlenmesindeki parametre değeri
+ R : Kurbun yarıçapı

Yukarıdaki değerlerin girilmesi gerekmektedir.

**Hesaplanan;**

+ Birim klotoidin boyu (Klotoidin boyunun cetvel değeri); l
+ Dairenin yarıçapı; r (birim klotoid için)
+ Klotoid elemanının açısı; To, to (birim klotoid için)
+ Klotoid sonunun dik koordinatları; X, Y, x (birim klotoid için), y (birim klotoid için)
+ Daire merkezinin koordinatları; Ym, Xm, xm (birim klotoid için), ym (birim klotoid için)
+ Rakordman payı; Rak, rak (birim klotoid için)
+ Kısa ve uzun teğet; Tk, Tu, tk (birim klotoid için), tu (birim klotoid için)
+ Kutupsal koordinatlar; S, s (birim klotoid için)
+ Açı değeri; sigma
