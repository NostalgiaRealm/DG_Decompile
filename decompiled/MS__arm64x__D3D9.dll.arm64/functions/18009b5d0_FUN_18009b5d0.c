/*
 * FUN_18009b5d0 at 18009b5d0
 * undefined FUN_18009b5d0(void)
 * Address ranges: 18009b5d0-18009b873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009b5d0(undefined8 param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff90;
  undefined4 uVar8;
  ulonglong in_stack_ffffffffffffff98;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  bVar4 = (*param_2 & 0x400) != 0;
  lVar2 = 5;
  if (bVar4) {
    lVar2 = 7;
  }
  lVar3 = 6;
  if (bVar4) {
    lVar3 = 8;
  }
  uVar1 = (uint)(*(char *)((longlong)param_2 + lVar2) != '\0') |
          (uint)(*(char *)((longlong)param_2 + lVar3) != '\0') << 1;
  if (uVar1 - 1 < 2) {
    uVar6 = FUN_1800f42d0(param_2 + 4,1,0);
    uVar8 = (undefined4)(in_stack_ffffffffffffff90 >> 0x20);
    uVar5 = 0x155;
    if (param_3 != 0) {
      uVar10 = 0x100;
      if (uVar1 != 1) {
        uVar10 = uVar5;
      }
      uVar11 = 0;
      uVar9 = 0;
      FUN_1800f5730(param_2 + 4,param_1,0x1d,uVar6,1,param_2[0x19],0xe4,0,
                    in_stack_ffffffffffffff90 & 0xffffffff00000000,
                    in_stack_ffffffffffffff98 & 0xffffffff00000000,0,param_3,uVar10,0);
      uVar8 = 0;
      uVar7 = 2;
      if (uVar1 != 1) {
        uVar7 = 4;
      }
      FUN_1800f5730(param_2 + 4,param_1,0x3c,param_4,uVar7,param_4,0x1e4,uVar6,0,0,uVar9,param_3,
                    uVar10,uVar11);
    }
    if (uVar1 != 1) {
      uVar5 = 0x1aa;
    }
    FUN_1800f5730(param_2 + 4,param_1,1,param_4,1,param_4,0,param_4,CONCAT44(uVar8,uVar5),0);
  }
  else if (uVar1 == 3) {
    uVar5 = FUN_1800f42d0(param_2 + 4,2,0);
    uVar6 = (undefined4)(in_stack_ffffffffffffff90 >> 0x20);
    if (param_3 != 0) {
      FUN_1800f5730(param_2 + 4,param_1,0x1d,uVar5,3,param_2[0x19],0xe4,0,
                    in_stack_ffffffffffffff90 & 0xffffffff00000000,
                    in_stack_ffffffffffffff98 & 0xffffffff00000000,0,param_3,0x154,0);
      uVar6 = 0;
      FUN_1800f5730(param_2 + 4,param_1,0x3c,param_4,10,param_4,0xe4,uVar5,0,0);
      uVar11 = CONCAT44(uVar6,0x55);
      FUN_1800f5730(param_2 + 4,param_1,0x3c,param_4,0xc,param_4,0xe4,uVar5,uVar11,0);
      uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    FUN_1800f5730(param_2 + 4,param_1,1,param_4,3,param_4,0x54,param_4,CONCAT44(uVar6,0xfe),0);
    FUN_1800f5730(param_2 + 4,param_1,1,param_4,1,param_4,0,param_4,0x55,0);
  }
  FUN_1800f5730(param_2 + 4,param_1,~((*param_2 >> 0xc) << 0x12) & 0x40000 | 0xd,0xffffffff,
                param_4 | 0x10000000,0,0);
  return;
}

