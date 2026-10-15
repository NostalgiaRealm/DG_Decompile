/*
 * FUN_18000cdc8 at 18000cdc8
 * undefined __cdecl FUN_18000cdc8(longlong * param_1, uint param_2)
 * Address ranges: 18000cdc8-18000ce13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cdc8(longlong *param_1,uint param_2)

{
  if (*(uint *)(param_1[0x661] + 0x168) != (param_2 & 0xff)) {
    *(uint *)(param_1[0x661] + 0x168) = param_2 & 0xff;
    (**(code **)(*param_1 + 0x2e0))();
    *(undefined1 *)((longlong)param_1 + 0x2c7c) = 1;
  }
  return;
}

