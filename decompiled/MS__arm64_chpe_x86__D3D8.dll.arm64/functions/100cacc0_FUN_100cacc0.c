/*
 * FUN_100cacc0 at 100cacc0
 * undefined FUN_100cacc0(void)
 * Address ranges: 100cacc0-100cacff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100cacc0(int param_1,int param_2,int param_3,int param_4)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c
                          + 0x10) + param_4 * 8) + *(int *)(param_1 + 0x44);
}

