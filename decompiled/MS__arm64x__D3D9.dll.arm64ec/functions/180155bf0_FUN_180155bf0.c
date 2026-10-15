/*
 * FUN_180155bf0 at 180155bf0
 * undefined FUN_180155bf0(void)
 * Address ranges: 180155bf0-180155cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180155bf0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = *param_1;
  lVar4 = param_1[1];
  uVar7 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar8 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar10 = param_1[4];
  lVar5 = param_1[5];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  lVar6 = param_1[6];
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x34);
  FUN_18014c730(lVar9);
  FUN_180169b60(lVar9,(int)lVar4,uVar7,1,0,uVar8,0,uVar2,lVar10,(int)lVar5,uVar1,(char)lVar6,1,uVar3
                ,0);
  if (param_1[7] != 0) {
    FUN_180212050(*(longlong *)(lVar9 + 0xf6e0) + 0x17f0,(int)param_1[9],param_1[7],param_1[8]);
  }
  return;
}

