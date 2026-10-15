/*
 * FUN_180036a90 at 180036a90
 * undefined __fastcall FUN_180036a90(longlong * param_1, uint param_2)
 * Address ranges: 180036a90-180036b1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036a90(longlong *param_1,uint param_2)

{
  if (*(int *)((longlong)param_1 + 0x298c) != 0) {
    (**(code **)(*param_1 + 0x2a0))();
    *(undefined1 *)(param_1 + 0x62e) = 1;
  }
  *(float *)(param_1 + 0x58e) = (float)(param_2 >> 0x18) / 255.0;
  *(float *)((longlong)param_1 + 0x2c74) = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  *(float *)(param_1 + 0x58f) = (float)(param_2 >> 8 & 0xff) / 255.0;
  return;
}

