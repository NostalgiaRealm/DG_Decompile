/*
 * FUN_10007f70 at 10007f70
 * undefined FUN_10007f70(void)
 * Address ranges: 10007f70-1000800b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007f70(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_100215a0(param_1,param_2,0x8876086c);
  if (-1 < iVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x210) + *param_2 * 4 + -4);
    FUN_1000af50(param_1,param_1 + 0x53b0,iVar1 + 0x8a54,*(undefined4 *)(param_1 + 0xb10));
    FUN_1000af50(param_1,param_1 + 0x57b0,iVar1 + 0x9258,8);
  }
  return iVar2;
}

