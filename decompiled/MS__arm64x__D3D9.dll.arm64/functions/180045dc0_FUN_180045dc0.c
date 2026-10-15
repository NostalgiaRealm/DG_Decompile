/*
 * FUN_180045dc0 at 180045dc0
 * undefined FUN_180045dc0(void)
 * Address ranges: 180045dc0-180045e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar5 = *(undefined1 *)(param_1 + 4);
  FUN_18003dea0(uVar2);
  FUN_180058af8(uVar2,uVar3,uVar6,1,0,uVar1,0,uVar4,1,uVar5,0);
  return;
}

