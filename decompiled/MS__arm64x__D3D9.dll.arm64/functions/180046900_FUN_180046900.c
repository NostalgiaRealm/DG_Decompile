/*
 * FUN_180046900 at 180046900
 * undefined FUN_180046900(void)
 * Address ranges: 180046900-1800469a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046900(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)*param_1;
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  uVar8 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar6 = param_1[4];
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x24);
  lVar7 = param_1[5];
  uVar9 = *puVar2;
  FUN_18003dea0(lVar3);
  FUN_180059860(lVar3,(int)lVar5,uVar8,1,0,puVar2 + 1,0,uVar1,uVar9,(int)lVar6,0,uVar4,1,(char)lVar7
                ,0);
  return;
}

