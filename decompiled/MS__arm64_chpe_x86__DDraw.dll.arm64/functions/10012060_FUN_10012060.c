/*
 * FUN_10012060 at 10012060
 * undefined FUN_10012060(void)
 * Address ranges: 10012060-100120b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012060(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_10011ce0(param_1,*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x54),param_2,param_3,
                 *(int *)(param_1 + 0x60) + (param_2 + *(int *)(param_1 + 0x2c) * param_3) * 0x1c +
                 0xc);
    return;
  }
  return;
}

