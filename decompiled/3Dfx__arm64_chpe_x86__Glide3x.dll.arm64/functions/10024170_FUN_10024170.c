/*
 * FUN_10024170 at 10024170
 * undefined FUN_10024170(void)
 * Address ranges: 10024170-10024223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024170(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[0xb];
  iVar3 = param_1[0xc];
  FUN_1002e3d0(iVar1 + 0x3f50,0,0);
  if (param_1 + 1 != (int *)0x0) {
    FUN_10067468(*(undefined4 *)(*(int *)(iVar1 + 0x3308) + 0x1304),*(undefined4 *)(iVar1 + 0x3328),
                 *(int *)(iVar1 + 0x3308) + 0x1430,param_1 + 1,iVar2);
  }
  uVar4 = 3;
  do {
    FUN_100374c0(iVar1,uVar4,iVar2,iVar3 + iVar2);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  return;
}

