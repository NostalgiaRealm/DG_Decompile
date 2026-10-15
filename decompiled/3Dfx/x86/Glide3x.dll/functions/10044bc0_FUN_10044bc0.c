/*
 * FUN_10044bc0 at 10044bc0
 * undefined __fastcall FUN_10044bc0(int param_1)
 * Address ranges: 10044bc0-10044c29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10044bc0(int param_1)

{
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    (**(code **)(param_1 + 0x2d0))(1);
  }
  if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  FUN_10049a18(param_1);
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

