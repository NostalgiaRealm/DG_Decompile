/*
 * FUN_1800469a8 at 1800469a8
 * undefined FUN_1800469a8(void)
 * Address ranges: 1800469a8-180046a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800469a8(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *param_1;
  lVar4 = param_1[1];
  uVar10 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar9 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar8 = param_1[4];
  lVar5 = param_1[5];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  lVar6 = param_1[6];
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x34);
  FUN_18003dea0(lVar7);
  FUN_180059860(lVar7,(int)lVar4,uVar10,1,0,uVar9,0,uVar2,lVar8,(int)lVar5,uVar1,(char)lVar6,1,uVar3
                ,0);
  if (param_1[7] != 0) {
    FUN_1800f3550(*(longlong *)(lVar7 + 0xf6e0) + 0x17f0,(int)param_1[9],param_1[7],param_1[8]);
  }
  return;
}

