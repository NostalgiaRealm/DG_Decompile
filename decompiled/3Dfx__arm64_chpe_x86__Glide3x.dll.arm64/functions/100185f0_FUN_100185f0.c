/*
 * FUN_100185f0 at 100185f0
 * undefined FUN_100185f0(void)
 * Address ranges: 100185f0-1001869f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100185f0(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x32dc) + 8);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  local_30 = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x32dc) + 4) + 0x29d8) + 0x4a0;
  uVar3 = (*(code *)PTR_FUN_100a003c)(iVar1);
  FUN_1006d9b8(uVar3,uVar2,&local_50,0);
  (*(code *)PTR_FUN_100a0090)(iVar1);
  param_2[5] = uStack_28;
  param_2[4] = local_30;
  param_2[3] = uStack_38;
  param_2[2] = uStack_40;
  param_2[1] = uStack_48;
  *param_2 = local_50;
  return 1;
}

