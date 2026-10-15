/*
 * FUN_10014d20 at 10014d20
 * undefined FUN_10014d20(void)
 * Address ranges: 10014d20-10014dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014d20(int param_1)

{
  FUN_10014978(param_1);
  FUN_10013830(param_1,1);
  *(undefined4 *)(param_1 + 0x2c2c) = *(undefined4 *)(param_1 + 0x2bfc);
  *(undefined4 *)(param_1 + 0x2c28) = *(undefined4 *)(param_1 + 0x2bf8);
  *(undefined4 *)(param_1 + 0x2c30) = *(undefined4 *)(param_1 + 0x2c00);
  *(undefined4 *)(param_1 + 0x2c50) = *(undefined4 *)(param_1 + 0x2c20);
  FUN_10013748(param_1);
  (*(code *)PTR_FUN_100a0090)(*(int *)(param_1 + 0x3300) + 0x4a0);
  return;
}

