/*
 * FUN_100e4bd0 at 100e4bd0
 * undefined FUN_100e4bd0(void)
 * Address ranges: 100e4bd0-100e4c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100e4bd0(int param_1,int *param_2)

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
    FUN_100e5ef0(iVar2 + 0x4c);
  }
  return 0;
}

