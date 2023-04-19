import 'package:flutter/material.dart';
import 'package:flutter_application_1/Pages/home_page.dart';

void main(List<String> args) {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    
    // double pi = 3.14;
    // bool ismale = true;
    // num temp = 30.5;

    // var day = "Saturday";
    // const pi = 3.14;

    return MaterialApp(
      home: HomePage()
    );
  }
}
