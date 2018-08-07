

#ifdef _WIN32
#define __DLLEXPORT __declspec(dllexport)
#else
#define __DLLEXPORT __attribute__((visibility("default")))
#endif

#ifdef __cplusplus
extern "C"
{
#endif

    __DLLEXPORT int hanz2pinyin(const char* in, int size, char* out);

#ifdef __cplusplus
};
#endif
