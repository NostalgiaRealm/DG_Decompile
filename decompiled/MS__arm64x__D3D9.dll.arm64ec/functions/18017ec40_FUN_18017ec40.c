/*
 * FUN_18017ec40 at 18017ec40
 * undefined FUN_18017ec40(void)
 * Address ranges: 18017ec40-18017f02b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18017ec40(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                       byte param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  uVar4 = FUN_1801845d8();
  lVar10 = *(longlong *)(param_3 + 0x1b8);
  uVar9 = uVar4 & 0xffffffff;
  if (lVar10 != 0) {
    uVar7 = 0xf;
    if (param_4 != 0 && param_4 != 3) {
      uVar7 = (uint)param_5;
    }
    lVar5 = (ulonglong)uVar7 * 2;
    uVar1 = (&DAT_18022c4a0)[uVar7];
    puVar6 = &DAT_18022c4b0;
    uVar7 = (uint)uVar4 & 0xff;
    uVar4 = FUN_180213760(param_3 + 0x20,(&DAT_18022c4b0)[lVar5],1);
    uVar2 = puVar6[lVar5 + 1];
    uVar9 = uVar4 & 0xffffffff;
    if (param_4 == 0) {
      if (*(char *)(lVar10 + 0x53e) == '\0') {
        uVar9 = FUN_18017e470(uVar4,param_2,lVar10,uVar9,uVar2,uVar7,uVar1);
      }
      else {
        uVar9 = FUN_18017dcd8();
      }
      local_70 = 0;
      local_80 = 0xe4;
      local_88 = *(undefined4 *)(lVar10 + 0x498);
      uVar9 = uVar9 & 0xffffffff;
      local_78 = 0x3f800000;
      local_90[0] = 8;
      FUN_180214c88(lVar10 + 0x20,param_2,0x36,uVar9,local_90,0x28);
    }
    else if (param_4 == 3) {
      if (*(char *)(lVar10 + 0x53f) == '\0') {
        uVar9 = FUN_18017e470(uVar4,param_2,lVar10,uVar9,uVar2,uVar7,uVar1);
        uVar9 = uVar9 & 0xffffffff;
      }
      else {
        uVar3 = FUN_180213760(lVar10 + 0x20,3,1);
        local_88 = *(undefined4 *)(lVar10 + 0x4b0);
        local_70 = CONCAT44(local_70._4_4_,0xa6);
        local_68 = 0;
        local_80 = 1;
        local_90[0] = 7;
        local_78 = local_88;
        FUN_180214c88(lVar10 + 0x20,param_2,0x38,uVar3,local_90,0x30);
        if ((int)uVar4 == 0) {
          uVar9 = FUN_180213760(lVar10 + 0x20,4,1);
          uVar9 = uVar9 & 0xffffffff;
        }
        local_88 = *(undefined4 *)(lVar10 + 0x518);
        local_70 = 0;
        local_68 = 0;
        local_80 = 0x1a4;
        local_90[0] = 7;
        local_78 = uVar3;
        FUN_180214c88(lVar10 + 0x20,param_2,0x38,uVar9,local_90,0x30);
        local_58 = 0;
        local_70._0_4_ = 0x55;
        local_88 = *(undefined4 *)(lVar10 + 0x51c);
        local_60 = 0x1a4;
        uVar8 = (undefined4)uVar9;
        local_80 = 0x1a4;
        local_90[0] = 7;
        local_78 = uVar3;
        local_68._0_4_ = uVar8;
        FUN_180214c88(lVar10 + 0x20,param_2,0x32,uVar9,local_90,0x40);
        local_88 = *(undefined4 *)(lVar10 + 0x514);
        local_58 = 0;
        local_60 = 0x1a4;
        local_68 = CONCAT44(local_68._4_4_,uVar8);
        local_70._0_4_ = 0xaa;
        local_80 = 0x1a4;
        local_90[0] = 7;
        local_78 = uVar3;
        FUN_180214c88(lVar10 + 0x20,param_2,0x32,uVar9,local_90,0x40);
        local_68 = 0;
        local_70._0_4_ = 0x1a4;
        local_80 = 0x1a4;
        local_90[0] = 7;
        local_88 = uVar8;
        local_78 = uVar8;
        FUN_180214c88(lVar10 + 0x20,param_2,0,uVar9,local_90,0x30);
        local_70._0_4_ = 0x55;
        local_78 = *(undefined4 *)(lVar10 + 0x4b4);
        local_58 = 0;
        local_60 = 0x1a4;
        local_88 = *(undefined4 *)(lVar10 + 0x50c);
        local_80 = 0x1a4;
        local_90[0] = 7;
        local_68._0_4_ = uVar8;
        FUN_180214c88(lVar10 + 0x20,param_2,0x32,uVar9,local_90,0x40);
        local_58 = 0;
        local_60 = 0x1a4;
        local_78 = *(undefined4 *)(lVar10 + 0x4b4);
        local_70 = CONCAT44(local_70._4_4_,0xaa);
        local_80 = 0x1a4;
        local_90[0] = 7;
        local_88 = *(undefined4 *)(lVar10 + 0x510);
        local_68._0_4_ = uVar8;
        FUN_180214c88(lVar10 + 0x20,param_2,0x32,uVar9,local_90,0x40);
        local_78 = *(undefined4 *)(lVar10 + 0x4b4);
        local_58 = 0;
        local_60 = 0x1a4;
        local_68 = CONCAT44(local_68._4_4_,uVar8);
        local_88 = *(undefined4 *)(lVar10 + 0x508);
        local_70 = 0;
        local_80 = 0x1a4;
        local_90[0] = 7;
        FUN_180214c88(lVar10 + 0x20,param_2,0x32,uVar9,local_90,0x40);
        FUN_180213800(lVar10 + 0x20,uVar3);
      }
      local_70 = 0;
      local_80 = 0xe4;
      local_88 = *(undefined4 *)(lVar10 + 0x498);
      local_78 = 0x3f800000;
      local_90[0] = 8;
      FUN_180214c88(lVar10 + 0x20,param_2,0x36,uVar9,local_90,0x28);
    }
    else {
      uVar9 = FUN_18017e470(uVar4,param_2,lVar10,uVar9,uVar2,uVar7,uVar1);
      uVar9 = uVar9 & 0xffffffff;
    }
  }
  return uVar9;
}

