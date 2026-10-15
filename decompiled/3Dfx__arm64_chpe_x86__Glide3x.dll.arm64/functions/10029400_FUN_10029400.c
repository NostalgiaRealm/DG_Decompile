/*
 * FUN_10029400 at 10029400
 * undefined FUN_10029400(void)
 * Address ranges: 10029400-10029483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029400(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x2c34) = *(undefined4 *)(iVar1 + 0x2c04);
  *(undefined4 *)(iVar1 + 0x2c38) = *(undefined4 *)(iVar1 + 0x2c08);
  *(undefined8 *)(iVar1 + 0x2c40) = *(undefined8 *)(iVar1 + 0x2c10);
  *(undefined4 *)(iVar1 + 0x2c48) = *(undefined4 *)(iVar1 + 0x2c18);
  *(undefined4 *)(iVar1 + 0x2c4c) = *(undefined4 *)(iVar1 + 0x2c1c);
  return;
}

