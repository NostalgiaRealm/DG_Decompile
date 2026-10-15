/*
 * FUN_140014980 at 140014980
 * ulonglong __cdecl FUN_140014980(ulonglong param_1)
 * Address ranges: 140014980-1400149eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140014980(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if (*(char *)(param_1 + 0x300) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x10))();
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    uVar2 = 0;
    if (*(HMODULE *)(param_1 + 0x290) != (HMODULE)0x0) {
      uVar1 = FreeLibrary(*(HMODULE *)(param_1 + 0x290));
      uVar2 = (ulonglong)uVar1;
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
    *(undefined1 *)(param_1 + 0x300) = 0;
  }
  return uVar2;
}

