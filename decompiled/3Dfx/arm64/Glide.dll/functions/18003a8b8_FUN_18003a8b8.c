/*
 * FUN_18003a8b8 at 18003a8b8
 * undefined __cdecl FUN_18003a8b8(longlong * param_1, uint param_2)
 * Address ranges: 18003a8b8-18003a91f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a8b8(longlong *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(float *)(param_1 + 0x588) = (float)(param_2 >> 0x18);
  *(float *)((longlong)param_1 + 0x2c44) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(param_1 + 0x589) = (float)(param_2 >> 8 & 0xff);
  *(float *)((longlong)param_1 + 0x2c4c) = (float)(param_2 & 0xff);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

