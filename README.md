# 🌑 Pixel Worlds Offsets & IL2CPP Helper

> Lightweight IL2CPP utility & class reference for **Pixel Worlds**  
> Built for reverse engineering, memory interaction, and learning purposes.

---

## 🧩 Classes

```cpp
Player
PlayerData

World
WorldController

CharacterController2D
ChatClient / Message

AIEnemyMonoBehaviourBase
PixelPerfectCamera
```

---

## 🛠️ IL2CPP Helper

A minimal helper layer for interacting with **GameAssembly.dll** and IL2CPP runtime.

---

### ⚡ Features

- Full IL2CPP API typedefs:
  - domain
  - assembly
  - class
  - field
  - method
  - object
  - string
  - thread
  - GC

---

### 🔧 Functions

#### 🧠 Initialize()

```cpp
void Initialize();
```

- Resolves exports from `GameAssembly.dll`
- Attaches current thread to IL2CPP domain

---

#### 📍 RVA()

```cpp
uintptr_t RVA(uintptr_t offset);
```

- Converts dumped RVA → absolute address

---

#### 📖 Read / ✏️ Write

```cpp
template<typename T>
T Read(uintptr_t address);

template<typename T>
void Write(uintptr_t address, T value);
```

- Read/write memory using offsets

---

#### 📞 Call()

```cpp
template<typename Ret, typename... Args>
Ret Call(uintptr_t rva, Args... args);
```

- Call functions directly via RVA

---

#### 🔤 Il2CppStringToStd()

```cpp
std::string Il2CppStringToStd(Il2CppString* str);
```

- Converts IL2CPP string → `std::string`

---

## 💡 Example Usage

```cpp
il2cpp_helper::Initialize();

// Resolve address
auto addr = il2cpp_helper::RVA(0x123456);

// Read value
int health = il2cpp_helper::Read<int>(addr);

// Write value
il2cpp_helper::Write<int>(addr, 999);

// Call method
il2cpp_helper::Call<void>(0x654321, arg1, arg2);
```

---

## 🖼️ Preview

<p align="center">
  <img src="https://github.com/user-attachments/assets/3e34fa5b-dbd2-4519-a2c9-a5480afdbf15" width="800"/>
</p>

---

## ⚠️ Disclaimer

```
This project is for educational and research purposes only.
Do not use in ways that violate game terms of service.
```

---

## 🧠 Notes

- Works with **IL2CPP (GameAssembly.dll)** games
- Offsets change after updates
- Always validate memory addresses before use
