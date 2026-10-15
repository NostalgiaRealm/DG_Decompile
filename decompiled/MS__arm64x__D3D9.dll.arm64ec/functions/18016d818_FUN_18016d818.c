/*
 * FUN_18016d818 at 18016d818
 * undefined FUN_18016d818(void)
 * Address ranges: 18016d818-18016db33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016d818(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  uVar3 = param_5 >> 0x34 & 7;
  uVar2 = (uint)uVar3;
  if (uVar2 == 0) {
switchD_18016d900_caseD_0:
    local_78 = 0;
    local_88 = 0;
    local_90[0] = *(uint *)(param_2 + 0xa8) | 0x10000000;
    local_80 = CONCAT44(local_80._4_4_,1);
    FUN_180214c88(param_2,param_3,0x4000d,0xffffffff,local_90,0x20);
  }
  else {
    uVar1 = 0;
    if (uVar2 == 7) {
LAB_18016d8f0:
      switch(uVar3) {
      case 0:
        goto switchD_18016d900_caseD_0;
      case 1:
        local_60 = 0;
        local_68 = 0x88;
        local_70 = 0xaa;
        local_80 = CONCAT44(local_80._4_4_,0xff);
        local_88 = CONCAT44(local_88._4_4_,uVar1);
        local_90[0] = 8;
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x68));
        FUN_180214c88(param_2,param_3,0x50,uVar1,local_90,0x38);
        break;
      case 2:
        local_60 = 0;
        local_68 = 0x88;
        local_70 = 0xaa;
        local_80 = CONCAT44(local_80._4_4_,0xff);
        local_88 = CONCAT44(local_88._4_4_,uVar1);
        local_90[0] = 8;
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x68));
        FUN_180214c88(param_2,param_3,0x27,uVar1,local_90,0x38);
        break;
      case 3:
        local_60 = 0;
        local_78 = CONCAT44(local_78._4_4_,0x88);
        local_80 = CONCAT44(local_80._4_4_,0xaa);
        local_68 = 0xff;
        local_90[0] = 8;
        local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_2 + 0x68));
        local_70 = uVar1;
        FUN_180214c88(param_2,param_3,0x4f,uVar1,local_90,0x38);
        break;
      case 4:
        local_60 = 0;
        local_78 = CONCAT44(local_78._4_4_,0x88);
        local_80 = CONCAT44(local_80._4_4_,0xaa);
        local_68 = 0xff;
        local_90[0] = 8;
        local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_2 + 0x68));
        local_70 = uVar1;
        FUN_180214c88(param_2,param_3,0x50,uVar1,local_90,0x38);
        break;
      case 5:
        local_60 = 0;
        local_68 = 0x88;
        local_70 = 0xaa;
        local_80 = CONCAT44(local_80._4_4_,0xff);
        local_88 = CONCAT44(local_88._4_4_,uVar1);
        local_90[0] = 8;
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x68));
        FUN_180214c88(param_2,param_3,0x20,uVar1,local_90,0x38);
        break;
      case 6:
        local_60 = 0;
        local_68 = 0x88;
        local_70 = 0xaa;
        local_80 = CONCAT44(local_80._4_4_,0xff);
        local_88 = CONCAT44(local_88._4_4_,uVar1);
        local_90[0] = 8;
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x68));
        FUN_180214c88(param_2,param_3,0x4f,uVar1,local_90,0x38);
        break;
      case 7:
        goto switchD_18016d900_caseD_7;
      }
    }
    else {
      uVar1 = FUN_180213760(param_2,4,0);
      local_48 = 0;
      local_50 = 0x38d1b717;
      local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_2 + 0xa8));
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0xa8));
      local_58 = 0xe4;
      local_68 = 0x437f0000;
      local_70 = 0xe4;
      local_80._0_4_ = 0xff;
      local_90[0] = 8;
      local_88._0_4_ = param_4;
      FUN_180214c88(param_2,param_3,0x32,uVar1,local_90,0x50);
      local_78 = 0;
      local_80 = CONCAT44(local_80._4_4_,0xff);
      local_88 = CONCAT44(local_88._4_4_,uVar1);
      local_90[0] = 8;
      FUN_180214c88(param_2,param_3,0x1c,uVar1,local_90,0x20);
      if (uVar2 < 8) goto LAB_18016d8f0;
    }
    local_90[0] = uVar1 | 0x10000000;
    local_80 = 0;
    local_88 = CONCAT44(local_88._4_4_,3);
    FUN_180214c88(param_2,param_3,0x4000d,0xffffffff,local_90,0x18);
  }
switchD_18016d900_caseD_7:
  return;
}

