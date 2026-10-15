/*
 * FUN_180012b60 at 180012b60
 * undefined __fastcall FUN_180012b60(longlong * param_1, uint param_2)
 * Address ranges: 180012b60-180012be1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012b60(longlong *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(float *)(param_1 + 0x59c) = (float)(param_2 >> 0x18);
  *(float *)((longlong)param_1 + 0x2ce4) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(param_1 + 0x59d) = (float)(param_2 >> 8 & 0xff);
  *(float *)((longlong)param_1 + 0x2cec) = (float)(param_2 & 0xff);
  return;
}

