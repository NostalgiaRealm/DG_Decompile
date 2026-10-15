/*
 * FUN_180014f90 at 180014f90
 * undefined __cdecl FUN_180014f90(longlong * param_1, uint param_2)
 * Address ranges: 180014f90-180014feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014f90(longlong *param_1,uint param_2)

{
  if ((int)param_1[0x541] != 0) {
    (**(code **)(*param_1 + 0x2e0))();
  }
  *(uint *)(param_1 + 0x59a) = param_2 >> 0x18;
  *(uint *)((longlong)param_1 + 0x2cd4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x59b) = param_2 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

