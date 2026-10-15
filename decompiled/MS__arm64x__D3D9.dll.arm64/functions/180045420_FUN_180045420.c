/*
 * FUN_180045420 at 180045420
 * undefined FUN_180045420(void)
 * Address ranges: 180045420-1800454d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045420(longlong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  uVar9 = *(undefined8 *)((longlong)param_1 + 0xc);
  lVar10 = *param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  lVar8 = param_1[3];
  lVar5 = param_1[4];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x24);
  lVar6 = param_1[5];
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x2c);
  lVar7 = param_1[6];
  FUN_18003dea0(uVar9);
  FUN_180059860(uVar9,uVar3,lVar8,1,0,lVar10,(int)lVar5,uVar1,
                lVar10 + (ulonglong)uVar2 + 0xf & 0xfffffffffffffff0,(int)lVar6,0,uVar4,0,
                (char)lVar7,0);
  return;
}

