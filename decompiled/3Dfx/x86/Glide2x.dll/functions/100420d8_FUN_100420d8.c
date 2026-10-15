/*
 * FUN_100420d8 at 100420d8
 * undefined __fastcall FUN_100420d8(int param_1)
 * Address ranges: 100420d8-10042141
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100420d8(int param_1)

{
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    (**(code **)(param_1 + 0x2d0))(1);
  }
  if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  FUN_10046f30(param_1);
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

