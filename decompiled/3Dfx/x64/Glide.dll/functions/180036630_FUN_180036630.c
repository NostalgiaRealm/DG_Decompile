/*
 * FUN_180036630 at 180036630
 * char __fastcall FUN_180036630(longlong * param_1, byte param_2)
 * Address ranges: 180036630-18003666e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180036630(longlong *param_1,byte param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(uint *)(param_1 + 0x532) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(uint *)((longlong)param_1 + 0x2c3c) = -(uint)(param_2 != 0);
  return -param_2;
}

