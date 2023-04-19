import 'package:flutter/material.dart';

class HomePage extends StatelessWidget {
  final int days = 40;
  
  //final String welcome = "Welcome to $days days of flutter";

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: Text("Project VSS"),
      ),
      body: Center(
        child: Container(
          child: Text("Welcome to $days"),
        ),
      ),
      drawer: Drawer(),
      
    );
  }
}