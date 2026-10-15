/*
 * FUN_10074e70 at 10074e70
 * undefined FUN_10074e70(void)
 * Address ranges: 10074e70-10074f17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10074e70(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong extraout_x1;
  ulonglong uVar4;
  uint uVar5;
  int extraout_w11;
  
  uVar5 = 2;
  if (param_4 != 1) {
    uVar5 = 3;
  }
  uVar4 = (ulonglong)uVar5;
  iVar3 = FUN_10073f80(param_1,param_2);
  if ((iVar3 != -1) && (iVar3 = extraout_w11 + iVar3 * 0xc, param_3 < *(uint *)(iVar3 + 0xd4))) {
    piVar1 = (int *)(iVar3 + 0xd0);
    piVar2 = (int *)(*piVar1 + param_3 * 8);
    if ((*piVar2 == 0) || (piVar2[1] != (int)uVar4)) {
      FUN_10074108(extraout_w11,extraout_x1 & 0xffffffff,param_3,uVar4 & 0xffffffff);
    }
    return *(undefined4 *)(*piVar1 + param_3 * 8);
  }
  return 0;
}

