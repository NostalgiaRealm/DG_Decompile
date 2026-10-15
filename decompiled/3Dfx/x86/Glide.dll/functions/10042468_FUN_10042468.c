/*
 * FUN_10042468 at 10042468
 * undefined __fastcall FUN_10042468(int param_1)
 * Address ranges: 10042468-100424d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10042468(int param_1)

{
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    (**(code **)(param_1 + 0x2d0))(1);
  }
  if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  FUN_100472c0(param_1);
  if (*(HMODULE *)(param_1 + 0x2b8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x2b8));
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  if (*(HMODULE *)(param_1 + 0x29c) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x29c));
    *(undefined4 *)(param_1 + 0x29c) = 0;
  }
  return;
}

