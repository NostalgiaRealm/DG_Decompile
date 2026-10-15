/*
 * FUN_1001f5d0 at 1001f5d0
 * undefined FUN_1001f5d0(void)
 * Address ranges: 1001f5d0-1001f657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001f5d0(int param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x7c) * 0x228;
  iVar1 = *param_3;
  iVar2 = *(int *)(&DAT_1017155c + iVar3);
  if (iVar1 == iVar2 && iVar2 != 0) {
    FUN_1003b2b8(*(int *)(param_1 + 0x7c),param_2,iVar1,param_4);
  }
  if (*param_4 == 1) {
    FUN_1003c008(*(undefined4 *)(&DAT_10171558 + iVar3));
  }
  return iVar1 == iVar2 && iVar2 != 0;
}

