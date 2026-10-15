/*
 * FUN_1800077b0 at 1800077b0
 * undefined8 __cdecl FUN_1800077b0(longlong param_1, ulonglong param_2)
 * Address ranges: 1800077b0-18000782f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800077b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x3c0));
    CloseHandle(*(HANDLE *)(param_1 + 0x3c8));
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    if ((param_2 & 1) != 0) {
      thunk_FUN_180001218((undefined8 *)(param_1 + 0x5dc),(undefined8 *)(param_1 + 0x3d0),0x20c);
      *(undefined1 *)(param_1 + 0x7e9) = 1;
      return 1;
    }
  }
  return 0;
}

