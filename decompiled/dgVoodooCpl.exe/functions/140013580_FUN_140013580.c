/*
 * FUN_140013580 at 140013580
 * undefined __fastcall FUN_140013580(longlong param_1)
 * Address ranges: 140013580-1400135f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140013580(longlong param_1)

{
  if (*(char *)(param_1 + 0x300) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x10))();
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x290) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x290));
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
    *(undefined1 *)(param_1 + 0x300) = 0;
  }
  return;
}

