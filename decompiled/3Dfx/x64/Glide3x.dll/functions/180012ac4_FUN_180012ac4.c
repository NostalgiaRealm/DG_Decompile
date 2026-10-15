/*
 * FUN_180012ac4 at 180012ac4
 * char __fastcall FUN_180012ac4(longlong * param_1, byte param_2)
 * Address ranges: 180012ac4-180012b02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180012ac4(longlong *param_1,byte param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(uint *)(param_1 + 0x541) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(uint *)((longlong)param_1 + 0x2cdc) = -(uint)(param_2 != 0);
  return -param_2;
}

