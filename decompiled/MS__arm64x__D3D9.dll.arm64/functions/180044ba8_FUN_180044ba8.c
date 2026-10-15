/*
 * FUN_180044ba8 at 180044ba8
 * undefined FUN_180044ba8(void)
 * Address ranges: 180044ba8-180044c57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044ba8(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  lVar3 = param_1[1];
  uVar7 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[4];
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x24);
  FUN_18003dea0(lVar5);
  FUN_180058af8(lVar5,(int)lVar3,uVar7,1,0,uVar6,uVar1,(int)lVar4,0,uVar2,0);
  if (param_1[5] != 0) {
    FUN_1800f3550(*(longlong *)(lVar5 + 0xf6e0) + 0x17f0,(int)param_1[7],param_1[5],param_1[6]);
  }
  return;
}

