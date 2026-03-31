#pragma once
// ============================================================================
// IL2CPP Runtime Method Resolution
// For Pixel Worlds (Unity IL2CPP)
// ============================================================================

#include <cstdint>
#include <string>
#include <Windows.h>

// ============================================================================
// IL2CPP Type Definitions
// ============================================================================

typedef void        Il2CppDomain;
typedef void        Il2CppAssembly;
typedef void        Il2CppImage;
typedef void        Il2CppClass;
typedef void        Il2CppMethodInfo;
typedef void        Il2CppFieldInfo;
typedef void        Il2CppType;
typedef void        Il2CppObject;
typedef void        Il2CppString;
typedef void        Il2CppArray;
typedef void        Il2CppThread;

// ============================================================================
// IL2CPP API Function Pointers
// ============================================================================

namespace IL2CPP
{
    // --- Domain ---
    typedef Il2CppDomain*    (*il2cpp_domain_get_t)();
    typedef Il2CppAssembly** (*il2cpp_domain_get_assemblies_t)(Il2CppDomain* domain, size_t* count);

    // --- Assembly ---
    typedef Il2CppImage*     (*il2cpp_assembly_get_image_t)(Il2CppAssembly* assembly);

    // --- Image ---
    typedef Il2CppClass*     (*il2cpp_class_from_name_t)(Il2CppImage* image, const char* namespaze, const char* name);

    // --- Class ---
    typedef Il2CppMethodInfo* (*il2cpp_class_get_method_from_name_t)(Il2CppClass* klass, const char* name, int argsCount);
    typedef Il2CppFieldInfo*  (*il2cpp_class_get_field_from_name_t)(Il2CppClass* klass, const char* name);
    typedef Il2CppMethodInfo* (*il2cpp_class_get_methods_t)(Il2CppClass* klass, void** iter);
    typedef Il2CppFieldInfo*  (*il2cpp_class_get_fields_t)(Il2CppClass* klass, void** iter);
    typedef Il2CppType*       (*il2cpp_class_get_type_t)(Il2CppClass* klass);
    typedef const char*       (*il2cpp_class_get_name_t)(Il2CppClass* klass);
    typedef const char*       (*il2cpp_class_get_namespace_t)(Il2CppClass* klass);
    typedef Il2CppClass*      (*il2cpp_class_get_parent_t)(Il2CppClass* klass);
    typedef Il2CppClass*      (*il2cpp_class_from_type_t)(Il2CppType* type);
    typedef int               (*il2cpp_class_get_field_count_t)(Il2CppClass* klass);
    typedef Il2CppObject*     (*il2cpp_class_get_static_field_data_t)(Il2CppClass* klass);

    // --- Field ---
    typedef size_t            (*il2cpp_field_get_offset_t)(Il2CppFieldInfo* field);
    typedef const char*       (*il2cpp_field_get_name_t)(Il2CppFieldInfo* field);
    typedef void              (*il2cpp_field_get_value_t)(Il2CppObject* obj, Il2CppFieldInfo* field, void* value);
    typedef void              (*il2cpp_field_set_value_t)(Il2CppObject* obj, Il2CppFieldInfo* field, void* value);
    typedef void              (*il2cpp_field_static_get_value_t)(Il2CppFieldInfo* field, void* value);
    typedef void              (*il2cpp_field_static_set_value_t)(Il2CppFieldInfo* field, void* value);

    // --- Method ---
    typedef const char*       (*il2cpp_method_get_name_t)(Il2CppMethodInfo* method);
    typedef int               (*il2cpp_method_get_param_count_t)(Il2CppMethodInfo* method);
    typedef Il2CppType*       (*il2cpp_method_get_return_type_t)(Il2CppMethodInfo* method);

    // --- Object ---
    typedef Il2CppObject*     (*il2cpp_object_new_t)(Il2CppClass* klass);
    typedef void*             (*il2cpp_object_unbox_t)(Il2CppObject* obj);

    // --- String ---
    typedef Il2CppString*     (*il2cpp_string_new_t)(const char* str);
    typedef Il2CppString*     (*il2cpp_string_new_utf16_t)(const wchar_t* str, int len);
    typedef char*             (*il2cpp_string_chars_t)(Il2CppString* str);
    typedef int               (*il2cpp_string_length_t)(Il2CppString* str);

    // --- Type ---
    typedef Il2CppClass*      (*il2cpp_type_get_class_or_element_class_t)(Il2CppType* type);
    typedef const char*       (*il2cpp_type_get_name_t)(Il2CppType* type);

    // --- Thread ---
    typedef Il2CppThread*     (*il2cpp_thread_attach_t)(Il2CppDomain* domain);
    typedef void              (*il2cpp_thread_detach_t)(Il2CppThread* thread);

    // --- Runtime ---
    typedef Il2CppObject*     (*il2cpp_runtime_invoke_t)(Il2CppMethodInfo* method, void* obj, void** params, Il2CppObject** exc);
    typedef void              (*il2cpp_runtime_class_init_t)(Il2CppClass* klass);

    // --- Array ---
    typedef Il2CppArray*      (*il2cpp_array_new_t)(Il2CppClass* elementTypeInfo, uintptr_t length);
    typedef int               (*il2cpp_array_length_t)(Il2CppArray* array);

    // --- GC ---
    typedef void              (*il2cpp_gc_disable_t)();
    typedef void              (*il2cpp_gc_enable_t)();

    // ========================================================================
    // Function pointer instances
    // ========================================================================

    inline il2cpp_domain_get_t                     domain_get;
    inline il2cpp_domain_get_assemblies_t           domain_get_assemblies;
    inline il2cpp_assembly_get_image_t              assembly_get_image;
    inline il2cpp_class_from_name_t                 class_from_name;
    inline il2cpp_class_get_method_from_name_t      class_get_method_from_name;
    inline il2cpp_class_get_field_from_name_t       class_get_field_from_name;
    inline il2cpp_class_get_methods_t               class_get_methods;
    inline il2cpp_class_get_fields_t                class_get_fields;
    inline il2cpp_class_get_type_t                  class_get_type;
    inline il2cpp_class_get_name_t                  class_get_name;
    inline il2cpp_class_get_namespace_t             class_get_namespace;
    inline il2cpp_class_get_parent_t                class_get_parent;
    inline il2cpp_class_from_type_t                 class_from_type;
    inline il2cpp_class_get_field_count_t            class_get_field_count;
    inline il2cpp_class_get_static_field_data_t     class_get_static_field_data;
    inline il2cpp_field_get_offset_t                field_get_offset;
    inline il2cpp_field_get_name_t                  field_get_name;
    inline il2cpp_field_get_value_t                 field_get_value;
    inline il2cpp_field_set_value_t                 field_set_value;
    inline il2cpp_field_static_get_value_t          field_static_get_value;
    inline il2cpp_field_static_set_value_t          field_static_set_value;
    inline il2cpp_method_get_name_t                 method_get_name;
    inline il2cpp_method_get_param_count_t          method_get_param_count;
    inline il2cpp_method_get_return_type_t          method_get_return_type;
    inline il2cpp_object_new_t                      object_new;
    inline il2cpp_object_unbox_t                    object_unbox;
    inline il2cpp_string_new_t                      string_new;
    inline il2cpp_string_new_utf16_t                string_new_utf16;
    inline il2cpp_string_chars_t                    string_chars;
    inline il2cpp_string_length_t                   string_length;
    inline il2cpp_type_get_class_or_element_class_t type_get_class;
    inline il2cpp_type_get_name_t                   type_get_name;
    inline il2cpp_thread_attach_t                   thread_attach;
    inline il2cpp_thread_detach_t                   thread_detach;
    inline il2cpp_runtime_invoke_t                  runtime_invoke;
    inline il2cpp_runtime_class_init_t              runtime_class_init;
    inline il2cpp_array_new_t                       array_new;
    inline il2cpp_array_length_t                    array_length;
    inline il2cpp_gc_disable_t                      gc_disable;
    inline il2cpp_gc_enable_t                       gc_enable;

    // ========================================================================
    // GameAssembly.dll base address
    // ========================================================================
    inline uintptr_t gameAssemblyBase = 0;

    // ========================================================================
    // Initialize - call once from DllMain or init thread
    // ========================================================================
    inline bool Initialize()
    {
        HMODULE hModule = GetModuleHandleA("GameAssembly.dll");
        if (!hModule)
            return false;

        gameAssemblyBase = reinterpret_cast<uintptr_t>(hModule);

        #define RESOLVE(name) \
            name = reinterpret_cast<decltype(name)>(GetProcAddress(hModule, "il2cpp_" #name)); \
            if (!name) return false;

        // Remap names to match il2cpp exports
        domain_get                  = reinterpret_cast<il2cpp_domain_get_t>(GetProcAddress(hModule, "il2cpp_domain_get"));
        domain_get_assemblies       = reinterpret_cast<il2cpp_domain_get_assemblies_t>(GetProcAddress(hModule, "il2cpp_domain_get_assemblies"));
        assembly_get_image          = reinterpret_cast<il2cpp_assembly_get_image_t>(GetProcAddress(hModule, "il2cpp_assembly_get_image"));
        class_from_name             = reinterpret_cast<il2cpp_class_from_name_t>(GetProcAddress(hModule, "il2cpp_class_from_name"));
        class_get_method_from_name  = reinterpret_cast<il2cpp_class_get_method_from_name_t>(GetProcAddress(hModule, "il2cpp_class_get_method_from_name"));
        class_get_field_from_name   = reinterpret_cast<il2cpp_class_get_field_from_name_t>(GetProcAddress(hModule, "il2cpp_class_get_field_from_name"));
        class_get_methods           = reinterpret_cast<il2cpp_class_get_methods_t>(GetProcAddress(hModule, "il2cpp_class_get_methods"));
        class_get_fields            = reinterpret_cast<il2cpp_class_get_fields_t>(GetProcAddress(hModule, "il2cpp_class_get_fields"));
        class_get_type              = reinterpret_cast<il2cpp_class_get_type_t>(GetProcAddress(hModule, "il2cpp_class_get_type"));
        class_get_name              = reinterpret_cast<il2cpp_class_get_name_t>(GetProcAddress(hModule, "il2cpp_class_get_name"));
        class_get_namespace         = reinterpret_cast<il2cpp_class_get_namespace_t>(GetProcAddress(hModule, "il2cpp_class_get_namespace"));
        class_get_parent            = reinterpret_cast<il2cpp_class_get_parent_t>(GetProcAddress(hModule, "il2cpp_class_get_parent"));
        class_from_type             = reinterpret_cast<il2cpp_class_from_type_t>(GetProcAddress(hModule, "il2cpp_class_from_type"));
        class_get_field_count       = reinterpret_cast<il2cpp_class_get_field_count_t>(GetProcAddress(hModule, "il2cpp_class_get_field_count"));
        field_get_offset            = reinterpret_cast<il2cpp_field_get_offset_t>(GetProcAddress(hModule, "il2cpp_field_get_offset"));
        field_get_name              = reinterpret_cast<il2cpp_field_get_name_t>(GetProcAddress(hModule, "il2cpp_field_get_name"));
        field_get_value             = reinterpret_cast<il2cpp_field_get_value_t>(GetProcAddress(hModule, "il2cpp_field_get_value"));
        field_set_value             = reinterpret_cast<il2cpp_field_set_value_t>(GetProcAddress(hModule, "il2cpp_field_set_value"));
        field_static_get_value      = reinterpret_cast<il2cpp_field_static_get_value_t>(GetProcAddress(hModule, "il2cpp_field_static_get_value"));
        field_static_set_value      = reinterpret_cast<il2cpp_field_static_set_value_t>(GetProcAddress(hModule, "il2cpp_field_static_set_value"));
        method_get_name             = reinterpret_cast<il2cpp_method_get_name_t>(GetProcAddress(hModule, "il2cpp_method_get_name"));
        method_get_param_count      = reinterpret_cast<il2cpp_method_get_param_count_t>(GetProcAddress(hModule, "il2cpp_method_get_param_count"));
        method_get_return_type      = reinterpret_cast<il2cpp_method_get_return_type_t>(GetProcAddress(hModule, "il2cpp_method_get_return_type"));
        object_new                  = reinterpret_cast<il2cpp_object_new_t>(GetProcAddress(hModule, "il2cpp_object_new"));
        object_unbox                = reinterpret_cast<il2cpp_object_unbox_t>(GetProcAddress(hModule, "il2cpp_object_unbox"));
        string_new                  = reinterpret_cast<il2cpp_string_new_t>(GetProcAddress(hModule, "il2cpp_string_new"));
        string_new_utf16            = reinterpret_cast<il2cpp_string_new_utf16_t>(GetProcAddress(hModule, "il2cpp_string_new_utf16"));
        thread_attach               = reinterpret_cast<il2cpp_thread_attach_t>(GetProcAddress(hModule, "il2cpp_thread_attach"));
        thread_detach               = reinterpret_cast<il2cpp_thread_detach_t>(GetProcAddress(hModule, "il2cpp_thread_detach"));
        runtime_invoke              = reinterpret_cast<il2cpp_runtime_invoke_t>(GetProcAddress(hModule, "il2cpp_runtime_invoke"));
        runtime_class_init          = reinterpret_cast<il2cpp_runtime_class_init_t>(GetProcAddress(hModule, "il2cpp_runtime_class_init"));
        array_new                   = reinterpret_cast<il2cpp_array_new_t>(GetProcAddress(hModule, "il2cpp_array_new"));
        gc_disable                  = reinterpret_cast<il2cpp_gc_disable_t>(GetProcAddress(hModule, "il2cpp_gc_disable"));
        gc_enable                   = reinterpret_cast<il2cpp_gc_enable_t>(GetProcAddress(hModule, "il2cpp_gc_enable"));

        #undef RESOLVE

        // Verify critical functions resolved
        if (!domain_get || !class_from_name || !class_get_method_from_name)
            return false;

        // Attach to IL2CPP thread
        auto domain = domain_get();
        if (domain)
            thread_attach(domain);

        return true;
    }

    // ========================================================================
    // Helper: Resolve RVA to absolute address
    // Use with offsets from offsets.h Methods namespaces
    // ========================================================================
    inline uintptr_t RVA(uintptr_t rva)
    {
        return gameAssemblyBase + rva;
    }

    // ========================================================================
    // Helper: Get Il2CppImage for Assembly-CSharp.dll
    // ========================================================================
    inline Il2CppImage* GetAssemblyCSharpImage()
    {
        auto domain = domain_get();
        if (!domain) return nullptr;

        size_t count = 0;
        auto assemblies = domain_get_assemblies(domain, &count);

        for (size_t i = 0; i < count; i++)
        {
            auto image = assembly_get_image(assemblies[i]);
            // Assembly-CSharp is always a good bet for game classes
            // You can also iterate and check names
            if (image)
                return image; // First image is typically Assembly-CSharp
        }
        return nullptr;
    }

    // ========================================================================
    // Helper: Get class by name (searches in empty namespace by default)
    // ========================================================================
    inline Il2CppClass* GetClass(const char* className, const char* nameSpace = "")
    {
        auto image = GetAssemblyCSharpImage();
        if (!image) return nullptr;
        return class_from_name(image, nameSpace, className);
    }

    // ========================================================================
    // Helper: Read field value from an object using offset
    // ========================================================================
    template<typename T>
    inline T Read(void* object, uintptr_t offset)
    {
        return *reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(object) + offset);
    }

    // ========================================================================
    // Helper: Write field value to an object using offset
    // ========================================================================
    template<typename T>
    inline void Write(void* object, uintptr_t offset, T value)
    {
        *reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(object) + offset) = value;
    }

    // ========================================================================
    // Helper: Call a method by RVA with a typed function pointer
    // Usage: auto result = IL2CPP::Call<float>(Offsets::Player::Methods::GetRunSpeed, playerInstance);
    // ========================================================================
    template<typename ReturnType, typename... Args>
    inline ReturnType Call(uintptr_t rva, Args... args)
    {
        typedef ReturnType(*FnPtr)(Args...);
        auto fn = reinterpret_cast<FnPtr>(RVA(rva));
        return fn(args...);
    }

    // ========================================================================
    // Helper: Get Il2CppString as std::string
    // ========================================================================
    inline std::string Il2CppStringToStd(void* il2cppStr)
    {
        if (!il2cppStr) return "";

        // Il2CppString layout: [Il2CppObject header 0x10] [int length 0x10] [wchar_t chars[] 0x14]
        int len = *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(il2cppStr) + 0x10);
        wchar_t* chars = reinterpret_cast<wchar_t*>(reinterpret_cast<uintptr_t>(il2cppStr) + 0x14);

        if (len <= 0 || !chars) return "";

        // Convert wide to narrow
        std::string result;
        result.reserve(len);
        for (int i = 0; i < len; i++)
            result += static_cast<char>(chars[i]);

        return result;
    }

    // ========================================================================
    // Helper: Get wide string from Il2CppString
    // ========================================================================
    inline std::wstring Il2CppStringToWide(void* il2cppStr)
    {
        if (!il2cppStr) return L"";

        int len = *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(il2cppStr) + 0x10);
        wchar_t* chars = reinterpret_cast<wchar_t*>(reinterpret_cast<uintptr_t>(il2cppStr) + 0x14);

        if (len <= 0 || !chars) return L"";
        return std::wstring(chars, len);
    }
}
