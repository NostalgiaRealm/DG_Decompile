/*
 * FUN_10014c50 at 10014c50
 * undefined FUN_10014c50(void)
 * Address ranges: 10014c50-10014d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014c50(int param_1)

{
  FUN_10014978(param_1);
  FUN_10013830(param_1,1);
  *(undefined4 *)(param_1 + 0x2c34) = *(undefined4 *)(param_1 + 0x2c04);
  *(undefined4 *)(param_1 + 0x2c38) = *(undefined4 *)(param_1 + 0x2c08);
  *(undefined8 *)(param_1 + 0x2c40) = *(undefined8 *)(param_1 + 0x2c10);
  *(undefined4 *)(param_1 + 0x2c48) = *(undefined4 *)(param_1 + 0x2c18);
  *(undefined4 *)(param_1 + 0x2c4c) = *(undefined4 *)(param_1 + 0x2c1c);
  FUN_10013748(param_1);
  (*(code *)PTR_FUN_100a0090)(*(int *)(param_1 + 0x3300) + 0x4a0);
  return;
}

