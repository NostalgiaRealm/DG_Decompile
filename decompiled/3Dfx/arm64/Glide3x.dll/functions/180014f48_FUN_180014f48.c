/*
 * FUN_180014f48 at 180014f48
 * undefined __cdecl FUN_180014f48(longlong * param_1, uint param_2)
 * Address ranges: 180014f48-180014f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014f48(longlong *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(uint *)(param_1 + 0x541) = param_2 & 0xff;
  *(uint *)((longlong)param_1 + 0x2cdc) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

