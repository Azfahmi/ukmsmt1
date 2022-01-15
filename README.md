# ukmsmt1

1. Untuk percobaan ini saya tidak menggunakan abstraksi Arduino sehingga untuk inisialisasi pwm dan adc dilakukan terpisah dari fungsi utama
2. Cara kerja simulasi ini cukup sederhana, kita dapat mengatur kecepatan motor menggunakan potensiometer 
3. Ada dua opsi untuk arah maju dan arah mundur yang dapat diatur melalui tombol pada PC1
4. Jika tombol terlepas makan arah akan maju dan ketika tombol ditekan arah akan mundur
5. Untuk arah mundur, semakin cepat jika diatur nilai potensiometer ke angka 100 begitu pula sebaliknya
6. Untuk arah maju sebagai pembeda diberikan indikator kecepatan berrlawanan dengan arah mundur sehingga jika ingin motor maju dengan cepat maka potensiometer diatur ke angka 0 , dan sebaliknya jika ingin semakin pelan atur nilai mendekati 100
7. Karena digunakan prinsip seperti itu, jika kita ingin menghentikan paksa motor yang sudah cepat diangka (0 untuk arah maju)(100 untuk arah mundur) kita tidak perlu menggeser potensiometer ke angka 100 atau 0 , kita cukup menekan tombol yang ada karena tombol digunakan sebagai pengganti arah 
8. Jika pada arah mundur berada diangka 100 , jika tombol ditekan maka motor akan berhenti karena berganti ke arah maju, sebagaimana yang telah dijelaskan , jika pada arah maju angka 100 pada potensiometer mengatur motor mati
9. Begitu juga untuk arah maju tinggal disesuaikan saja
10. Kelemahan percobaan ini adalah motor tidak dapat berbelok
