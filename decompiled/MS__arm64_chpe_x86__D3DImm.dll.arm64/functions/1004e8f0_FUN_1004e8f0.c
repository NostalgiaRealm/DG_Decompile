/*
 * FUN_1004e8f0 at 1004e8f0
 * undefined FUN_1004e8f0(void)
 * Address ranges: 1004e8f0-1004ea0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004e8f0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != 0) {
    iVar1 = FUN_100627f0(iVar1,param_4,param_5,param_6);
    goto LAB_1004e9dc;
  }
  iVar1 = -0x7ff8fff2;
  iVar2 = FUN_10081cb0(0x1f00);
  if (iVar2 == 0) {
LAB_1004e9b8:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10061b20(iVar2,param_2,param_3);
    if ((iVar2 != 0) &&
       ((iVar1 = FUN_10061e20(iVar2,param_4), iVar1 != 0 ||
        (iVar1 = FUN_100627f0(iVar2,param_4,param_5,param_6), iVar1 != 0)))) {
      FUN_10061c60(iVar2);
      FUN_10081d50(iVar2,0x1f00);
      goto LAB_1004e9b8;
    }
  }
  *(int *)(param_2 + 0xc) = iVar2;
LAB_1004e9dc:
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar1;
}

