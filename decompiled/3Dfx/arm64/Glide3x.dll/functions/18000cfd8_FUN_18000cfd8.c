/*
 * FUN_18000cfd8 at 18000cfd8
 * undefined __cdecl FUN_18000cfd8(longlong * param_1, undefined4 param_2)
 * Address ranges: 18000cfd8-18000d017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cfd8(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_1 + 0x32c4) = param_2;
  *(undefined4 *)(param_1 + 0x546) = param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

