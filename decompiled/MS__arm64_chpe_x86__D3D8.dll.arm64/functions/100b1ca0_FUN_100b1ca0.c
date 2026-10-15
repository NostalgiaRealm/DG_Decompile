/*
 * FUN_100b1ca0 at 100b1ca0
 * undefined FUN_100b1ca0(void)
 * Address ranges: 100b1ca0-100b1edb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b1ca0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar9 = 0x8876086c;
  if (((*(uint *)(param_1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar6 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar6 == 0) {
      FUN_10006560(0);
    }
  }
  iVar6 = 0;
  if (param_2 != 0) {
    iVar6 = param_2 + -0x5c;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = param_3 + -0x5c;
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x18);
    bVar4 = 1;
  }
  else {
    bVar4 = FUN_1000a6a0(param_1,iVar6);
  }
  iVar8 = iVar2;
  if (iVar2 != 0) {
    iVar8 = *(int *)(iVar2 + 0x3c);
    iVar1 = *(int *)(iVar6 + 0x3c);
    bVar5 = FUN_1000a700(param_1,iVar2);
    if (iVar1 != iVar8) {
      bVar5 = 0;
    }
    bVar4 = bVar5 & bVar4;
    iVar8 = 0;
    if (((*(uint *)(*(int *)(iVar2 + 4) + 0xb8) ^ *(uint *)(*(int *)(iVar6 + 4) + 0xb8)) & 1) == 0)
    {
      iVar8 = iVar2;
    }
  }
  if (bVar4 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x28);
    *(byte *)(param_1 + 0xa00) = *(int *)(iVar6 + 0x1c) != 0 | *(byte *)(param_1 + 0xa00);
    uVar7 = FUN_10022ec0(param_1,iVar6,iVar8,1,0);
    if ((uVar7 & 1) != 0) {
      FUN_1000a740(param_1,iVar6);
      if (iVar2 != 0) {
        FUN_1000a7c0(param_1,iVar2);
      }
      if (((iVar8 != 0) && (FUN_1000a740(param_1,iVar8), *(int *)(*(int *)(iVar8 + 4) + 0x60) != -1)
          ) && (*(int *)(iVar8 + 0x1c) != 0)) {
        *(undefined1 *)(*(int *)(iVar8 + 0x1c) + 0x32) = 1;
      }
      if (iVar1 != 0) {
        FUN_1000a7c0(param_1,iVar1);
      }
      uVar9 = 0;
    }
  }
  if (bVar3) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar9;
}

