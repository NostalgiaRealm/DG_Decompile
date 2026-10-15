/*
 * FUN_180014ff0 at 180014ff0
 * undefined __cdecl FUN_180014ff0(longlong * param_1, uint param_2)
 * Address ranges: 180014ff0-180015057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014ff0(longlong *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(float *)(param_1 + 0x59c) = (float)(param_2 >> 0x18);
  *(float *)((longlong)param_1 + 0x2ce4) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(param_1 + 0x59d) = (float)(param_2 >> 8 & 0xff);
  *(float *)((longlong)param_1 + 0x2cec) = (float)(param_2 & 0xff);
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

