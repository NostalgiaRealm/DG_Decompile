/*
 * FUN_100b22d0 at 100b22d0
 * undefined FUN_100b22d0(void)
 * Address ranges: 100b22d0-100b23db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100b22d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar3 == 0) {
      FUN_10006560(0);
    }
  }
  iVar3 = 0;
  if (param_5 != 0) {
    iVar3 = param_5 + -0x5c;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + -0x5c;
  }
  uVar4 = FUN_100091b0(param_1 + -0x58e0,iVar1,param_3,param_4,iVar3,param_6);
  if (bVar2) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar4;
}

