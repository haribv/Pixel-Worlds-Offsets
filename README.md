# Pixel-Worlds-Offsets

Classes 
{

  Player
  PlayerData
  
  World
  WorldController
  
  CharacterController2D
  ChatClient/Message
  
  AIEnemyMonoBehaviourBase
  PixelPerfectCamera
  
}

il2cpp_helper
  {
  
  All IL2CPP API typedefs (domain, assembly, class, field, method, object, string, thread, GC)
  
  Initialize() — resolves all exports from GameAssembly.dll + attaches thread
  
  RVA() — converts dump RVA offsets to absolute addresses
  
  Read<T>() / Write<T>() — read/write fields by offset
  
  Call<ReturnType>(rva, args...) — call any method directly by RVA
  
  Il2CppStringToStd() — convert game strings to std::string

  <img width="831" height="401" alt="image" src="https://github.com/user-attachments/assets/3e34fa5b-dbd2-4519-a2c9-a5480afdbf15" />

  }
