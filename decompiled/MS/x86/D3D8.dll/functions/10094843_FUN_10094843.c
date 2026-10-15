/*
 * FUN_10094843 at 10094843
 * undefined __fastcall FUN_10094843(int param_1)
 * Address ranges: 10094843-100948ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10094843(int param_1)

{
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    (**(code **)(param_1 + 0x2d0))(1);
  }
  if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  FUN_100a0447(param_1);
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

