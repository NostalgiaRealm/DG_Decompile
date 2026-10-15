/*
 * FUN_180012f1c at 180012f1c
 * undefined __fastcall FUN_180012f1c(longlong * param_1, uint param_2)
 * Address ranges: 180012f1c-180012fa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012f1c(longlong *param_1,uint param_2)

{
  if (*(int *)((longlong)param_1 + 0x2a04) != 0) {
    (**(code **)(*param_1 + 0x2e0))();
    *(undefined1 *)(param_1 + 0x65e) = 1;
  }
  *(float *)(param_1 + 0x5a2) = (float)(param_2 >> 0x18) / 255.0;
  *(float *)((longlong)param_1 + 0x2d14) = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  *(float *)(param_1 + 0x5a3) = (float)(param_2 >> 8 & 0xff) / 255.0;
  return;
}

