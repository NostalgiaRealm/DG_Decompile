/*
 * FUN_180036104 at 180036104
 * undefined __fastcall FUN_180036104(longlong * param_1, byte param_2)
 * Address ranges: 180036104-18003614d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036104(longlong *param_1,byte param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(float *)((longlong)param_1 + 0x2ca4) = (float)param_2;
  *(float *)((longlong)param_1 + 0x2c6c) = (float)param_2 / 255.0;
  return;
}

