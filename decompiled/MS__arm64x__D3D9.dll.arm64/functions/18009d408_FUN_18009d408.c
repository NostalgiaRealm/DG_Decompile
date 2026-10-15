/*
 * FUN_18009d408 at 18009d408
 * undefined FUN_18009d408(void)
 * Address ranges: 18009d408-18009d86b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009d408(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,int param_6,int param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint in_stack_ffffffffffffff60;
  
  if ((param_7 == 0) || ((*param_2 >> 0x11 & 1) == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  iVar13 = param_7;
  if (!bVar11) {
    iVar13 = 0;
  }
  iVar7 = FUN_18009bd88(param_1,param_2,param_3,param_4,iVar13);
  iVar13 = iVar7;
  if (iVar7 == param_7) goto LAB_18009d83c;
  uVar5 = (param_8 ^ 1) << 3 | 7;
  uVar1 = (param_8 ^ 1) + 3;
  uVar10 = (ulonglong)uVar1;
  uVar2 = (uint)(*(char *)((longlong)param_2 + 5) != '\0') |
          (uint)(*(char *)((longlong)param_2 + 6) != '\0') << 1;
  uVar12 = (undefined1)uVar1;
  uVar6 = (undefined1)uVar5;
  iVar3 = param_7;
  if (uVar2 - 1 < 2) {
    uVar9 = FUN_1800f42d0(param_2 + 4,uVar12,1);
    uVar8 = 0x55;
    if (uVar2 != 1) {
      uVar8 = 0xaa;
    }
    FUN_18009d128(param_1,param_2,iVar7,uVar8,1,uVar9,param_8);
    FUN_18009d128(param_1,param_2,iVar7,0,1,iVar7,param_8);
    if (param_7 == 0 || param_6 != 1) {
      iVar3 = iVar7;
    }
    uVar12 = 0;
    if (uVar2 != 1) {
      uVar12 = 0x55;
    }
    FUN_18009b4c8(param_1,param_2,iVar3,uVar5,uVar9,iVar7,uVar9,param_4,uVar12);
    FUN_1800f4370(param_2 + 4,uVar9);
    if (param_7 == 0 || param_6 != 1) {
      iVar4 = param_7;
      if (param_7 == 0) {
        iVar4 = iVar7;
      }
      if (param_6 == 0) {
        FUN_1800f5730(param_2 + 4,param_1,0x38,iVar4,uVar6,iVar7,0x1e4,param_2[0x19],0xe4,0x3b808081
                      ,0x3b808081,0x3b808081,0x3b808081,0);
      }
      else if (param_6 == 2) {
        FUN_1800f5730(param_2 + 4,param_1,0x1c,iVar4,uVar6,iVar7,0x1e4,0);
      }
    }
LAB_18009d80c:
    if (iVar3 != param_7) goto LAB_18009d83c;
    FUN_1800f4370(param_2 + 4,iVar7);
  }
  else {
    if (uVar2 != 0) {
      if (uVar2 != 3) goto LAB_18009d83c;
      uVar8 = FUN_1800f42d0(param_2 + 4,uVar12,1);
      uVar9 = FUN_1800f42d0(param_2 + 4,uVar10 & 0xff,1);
      FUN_18009d128(param_1,param_2,iVar7,0x55,1,uVar8,param_8);
      FUN_18009d128(param_1,param_2,iVar7,0,1,uVar9,param_8);
      in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffff00;
      FUN_18009b4c8(param_1,param_2,uVar8,uVar5,uVar8,uVar9,uVar8,param_4,in_stack_ffffffffffffff60)
      ;
      FUN_18009d128(param_1,param_2,iVar7,0xff,1,uVar9,param_8);
      FUN_18009d128(param_1,param_2,iVar7,0xaa,1,iVar7,param_8);
      FUN_18009b4c8(param_1,param_2,iVar7,uVar5,uVar9,iVar7,uVar9,param_4,
                    in_stack_ffffffffffffff60 & 0xffffff00);
      FUN_1800f4370(param_2 + 4,uVar9);
      if (param_7 == 0 || param_6 != 1) {
        iVar3 = iVar7;
      }
      FUN_18009b4c8(param_1,param_2,iVar7,uVar5,iVar7,uVar8,iVar7,param_4,0x55);
      FUN_1800f4370(param_2 + 4,uVar8);
      if (param_7 == 0 || param_6 != 1) {
        iVar4 = param_7;
        if (param_7 == 0) {
          iVar4 = iVar7;
        }
        if (param_6 == 0) {
          FUN_1800f5730(param_2 + 4,param_1,0x38,iVar4,uVar6,iVar7,0x1e4,param_2[0x19],0xe4,
                        0x3b808081,0x3b808081,0x3b808081,0x3b808081,0);
        }
        else if (param_6 == 2) {
          FUN_1800f5730(param_2 + 4,param_1,0x1c,iVar4,uVar6,iVar7,0x1e4,0);
        }
      }
      goto LAB_18009d80c;
    }
    if (param_7 == 0) {
      param_7 = iVar7;
    }
    FUN_18009d128(param_1,param_2,iVar7,0,param_6,param_7,param_8);
  }
  iVar13 = param_7;
  if (param_7 != iVar7) {
    FUN_1800f4370(param_2 + 4,iVar7);
  }
LAB_18009d83c:
  FUN_1800f4370(param_2 + 4,param_4);
  return iVar13;
}

