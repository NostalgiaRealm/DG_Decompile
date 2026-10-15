/*
 * FUN_18000a754 at 18000a754
 * undefined __fastcall FUN_18000a754(longlong * param_1, byte param_2)
 * Address ranges: 18000a754-18000a78d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a754(longlong *param_1,byte param_2)

{
  if (*(uint *)(param_1[0x661] + 0x168) != (uint)param_2) {
    *(uint *)(param_1[0x661] + 0x168) = (uint)param_2;
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x2c7c) = 1;
  }
  return;
}

