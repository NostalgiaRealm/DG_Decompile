/*
 * FUN_18009efb8 at 18009efb8
 * undefined FUN_18009efb8(void)
 * Address ranges: 18009efb8-18009f237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009efb8(undefined8 param_1,uint *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 extraout_s16;
  undefined4 extraout_s17;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  iVar4 = 0;
  uVar1 = *param_2 & 0xf;
  if (2 < uVar1) {
    if (uVar1 == 5) {
      uVar10 = 1;
    }
    else {
      if (uVar1 != 6) {
        if (uVar1 != 7) {
          return 0;
        }
        iVar2 = FUN_18009ee00(param_1,param_2,0,0,0,param_5);
        iVar4 = iVar2;
        if (((param_3 != 0) && (param_4 == 0)) && (iVar4 = param_3, param_3 != iVar2)) {
          FUN_1800f4370(param_2 + 4,iVar2);
        }
        uVar3 = FUN_1800f42d0(param_2 + 4,3,0);
        FUN_1800f5730(param_2 + 4,param_1,0,uVar3,7,iVar2,0x1a1,param_2[0x19],CONCAT44(uVar6,0x1e4),
                      extraout_s17,extraout_s16,extraout_s16,0,0);
        FUN_1800f5730(param_2 + 4,param_1,0x2010,iVar4,1,uVar3,0xa4,param_2[0x19],0xe4,0x3f950000,0,
                      0x3fcc8000,0,0);
        FUN_1800f5730(param_2 + 4,param_1,0x2010,iVar4,2,uVar3,0xa4,param_2[0x19],0xe4,0x3f950000,
                      0xbec80000,0xbf500000,0,0);
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0x40010000;
        uVar6 = 0x3f950000;
        FUN_1800f5730(param_2 + 4,param_1,0x2010,iVar4,4,uVar3,0xa4,param_2[0x19],0xe4,0x3f950000,
                      0x40010000,0,0,0);
        if ((param_4 == 0) || (FUN_18009b2f0(param_1,param_2,iVar4,7,iVar2,0,param_4), param_4 != 2)
           ) {
          uVar5 = 0x3f800000;
        }
        else {
          uVar5 = 0xff;
        }
        FUN_1800f5730(param_2 + 4,param_1,0x36,iVar4,8,param_2[0x18],0xe4,uVar5,0,uVar6,uVar7,uVar8,
                      uVar9,uVar10);
        return iVar2;
      }
      uVar10 = 0;
    }
    iVar4 = FUN_18009ee00(param_1,param_2,uVar10,param_3,param_4,param_5);
  }
  return iVar4;
}

