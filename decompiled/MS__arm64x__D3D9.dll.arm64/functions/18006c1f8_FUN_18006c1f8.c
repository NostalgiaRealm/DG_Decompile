/*
 * FUN_18006c1f8 at 18006c1f8
 * undefined FUN_18006c1f8(void)
 * Address ranges: 18006c1f8-18006c52f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18006c1f8(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                       byte param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar3 = FUN_180071428();
  lVar7 = *(longlong *)(param_3 + 0x1b8);
  uVar8 = uVar3 & 0xffffffff;
  if (lVar7 != 0) {
    uVar6 = 0xf;
    if (param_4 != 0 && param_4 != 3) {
      uVar6 = (uint)param_5;
    }
    lVar4 = (ulonglong)uVar6 * 2;
    puVar5 = &DAT_1802312f0;
    uVar3 = FUN_1800f42d0(param_3 + 0x20,(&DAT_1802312f0)[lVar4],1,lVar4,&DAT_1802312f0,
                          (uint)uVar3 & 0xff,(&DAT_1802312e0)[uVar6]);
    uVar1 = puVar5[lVar4 + 1];
    uVar8 = uVar3 & 0xffffffff;
    if (param_4 == 0) {
      if (*(char *)(lVar7 + 0x53e) == '\0') {
        uVar8 = FUN_18006ba70(uVar3,param_2,lVar7,uVar8,uVar1);
      }
      else {
        uVar8 = FUN_18006b450();
      }
      uVar8 = uVar8 & 0xffffffff;
      FUN_1800f5730(lVar7 + 0x20,param_2,0x36,uVar8,8,*(undefined4 *)(lVar7 + 0x498),0xe4,0x3f800000
                    ,0);
    }
    else if (param_4 == 3) {
      if (*(char *)(lVar7 + 0x53f) == '\0') {
        uVar8 = FUN_18006ba70(uVar3,param_2,lVar7,uVar8,uVar1);
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        uVar2 = FUN_1800f42d0(lVar7 + 0x20,3,1);
        FUN_1800f5730(lVar7 + 0x20,param_2,0x38,uVar2,7,*(undefined4 *)(lVar7 + 0x4b0),1,
                      *(undefined4 *)(lVar7 + 0x4b0),CONCAT44(uVar9,0xa6),0);
        if ((int)uVar3 == 0) {
          uVar8 = FUN_1800f42d0(lVar7 + 0x20,4,1);
          uVar8 = uVar8 & 0xffffffff;
        }
        uVar9 = 0;
        uVar10 = 0;
        FUN_1800f5730(lVar7 + 0x20,param_2,0x38,uVar8,7,*(undefined4 *)(lVar7 + 0x518),0x1a4,uVar2,0
                      ,0);
        FUN_1800f5730(lVar7 + 0x20,param_2,0x32,uVar8,7,*(undefined4 *)(lVar7 + 0x51c),0x1a4,uVar2,
                      CONCAT44(uVar9,0x55),CONCAT44(uVar10,(int)uVar8),0x1a4,0);
        FUN_1800f5730(lVar7 + 0x20,param_2,0x32,uVar8,7,*(undefined4 *)(lVar7 + 0x514),0x1a4,uVar2,
                      0xaa,uVar8,0x1a4,0);
        uVar9 = 0;
        FUN_1800f5730(lVar7 + 0x20,param_2,0,uVar8,7,uVar8,0x1a4,uVar8,0x1a4,0);
        FUN_1800f5730(lVar7 + 0x20,param_2,0x32,uVar8,7,*(undefined4 *)(lVar7 + 0x50c),0x1a4,
                      *(undefined4 *)(lVar7 + 0x4b4),0x55,CONCAT44(uVar9,(int)uVar8),0x1a4,0);
        FUN_1800f5730(lVar7 + 0x20,param_2,0x32,uVar8,7,*(undefined4 *)(lVar7 + 0x510),0x1a4,
                      *(undefined4 *)(lVar7 + 0x4b4),0xaa,uVar8,0x1a4,0);
        FUN_1800f5730(lVar7 + 0x20,param_2,0x32,uVar8,7,*(undefined4 *)(lVar7 + 0x508),0x1a4,
                      *(undefined4 *)(lVar7 + 0x4b4),0,uVar8,0x1a4,0);
        FUN_1800f4370(lVar7 + 0x20,uVar2);
      }
      FUN_1800f5730(lVar7 + 0x20,param_2,0x36,uVar8,8,*(undefined4 *)(lVar7 + 0x498),0xe4,0x3f800000
                    ,0);
    }
    else {
      uVar8 = FUN_18006ba70(uVar3,param_2,lVar7,uVar8,uVar1);
      uVar8 = uVar8 & 0xffffffff;
    }
  }
  return uVar8;
}

