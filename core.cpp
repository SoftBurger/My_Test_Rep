class Core {
public:
  Core() {}
  virtual void GetSome() {
  }
};

class SomeX {
public:
  SomeX : iWidth{100}, iHeight{100} {}
  int GetWidth() const;
  int GetHeight() const;
private:
  int iWidth;
  int iHeight;

  // ...
  float calc;
};