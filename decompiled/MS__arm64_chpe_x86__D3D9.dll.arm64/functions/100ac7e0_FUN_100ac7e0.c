/*
 * FUN_100ac7e0 at 100ac7e0
 * undefined FUN_100ac7e0(void)
 * Address ranges: 100ac7e0-100ac833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ac7e0(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_100ac460(param_1,*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x54),param_2,param_3,
                 *(int *)(param_1 + 0x60) + (param_2 + *(int *)(param_1 + 0x2c) * param_3) * 0x1c +
                 0xc);
    return;
  }
  return;
}

