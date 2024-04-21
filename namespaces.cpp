namespace project_code {
    class complex {
    // ...
    };

    complex sqrt(complex);
    // ...

    int main();
}

int project_code::main()
{
      complex z {1,2};
      auto z2 = sqrt(z);
      std::cout << '{' << z2.real() <<','<<z2.imag() << "}\n";
      //...
}

int main()
{
      return project_code::main();
}
