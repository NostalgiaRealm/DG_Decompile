/*
 * FUN_180036188 at 180036188
 * char __fastcall FUN_180036188(longlong * param_1, byte param_2)
 * Address ranges: 180036188-1800361c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180036188(longlong *param_1,byte param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(uint *)(param_1 + 0x532) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(uint *)((longlong)param_1 + 0x2c3c) = -(uint)(param_2 != 0);
  return -param_2;
}

