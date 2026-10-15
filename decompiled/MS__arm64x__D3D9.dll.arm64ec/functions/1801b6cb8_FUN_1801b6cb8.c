/*
 * FUN_1801b6cb8 at 1801b6cb8
 * undefined FUN_1801b6cb8(void)
 * Address ranges: 1801b6cb8-1801b6f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801b6cb8(undefined8 param_1,uint *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_c0 [2];
  uint local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  
  iVar4 = 0;
  uVar1 = *param_2 & 0xf;
  if (2 < uVar1) {
    if (uVar1 == 5) {
      uVar5 = 1;
    }
    else {
      if (uVar1 != 6) {
        if (uVar1 != 7) {
          return 0;
        }
        iVar2 = FUN_1801b6ab8(param_1,param_2,0,0,0,param_5);
        uVar6 = 0xbd800000;
        uVar7 = 0xbf000000;
        iVar4 = iVar2;
        if (((param_3 != 0) && (param_4 == 0)) && (iVar4 = param_3, param_3 != iVar2)) {
          FUN_180213800(param_2 + 4,iVar2);
        }
        uVar3 = FUN_180213760(param_2 + 4,3,0);
        local_78 = 0;
        local_a0._0_4_ = 0x1e4;
        local_a8 = param_2[0x19];
        local_80 = 0;
        local_b0 = 0x1a1;
        local_c0[0] = 7;
        local_b8 = iVar2;
        local_98 = uVar6;
        local_90 = uVar7;
        local_88 = uVar7;
        FUN_180214c88(param_2 + 4,param_1,0,uVar3,local_c0,0x50);
        local_a8 = param_2[0x19];
        local_78 = 0;
        local_80 = 0;
        local_88 = 0x3fcc8000;
        local_b0 = 0xa4;
        local_c0[0] = 1;
        local_90 = 0;
        local_98 = 0x3f950000;
        local_a0._0_4_ = 0xe4;
        local_b8 = uVar3;
        FUN_180214c88(param_2 + 4,param_1,0x2010,iVar4,local_c0,0x50);
        local_a8 = param_2[0x19];
        local_78 = 0;
        local_80 = 0;
        local_88 = 0xbf500000;
        local_b0 = 0xa4;
        local_c0[0] = 2;
        local_90 = 0xbec80000;
        local_98 = 0x3f950000;
        local_a0._0_4_ = 0xe4;
        local_b8 = uVar3;
        FUN_180214c88(param_2 + 4,param_1,0x2010,iVar4,local_c0,0x50);
        local_a8 = param_2[0x19];
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_b0 = 0xa4;
        local_c0[0] = 4;
        local_90 = 0x40010000;
        local_98 = 0x3f950000;
        local_a0 = CONCAT44(local_a0._4_4_,0xe4);
        local_b8 = uVar3;
        FUN_180214c88(param_2 + 4,param_1,0x2010,iVar4,local_c0,0x50);
        if ((param_4 == 0) || (FUN_1801b2908(param_1,param_2,iVar4,7,iVar2,0,param_4), param_4 != 2)
           ) {
          local_a8 = 0x3f800000;
        }
        else {
          local_a8 = 0xff;
        }
        local_b8 = param_2[0x18];
        local_a0 = 0;
        local_b0 = 0xe4;
        local_c0[0] = 8;
        FUN_180214c88(param_2 + 4,param_1,0x36,iVar4,local_c0,0x28);
        return iVar2;
      }
      uVar5 = 0;
    }
    iVar4 = FUN_1801b6ab8(param_1,param_2,uVar5,param_3,param_4,param_5);
  }
  return iVar4;
}

