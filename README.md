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

  

  
  }
