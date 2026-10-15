/*
 * FUN_180036224 at 180036224
 * undefined __fastcall FUN_180036224(longlong * param_1, uint param_2)
 * Address ranges: 180036224-1800362a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036224(longlong *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(float *)(param_1 + 0x588) = (float)(param_2 >> 0x18);
  *(float *)((longlong)param_1 + 0x2c44) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(param_1 + 0x589) = (float)(param_2 >> 8 & 0xff);
  *(float *)((longlong)param_1 + 0x2c4c) = (float)(param_2 & 0xff);
  return;
}

