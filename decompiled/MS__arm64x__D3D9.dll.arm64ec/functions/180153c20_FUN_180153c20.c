/*
 * FUN_180153c20 at 180153c20
 * undefined FUN_180153c20(void)
 * Address ranges: 180153c20-180153cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180153c20(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar6 = *param_1;
  lVar3 = param_1[1];
  uVar5 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar7 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[4];
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x24);
  FUN_18014c730(lVar6);
  FUN_180168ce0(lVar6,(int)lVar3,uVar5,1,0,uVar7,uVar1,(int)lVar4,0,uVar2,0);
  if (param_1[5] != 0) {
    FUN_180212050(*(longlong *)(lVar6 + 0xf6e0) + 0x17f0,(int)param_1[7],param_1[5],param_1[6]);
  }
  return;
}

