/*
 * FUN_1008c910 at 1008c910
 * undefined FUN_1008c910(void)
 * Address ranges: 1008c910-1008c963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008c910(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_1008c590(param_1,*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x54),param_2,param_3,
                 *(int *)(param_1 + 0x60) + (param_2 + *(int *)(param_1 + 0x2c) * param_3) * 0x1c +
                 0xc);
    return;
  }
  return;
}

