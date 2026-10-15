/*
 * FUN_180006a98 at 180006a98
 * undefined8 __cdecl FUN_180006a98(longlong param_1, ulonglong param_2)
 * Address ranges: 180006a98-180006b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180006a98(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x3c0));
    CloseHandle(*(HANDLE *)(param_1 + 0x3c8));
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    if ((param_2 & 1) != 0) {
      thunk_FUN_1800010d8((undefined8 *)(param_1 + 0x5dc),(undefined8 *)(param_1 + 0x3d0),0x20c);
      *(undefined1 *)(param_1 + 0x7e9) = 1;
      return 1;
    }
  }
  return 0;
}

