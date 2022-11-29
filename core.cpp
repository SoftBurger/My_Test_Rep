class Core {
public:
  Core() {}
  virtual void GetSome() {
    GetComputation();
  }
};

class SomeX {
public:
  int GetWidth() const;
  int GetHeight() const;
private:
  int iWidth;
  int iHeight;
};