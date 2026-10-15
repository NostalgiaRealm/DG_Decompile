/*
 * FUN_100bd0f0 at 100bd0f0
 * undefined FUN_100bd0f0(void)
 * Address ranges: 100bd0f0-100bd14b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100bd0f0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + -0x128);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar1 + 0x4c;
  }
  *param_2 = iVar2;
  iVar2 = *(int *)(param_1 + -0x128);
  if (iVar2 != 0) {
    FUN_100bdc80(iVar2 + 0x4c);
  }
  *param_3 = *(undefined4 *)(param_1 + 0x68);
  return 0;
}

