import 'dart:async';
import 'package:image_picker/image_picker.dart';
import 'dart:io';
import 'package:flutter/material.dart';



void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: JungleScreen(),
    );
  }
}

class JungleScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Color(0xFF6FDA83), // Yeşil arka plan
      body: SafeArea(
        child: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              // Yaprak ikonu
              Icon(
                Icons.eco, // Alternatif olarak özel bir logo kullanabilirsin
                size: 300,
                color: Colors.white,
              ),
              SizedBox(height: 40),
              // Başlık
              Text(
                'JUNGLE',
                style: TextStyle(
                  fontSize: 46,
                  fontWeight: FontWeight.bold,
                  color: Colors.white,
                ),
              ),
              SizedBox(height: 10),
              // Açıklama metni
              Padding(
                padding: EdgeInsets.symmetric(horizontal: 40),
                child: Text(
                  'We created a new platform to bring  amazing university students together!',
                  textAlign: TextAlign.center,
                  style: TextStyle(
                    fontSize: 20,
                    color: Colors.white70,
                  ),
                ),
              ),
              SizedBox(height: 30),
              // Create an account butonu
              Container(
                width: 250,
                height: 50,
                child: ElevatedButton(
                  onPressed: () {Navigator.push(
        context,
        MaterialPageRoute(builder: (context) => OnboardingScreen()), // 🎯 Onboarding ekranına yönlendirme
      );},
                  style: ElevatedButton.styleFrom(
                    backgroundColor: Colors.white,
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(30),
                    ),
                  ),
                  child: Text(
                    'Create an account',
                    style: TextStyle(
                      color: Color(0xFF6FDA83),
                      fontSize: 16,
                    ),
                  ),
                ),
              ),
              SizedBox(height: 20),
              // Sign In bağlantısı
              TextButton(
                onPressed: () {},
                child: Text(
                  'Already have an account? Sign In',
                  style: TextStyle(
                    color: Colors.white,
                    fontSize: 14,
                    decoration: TextDecoration.underline,
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
// Onboarding Ekranı (3 Sayfa Kaydırmalı)
class OnboardingScreen extends StatefulWidget {
  @override
  _OnboardingScreenState createState() => _OnboardingScreenState();
}

class _OnboardingScreenState extends State<OnboardingScreen> {
  PageController _controller = PageController();
  int _currentIndex = 0;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Column(
        children: [
          Expanded(
            child: PageView(
              controller: _controller,
              onPageChanged: (index) {
                setState(() {
                  _currentIndex = index;
                });
              },
              children: [
                OnboardingPage(
                  image: 'assets/image1.png', // Buraya görsellerini koymalısın
                  title: 'Algorithm',
                  description: 'Users going through a vetting process to ensure you never match with bots.',
                ),
                OnboardingPage(
                  image: 'assets/image2.png',
                  title: 'Matches',
                  description: 'We match you with people that have a large array of similar interests.',
                ),
                OnboardingPage(
                  image: 'assets/image3.png',
                  title: 'Premium',
                  description: 'Sign up today and enjoy the first month of premium benefits on us.',
                ),
              ],
            ),
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: List.generate(3, (index) {
              return Container(
                margin: EdgeInsets.all(4),
                width: _currentIndex == index ? 12 : 8,
                height: 8,
                decoration: BoxDecoration(
                  color: _currentIndex == index ? Colors.green : Colors.grey,
                  shape: BoxShape.circle,
                ),
              );
            }),
          ),
          SizedBox(height: 20),
          ElevatedButton(
            onPressed: () {
              if (_currentIndex < 2) {
                _controller.nextPage(duration: Duration(milliseconds: 300), curve: Curves.easeIn);
              } else {
                 Navigator.push(
        context,
        MaterialPageRoute(builder: (context) => SignupScreen()), // SignupScreen'e yönlendirme
      );
              }
            },
            style: ElevatedButton.styleFrom(
              backgroundColor: Color(0xFF6FDA83),
              shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(30)),
              padding: EdgeInsets.symmetric(horizontal: 50, vertical: 15),
            ),
            child: Text(
              _currentIndex == 2 ? 'Get Started' : 'Next',
              style: TextStyle(color: Colors.white, fontSize: 16),
            ),
          ),
          SizedBox(height: 20),
        ],
      ),
    );
  }
}

// Tekil Onboarding Sayfası Widget'ı
class OnboardingPage extends StatelessWidget {
  final String image;
  final String title;
  final String description;

  OnboardingPage({required this.image, required this.title, required this.description});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: EdgeInsets.symmetric(horizontal: 30),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Image.asset(image, height: 500,width: double.infinity,fit: BoxFit.cover, ), // Görsel
          SizedBox(height: 20),
          Text(
            title,
            style: TextStyle(fontSize: 24, fontWeight: FontWeight.bold, color: Colors.green),
          ),
          SizedBox(height: 10),
          Text(
            description,
            textAlign: TextAlign.center,
            style: TextStyle(fontSize: 16, color: Colors.black54),
          ),
        ],
      ),
    );
  }
}
class SignupScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Padding(
        padding: EdgeInsets.symmetric(horizontal: 30),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            ClipOval(
              child: Container(
                width: 200, // Dairenin genişliği
                height: 200, // Dairenin yüksekliği
                color: Color(0xFF6FDA83), // Dış yeşil renk
                child: Center(
                  child: Icon(
                    Icons.eco,
                    size: 150, // Yaprak ikonu boyutu
                    color: Colors.white, // Yaprak rengi (beyaz)
                  ),
                ),
              ),
            ),
            
            SizedBox(height: 30),
            Text(
              'Sign up to continue',
              style: TextStyle(fontSize: 25, fontWeight: FontWeight.bold),
            ),
            SizedBox(height: 20),
            ElevatedButton(
              onPressed: () {
                Navigator.push(
                  context,
                  MaterialPageRoute(
                      builder: (context) => const SignUpEmailScreen(),
                    ),
                  );
                },
              style: ElevatedButton.styleFrom(
                backgroundColor: Color(0xFF6FDA83),
                shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(30)),
                padding: EdgeInsets.symmetric(horizontal: 75, vertical: 20),
              ),
              child: Text('Continue with email', style: TextStyle(color: Colors.white,fontSize: 20)),
            ),
            SizedBox(height: 10),
            TextButton(
              onPressed: () {
                // Giriş yapma sayfasına yönlendirme
              },
              child: Text('Already have an account? Sign In', style: TextStyle(color: Colors.green)),
            ),
            SizedBox(height: 150),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                TextButton(
                  onPressed: () {
                    // Kullanım şartları
                  },
                  child: Text('Terms of use', style: TextStyle(color: Colors.green)),
                ),
                Text(' | '),
                TextButton(
                  onPressed: () {
                    // Gizlilik politikası
                  },
                  child: Text('Privacy Policy', style: TextStyle(color: Colors.green)),
                ),
              ],
            ),
          ],
        ),
      ),
    );
  }
}

class SignUpEmailScreen extends StatefulWidget {
  const SignUpEmailScreen({super.key});

  @override
  State<SignUpEmailScreen> createState() => _SignUpEmailScreenState();
}

class _SignUpEmailScreenState extends State<SignUpEmailScreen> {
  final TextEditingController _emailController = TextEditingController();
  String? _errorMessage;

  String? _getUniversityName(String email) {
    if (!email.contains('@') || !email.endsWith('.edu.tr')) return null;

    final domain = email.split('@').last;

    if (domain == 'itu.edu.tr') return 'İstanbul Teknik Üniversitesi';
    if (domain == 'boun.edu.tr') return 'Boğaziçi Üniversitesi';

    return null; // tanımlı olmayan domain
  }

  void _onContinuePressed() {
    final email = _emailController.text.trim();
    final universityName = _getUniversityName(email);

    if (!email.endsWith('.edu.tr')) {
      setState(() {
        _errorMessage = "Please enter a valid university email address (.edu.tr)";
      });
      return;
    }

    if (universityName == null) {
      setState(() {
        _errorMessage = "This email extension is not defined.";
      });
      return;
    }

    // Hata yok, geçiş yap
    setState(() {
      _errorMessage = null;
    });

    Navigator.push(
      context,
      MaterialPageRoute(
        builder: (context) => OtpVerificationScreen(
        ),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 30),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text(
              'E-mail',
              style: TextStyle(
                fontSize: 35,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 10),
            const Text(
              'Please enter your university e-mail',
              style: TextStyle(
                fontSize: 16,
                color: Colors.black54,
              ),
            ),
            const SizedBox(height: 30),
            TextField(
              controller: _emailController,
              decoration: InputDecoration(
                hintText: 'Your e-mail',
                filled: true,
                fillColor: Colors.white,
                contentPadding: const EdgeInsets.symmetric(
                  horizontal: 20,
                  vertical: 18,
                ),
                border: OutlineInputBorder(
                  borderRadius: BorderRadius.circular(15),
                ),
                errorText: _errorMessage,
              ),
              keyboardType: TextInputType.emailAddress,
            ),
            const SizedBox(height: 40),
            Center(
              child: ElevatedButton(
                onPressed: _onContinuePressed,
                style: ElevatedButton.styleFrom(
                  backgroundColor: const Color(0xFF6FDA83),
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(15),
                  ),
                  padding: const EdgeInsets.symmetric(
                    horizontal: 90,
                    vertical: 18,
                  ),
                ),
                child: const Text(
                  'Continue',
                  style: TextStyle(
                    fontSize: 18,
                    color: Colors.white,
                  ),
                ),
              ),
            ),
            const SizedBox(height: 50),
          ],
        ),
      ),
    );
  }
}

class OtpVerificationScreen extends StatefulWidget {
  const OtpVerificationScreen({super.key});

  @override
  State<OtpVerificationScreen> createState() => _OtpVerificationScreenState();
}

class _OtpVerificationScreenState extends State<OtpVerificationScreen> {
  final List<FocusNode> _focusNodes = List.generate(4, (_) => FocusNode());
  final List<TextEditingController> _controllers =
      List.generate(4, (_) => TextEditingController());

  late Timer _timer;
  int _secondsRemaining = 180; // 3 dakika

  @override
  void initState() {
    super.initState();
    _startTimer();
  }

  void _startTimer() {
    _timer = Timer.periodic(const Duration(seconds: 1), (timer) {
        if (!mounted) {
      timer.cancel();
      return;
      }
      if (_secondsRemaining == 0) {
        timer.cancel();
      } else {
        setState(() {
          _secondsRemaining--;
        });
      }
    });
  }

  String get formattedTime {
    final minutes = (_secondsRemaining ~/ 60).toString().padLeft(2, '0');
    final seconds = (_secondsRemaining % 60).toString().padLeft(2, '0');
    return "$minutes:$seconds";
  }

  @override
  void dispose() {
    _timer.cancel();
    for (var node in _focusNodes) {
      node.dispose();
    }
    for (var controller in _controllers) {
      controller.dispose();
    }
    super.dispose();
  }

  void _onChanged(String value, int index) {
    if (value.isNotEmpty && index < 3) {
      _focusNodes[index + 1].requestFocus();
    } else if (value.isEmpty && index > 0) {
      _focusNodes[index - 1].requestFocus();
    }
  }

  void _verifyCode() {
    final code = otpCode;
    if (code.length == 4 && !_controllers.any((c) => c.text.isEmpty)) {
      print("Doğrulanan Kod: $code");
      Navigator.pushReplacement(
  context,
  MaterialPageRoute(builder: (_) => const SetNewPasswordScreen()),
);

    } else {
      ScaffoldMessenger.of(context).showSnackBar(
        const SnackBar(content: Text("Lütfen 4 haneli kodu eksiksiz girin")),
      );
    }
  }

  String get otpCode => _controllers.map((e) => e.text).join();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 30),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(
              formattedTime,
              style: const TextStyle(
                fontSize: 32,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 12),
            const Text(
              'Type the verification code\nwe’ve sent you',
              textAlign: TextAlign.center,
              style: TextStyle(
                fontSize: 16,
                color: Colors.black54,
              ),
            ),
            const SizedBox(height: 40),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: List.generate(4, (index) {
                return SizedBox(
                  width: 60,
                  height: 60,
                  child: TextField(
                    controller: _controllers[index],
                    focusNode: _focusNodes[index],
                    textAlign: TextAlign.center,
                    style: const TextStyle(
                      fontSize: 24,
                      fontWeight: FontWeight.bold,
                    ),
                    keyboardType: TextInputType.number,
                    maxLength: 1,
                    decoration: InputDecoration(
                      counterText: "",
                      filled: true,
                      fillColor: Colors.white,
                      contentPadding: EdgeInsets.zero,
                      border: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(15),
                        borderSide: const BorderSide(
                          color: Color(0xFF6FDA83),
                        ),
                      ),
                      enabledBorder: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(15),
                        borderSide: const BorderSide(
                          color: Color(0xFF6FDA83),
                        ),
                      ),
                    ),
                    onChanged: (value) => _onChanged(value, index),
                    onSubmitted: (_) {
                      if (_controllers[index].text.isNotEmpty) {
                        if (index < 3) {
                          _focusNodes[index + 1].requestFocus();
                        } else {
                          _verifyCode();
                        }
                      }
                    },
                  ),
                );
              }),
            ),
            const SizedBox(height: 40),
            ElevatedButton(
              onPressed: _verifyCode,
              style: ElevatedButton.styleFrom(
                backgroundColor: const Color(0xFF6FDA83),
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(15),
                ),
                padding: const EdgeInsets.symmetric(
                  horizontal: 90,
                  vertical: 18,
                ),
              ),
              child: const Text(
                'Verify',
                style: TextStyle(fontSize: 18, color: Colors.white),
              ),
            ),
            const SizedBox(height: 20),
            TextButton(
              onPressed: () {
                // Süreyi sıfırla ve yeniden başlat
                setState(() {
                  _secondsRemaining = 180;
                  _startTimer();
                });
              },
              child: const Text(
                'Send again',
                style: TextStyle(
                  color: Color(0xFF6FDA83),
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}

class SetNewPasswordScreen extends StatefulWidget {
  const SetNewPasswordScreen({super.key});

  @override
  State<SetNewPasswordScreen> createState() => _SetNewPasswordScreenState();
}

class _SetNewPasswordScreenState extends State<SetNewPasswordScreen> {
  final TextEditingController _passwordController = TextEditingController();
  final TextEditingController _confirmController = TextEditingController();
  bool _obscurePassword = true;
  bool _obscureConfirm = true;

  String? _errorMessage;

  void _validateAndContinue() {
    final password = _passwordController.text.trim();
    final confirm = _confirmController.text.trim();

    if (password.length < 8) {
      setState(() {
        _errorMessage = "Password must be at least 8 characters.";
      });
      return;
    }

    if (password != confirm) {
      setState(() {
        _errorMessage = "Passwords do not match.";
      });
      return;
    }

    // Şifre geçerli
    setState(() {
      _errorMessage = null;
    });

    // Burada şifreyi kaydetme işlemi yapılır
    print("Yeni şifre: $password");

    // Örneğin: Ana sayfaya yönlendirme
    // Navigator.pushReplacement(context, MaterialPageRoute(builder: (_) => const HomePage()));
    Navigator.pushReplacement(
  context,
  MaterialPageRoute(builder: (_) => const ProfileDetailsScreen()),
);
  }

  @override
  void dispose() {
    _passwordController.dispose();
    _confirmController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 30),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text(
              'My password',
              style: TextStyle(
                fontSize: 35,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 10),
            const Text(
              'Please enter your new password',
              style: TextStyle(
                fontSize: 16,
                color: Colors.black54,
              ),
            ),
            const SizedBox(height: 30),
            TextField(
              controller: _passwordController,
              obscureText: _obscurePassword,
              decoration: InputDecoration(
                hintText: 'New password',
                filled: true,
                fillColor: Colors.white,
                suffixIcon: IconButton(
                  icon: Icon(
                    _obscurePassword ? Icons.visibility_off : Icons.visibility,
                  ),
                  onPressed: () {
                    setState(() {
                      _obscurePassword = !_obscurePassword;
                    });
                  },
                ),
                contentPadding: const EdgeInsets.symmetric(
                  horizontal: 20,
                  vertical: 18,
                ),
                border: OutlineInputBorder(
                  borderRadius: BorderRadius.circular(15),
                ),
              ),
            ),
            const SizedBox(height: 20),
            TextField(
              controller: _confirmController,
              obscureText: _obscureConfirm,
              decoration: InputDecoration(
                hintText: 'Confirm password',
                filled: true,
                fillColor: Colors.white,
                suffixIcon: IconButton(
                  icon: Icon(
                    _obscureConfirm ? Icons.visibility_off : Icons.visibility,
                  ),
                  onPressed: () {
                    setState(() {
                      _obscureConfirm = !_obscureConfirm;
                    });
                  },
                ),
                contentPadding: const EdgeInsets.symmetric(
                  horizontal: 20,
                  vertical: 18,
                ),
                border: OutlineInputBorder(
                  borderRadius: BorderRadius.circular(15),
                ),
              ),
            ),
            const SizedBox(height: 10),
            if (_errorMessage != null)
              Text(
                _errorMessage!,
                style: const TextStyle(
                  color: Colors.red,
                  fontSize: 14,
                ),
              ),
            const SizedBox(height: 30),
            Center(
              child: ElevatedButton(
                onPressed: _validateAndContinue,
                style: ElevatedButton.styleFrom(
                  backgroundColor: const Color(0xFF6FDA83),
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(15),
                  ),
                  padding: const EdgeInsets.symmetric(
                    horizontal: 90,
                    vertical: 18,
                  ),
                ),
                child: const Text(
                  'Continue',
                  style: TextStyle(
                    fontSize: 18,
                    color: Colors.white,
                  ),
                ),
              ),
            ),
            const SizedBox(height: 50),
          ],
        ),
      ),
    );
  }
}



class ProfileDetailsScreen extends StatefulWidget {
  const ProfileDetailsScreen({super.key});

  @override
  State<ProfileDetailsScreen> createState() => _ProfileDetailsScreenState();
}

class _ProfileDetailsScreenState extends State<ProfileDetailsScreen> {
  final TextEditingController _firstNameController = TextEditingController();
  final TextEditingController _lastNameController = TextEditingController();
  final TextEditingController _universityController = TextEditingController();
  DateTime? _selectedDate;
  File? _profileImage;

  Future<void> _pickImage() async {
    final picked = await ImagePicker().pickImage(source: ImageSource.gallery);
    if (picked != null) {
      setState(() {
        _profileImage = File(picked.path);
      });
    }
  }

  Future<void> _pickDate() async {
    final DateTime? picked = await showDatePicker(
      context: context,
      initialDate: DateTime(2000, 1, 1),
      firstDate: DateTime(1900),
      lastDate: DateTime.now(),
    );
    if (picked != null) {
      setState(() {
        _selectedDate = picked;
      });
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 30),
        child: SingleChildScrollView(
          child: Column(
            children: [
              const SizedBox(height: 60),
              const Text(
                'Profile details',
                style: TextStyle(
                  fontSize: 28,
                  fontWeight: FontWeight.bold,
                ),
              ),
              const SizedBox(height: 20),
              Stack(
                alignment: Alignment.bottomRight,
                children: [
                  CircleAvatar(
                    radius: 50,
                    backgroundImage: _profileImage != null
  ? FileImage(_profileImage!)
  : null,
child: _profileImage == null
  ? const Icon(Icons.person, size: 50)
  : null,
                  ),
                  Positioned(
                    child: GestureDetector(
                      onTap: _pickImage,
                      child: Container(
                        decoration: const BoxDecoration(
                          shape: BoxShape.circle,
                          color: Color(0xFF6FDA83),
                        ),
                        padding: const EdgeInsets.all(6),
                        child: const Icon(Icons.camera_alt, color: Colors.white, size: 20),
                      ),
                    ),
                  )
                ],
              ),
              const SizedBox(height: 30),
              TextField(
                controller: _firstNameController,
                decoration: _inputDecoration('First name'),
              ),
              const SizedBox(height: 20),
              TextField(
                controller: _lastNameController,
                decoration: _inputDecoration('Last name'),
              ),
              const SizedBox(height: 20),
              TextField(
                controller: _universityController,
                decoration: _inputDecoration('University'),
              ),
              const SizedBox(height: 20),
              GestureDetector(
                onTap: _pickDate,
                child: Container(
                  width: double.infinity,
                  padding: const EdgeInsets.symmetric(vertical: 18, horizontal: 20),
                  decoration: BoxDecoration(
                    color: const Color(0xFFEFFCF3),
                    borderRadius: BorderRadius.circular(15),
                  ),
                  child: Row(
                    children: [
                      const Icon(Icons.calendar_today, color: Color(0xFF6FDA83)),
                      const SizedBox(width: 10),
                      Text(
                        _selectedDate != null
                            ? '${_selectedDate!.day}/${_selectedDate!.month}/${_selectedDate!.year}'
                            : 'Choose birthday date',
                        style: const TextStyle(
                          color: Color(0xFF6FDA83),
                          fontSize: 16,
                        ),
                      ),
                    ],
                  ),
                ),
              ),
              const SizedBox(height: 40),
              ElevatedButton(
                onPressed: () {
                  // Bilgileri kaydet
                  print("Ad: ${_firstNameController.text}");
                  print("Soyad: ${_lastNameController.text}");
                  print("Üniversite: ${_universityController.text}");
                  print("Doğum Günü: $_selectedDate");
                  print("Fotoğraf: ${_profileImage?.path}");

                  Navigator.push(
  context,
  MaterialPageRoute(builder: (_) => const InterestsScreen()),
);
                },
                style: ElevatedButton.styleFrom(
                  backgroundColor: const Color(0xFF6FDA83),
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(15),
                  ),
                  padding: const EdgeInsets.symmetric(
                    horizontal: 90,
                    vertical: 18,
                  ),
                ),
                child: const Text(
                  'Confirm',
                  style: TextStyle(fontSize: 18, color: Colors.white),
                ),
              ),
              const SizedBox(height: 40),
            ],
          ),
        ),
      ),
    );
  }

  InputDecoration _inputDecoration(String hint) {
    return InputDecoration(
      hintText: hint,
      filled: true,
      fillColor: Colors.white,
      contentPadding: const EdgeInsets.symmetric(horizontal: 20, vertical: 18),
      border: OutlineInputBorder(
        borderRadius: BorderRadius.circular(15),
      ),
    );
  }
}



class InterestsScreen extends StatefulWidget {
  const InterestsScreen({super.key});

  @override
  State<InterestsScreen> createState() => _InterestsScreenState();
}

class _InterestsScreenState extends State<InterestsScreen> {
  final List<String> interests = [
    "Photography", "Shopping", "Karaoke", "Yoga",
    "Cooking", "Tennis", "Run", "Swimming",
    "Art", "Traveling", "Extreme", "Music",
    "Drink", "Video games"
  ];

  final Set<String> selectedInterests = {};

  void _toggleInterest(String interest) {
    setState(() {
      if (selectedInterests.contains(interest)) {
        selectedInterests.remove(interest);
      } else {
        selectedInterests.add(interest);
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        leading: const BackButton(color: Colors.black),
        backgroundColor: Colors.transparent,
        elevation: 0,
        actions: [
          TextButton(
            onPressed: () {
              Navigator.push(
    context,
    MaterialPageRoute(builder: (context) => const ExpectationsScreen()),
  );
            },
            child: const Text(
              'Skip',
              style: TextStyle(color: Color(0xFF6FDA83), fontWeight: FontWeight.bold),
            ),
          )
        ],
      ),
      body: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 30),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text(
              'Your interests',
              style: TextStyle(
                fontSize: 28,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 10),
            const Text(
              'Select a few of your interests and let everyone know what you’re passionate about.',
              style: TextStyle(fontSize: 14, color: Colors.black54),
            ),
            const SizedBox(height: 20),
            Expanded(
              child: Wrap(
                spacing: 12,
                runSpacing: 12,
                children: interests.map((interest) {
                  final isSelected = selectedInterests.contains(interest);
                  return GestureDetector(
                    onTap: () => _toggleInterest(interest),
                    child: Container(
                      padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
                      decoration: BoxDecoration(
                        color: isSelected ? const Color(0xFF6FDA83) : Colors.white,
                        border: Border.all(
                          color: const Color(0xFF6FDA83),
                        ),
                        borderRadius: BorderRadius.circular(30),
                        boxShadow: isSelected
                            ? [BoxShadow(color: Colors.green.shade100, blurRadius: 10)]
                            : [],
                      ),
                      child: Text(
                        interest,
                        style: TextStyle(
                          color: isSelected ? Colors.white : Colors.green,
                          fontWeight: FontWeight.w500,
                        ),
                      ),
                    ),
                  );
                }).toList(),
              ),
            ),
            const SizedBox(height: 20),
            Center(
              child: ElevatedButton(
                onPressed: () {
                  // Devam et → seçilen ilgi alanlarını kaydedebilirsin
                  print("Seçilen ilgi alanları: $selectedInterests");
                  // Navigator.push(context, ...);
                  Navigator.push(
    context,
    MaterialPageRoute(builder: (context) => const ExpectationsScreen()),
  );
                },
                style: ElevatedButton.styleFrom(
                  backgroundColor: const Color(0xFF6FDA83),
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(15),
                  ),
                  padding: const EdgeInsets.symmetric(horizontal: 90, vertical: 18),
                ),
                child: const Text(
                  'Continue',
                  style: TextStyle(fontSize: 18, color: Colors.white),
                ),
              ),
            ),
            const SizedBox(height: 30),
          ],
        ),
      ),
    );
  }
}

class ExpectationsScreen extends StatefulWidget {
  const ExpectationsScreen({super.key});

  @override
  State<ExpectationsScreen> createState() => _ExpectationsScreenState();
}

class _ExpectationsScreenState extends State<ExpectationsScreen> {
  final List<String> expectations = [
    "Long term relationship",
    "Romance",
    "Start a family",
    "Active partner",
    "Vacation",
    "Friends with benefit",
    "Chat",
    "Secret meetings",
    "Friends first",
    "Masculine only",
    "Casual dating",
    "Roleplay costumes",
    "BDSM",
    "Experiments open",
    "Sugar daddy",
    "Don’t know"
  ];

  final Set<String> selectedExpectations = {
    "Long term relationship",
    "Romance",
    "Start a family",
    "Active partner"
  };

  void _toggleExpectation(String expectation) {
    setState(() {
      if (selectedExpectations.contains(expectation)) {
        selectedExpectations.remove(expectation);
      } else {
        selectedExpectations.add(expectation);
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        leading: const BackButton(color: Colors.black),
        backgroundColor: Colors.transparent,
        elevation: 0,
        actions: [
          TextButton(
            onPressed: () {
              // Skip
            },
            child: const Text(
              'Skip',
              style: TextStyle(color: Color(0xFF6FDA83), fontWeight: FontWeight.bold),
            ),
          )
        ],
      ),
      body: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 30),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            const Text(
              'What are your expectations?',
              style: TextStyle(fontSize: 26, fontWeight: FontWeight.bold),
              textAlign: TextAlign.center,
            ),
            const SizedBox(height: 20),
            Expanded(
              child: Wrap(
                spacing: 12,
                runSpacing: 12,
                alignment: WrapAlignment.center,
                children: expectations.map((expectation) {
                  final isSelected = selectedExpectations.contains(expectation);
                  return GestureDetector(
                    onTap: () => _toggleExpectation(expectation),
                    child: Container(
                      padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
                      decoration: BoxDecoration(
                        color: isSelected ? const Color(0xFF6FDA83) : Colors.white,
                        border: Border.all(color: const Color(0xFF6FDA83)),
                        borderRadius: BorderRadius.circular(50),
                        boxShadow: isSelected
                            ? [BoxShadow(color: Colors.green.shade100, blurRadius: 10)]
                            : [],
                      ),
                      child: Text(
                        expectation,
                        style: TextStyle(
                          color: isSelected ? Colors.white : Colors.green,
                          fontWeight: FontWeight.w500,
                        ),
                      ),
                    ),
                  );
                }).toList(),
              ),
            ),
            const SizedBox(height: 20),
            ElevatedButton(
              onPressed: () {
                // Seçilenler loglanabilir
                print("Seçilen beklentiler: $selectedExpectations");
                 Navigator.push(
    context,
    MaterialPageRoute(builder: (context) => const SetLocationScreen()),
  );
              },
              style: ElevatedButton.styleFrom(
                backgroundColor: const Color(0xFF6FDA83),
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(15),
                ),
                padding: const EdgeInsets.symmetric(horizontal: 90, vertical: 18),
              ),
              child: const Text(
                'Continue',
                style: TextStyle(fontSize: 18, color: Colors.white),
              ),
            ),
            const SizedBox(height: 30),
          ],
        ),
      ),
    );
  }
}

class SetLocationScreen extends StatelessWidget {
  const SetLocationScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey.shade200,
      body: Center(
        child: Container(
          margin: const EdgeInsets.symmetric(vertical: 40, horizontal: 20),
          padding: const EdgeInsets.all(24),
          decoration: BoxDecoration(
            color: Colors.white,
            borderRadius: BorderRadius.circular(16),
          ),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              // Skip button
              Align(
                alignment: Alignment.topRight,
                child: TextButton(
                  onPressed: () {
                    // Skip action
                  },
                  child: const Text(
                    'Skip',
                    style: TextStyle(
                      color: Colors.green,
                      fontSize: 14,
                    ),
                  ),
                ),
              ),
              const SizedBox(height: 20),

              // Yellow location icon (can be replaced with custom image)
              const Icon(
                Icons.location_on,
                size: 100,
                color: Colors.yellow,
              ),

              const SizedBox(height: 40),

              const Text(
                'Set Location',
                style: TextStyle(
                  fontWeight: FontWeight.bold,
                  fontSize: 22,
                  color: Colors.black,
                ),
              ),

              const SizedBox(height: 8),

              const Text(
                'You can see how far people from you',
                textAlign: TextAlign.center,
                style: TextStyle(
                  color: Colors.grey,
                  fontSize: 14,
                ),
              ),

              const SizedBox(height: 50),

              // Green button
              SizedBox(
                width: double.infinity,
                child: ElevatedButton(
                  onPressed: () {
                    Navigator.push(
    context,
    MaterialPageRoute(builder: (context) => const NotificationScreen ()),
  );
                  },
                  style: ElevatedButton.styleFrom(
                    backgroundColor: const Color(0xFF90EE90), // light green
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(14),
                    ),
                    padding: const EdgeInsets.symmetric(vertical: 16),
                  ),
                  child: const Text(
                    'Access to a contact list',
                    style: TextStyle(
                      color: Colors.white,
                      fontSize: 16,
                    ),
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}


class NotificationScreen extends StatelessWidget {
  const NotificationScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey[200], // Arka plan açık gri
      body: SafeArea(
        child: Padding(
          padding: const EdgeInsets.all(24.0),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.end,
            children: [
              Text(
                "Skip",
                style: TextStyle(
                  color: Colors.green,
                  fontWeight: FontWeight.bold,
                ),
              ),
              Spacer(),
              Center(
                child: Column(
                  children: [
                    Text(
                      'Enable notification’s',
                      style: TextStyle(
                        fontWeight: FontWeight.bold,
                        fontSize: 22,
                        color: Colors.black,
                      ),
                    ),
                    SizedBox(height: 12),
                    Text(
                      'Get push-notification when you get the\nmatch or receive a message.',
                      style: TextStyle(
                        fontSize: 14,
                        color: Colors.grey[600],
                      ),
                      textAlign: TextAlign.center,
                    ),
                  ],
                ),
              ),
              Spacer(),
              SizedBox(
                width: double.infinity,
                child: ElevatedButton(
                  onPressed: () {
                    // Bildirim izni alma işlemleri buraya yazılır
                  },
                  style: ElevatedButton.styleFrom(
                    backgroundColor: Colors.green,
                    padding: EdgeInsets.symmetric(vertical: 16),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(12),
                    ),
                  ),
                  child: Text(
                    "I want to be notified",
                    style: TextStyle(
                      fontSize: 16,
                      color: Colors.white,
                    ),
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}