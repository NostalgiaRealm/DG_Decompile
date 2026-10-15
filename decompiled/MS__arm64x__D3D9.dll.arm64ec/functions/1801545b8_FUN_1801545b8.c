/*
 * FUN_1801545b8 at 1801545b8
 * undefined FUN_1801545b8(void)
 * Address ranges: 1801545b8-180154687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801545b8(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  lVar10 = *param_1;
  lVar4 = param_1[1];
  uVar8 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar9 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar5 = param_1[4];
  uVar11 = *(undefined8 *)((longlong)param_1 + 0x24);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x2c);
  lVar6 = param_1[6];
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x34);
  lVar7 = param_1[7];
  FUN_18014c730(lVar10);
  FUN_180169b60(lVar10,(int)lVar4,uVar8,1,0,uVar9,uVar1,(int)lVar5,uVar11,uVar2,(int)lVar6,uVar3,0,
                (char)lVar7,0);
  if (*(longlong *)((longlong)param_1 + 0x3c) != 0) {
    FUN_180212050(*(longlong *)(lVar10 + 0xf6e0) + 0x17f0,*(undefined4 *)((longlong)param_1 + 0x4c),
                  *(longlong *)((longlong)param_1 + 0x3c),*(undefined8 *)((longlong)param_1 + 0x44))
    ;
  }
  return;
}

