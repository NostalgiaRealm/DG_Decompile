/*
 * FUN_1001a270 at 1001a270
 * undefined FUN_1001a270(void)
 * Address ranges: 1001a270-1001a2f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001a270(int param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x7c) * 0x228;
  iVar1 = *param_3;
  iVar2 = *(int *)(&DAT_1013899c + iVar3);
  if (iVar1 == iVar2 && iVar2 != 0) {
    FUN_100313e8(*(int *)(param_1 + 0x7c),param_2,iVar1,param_4);
  }
  if (*param_4 == 1) {
    FUN_10032138(*(undefined4 *)(&DAT_10138998 + iVar3));
  }
  return iVar1 == iVar2 && iVar2 != 0;
}

