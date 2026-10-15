/*
 * FUN_180044b20 at 180044b20
 * undefined FUN_180044b20(void)
 * Address ranges: 180044b20-180044ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044b20(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *(undefined4 *)(param_1 + 2);
  uVar7 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined1 *)((longlong)param_1 + 0x24);
  FUN_18003dea0(uVar4);
  FUN_180058af8(uVar4,uVar5,uVar7,1,0,uVar3,uVar1,uVar2,0,uVar6,0);
  return;
}

