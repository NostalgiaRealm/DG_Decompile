/*
 * FUN_1001b930 at 1001b930
 * undefined FUN_1001b930(void)
 * Address ranges: 1001b930-1001ba0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b930(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  local_30 = 0;
  local_28 = 0;
  puVar1 = (uint *)&DAT_00000014;
  if (param_2 != 0) {
    puVar1 = (uint *)(param_2 + -0xac);
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  puVar2 = (uint *)&DAT_00000014;
  if (param_3 != 0) {
    puVar2 = (uint *)(param_3 + -0xac);
  }
  puVar3 = (uint *)&DAT_00000018;
  if (param_2 != 0) {
    puVar3 = (uint *)(param_2 + -0xa8);
  }
  puVar4 = (uint *)&DAT_00000018;
  if (param_3 != 0) {
    puVar4 = (uint *)(param_3 + -0xa8);
  }
  local_24 = 1;
  uVar5 = *puVar4;
  if (*puVar3 <= *puVar4) {
    uVar5 = *puVar3;
  }
  uVar6 = *puVar2;
  if (*puVar1 <= *puVar2) {
    uVar6 = *puVar1;
  }
  (*(code *)PTR_FUN_100ba2b8)(&local_40,0,0,uVar6,uVar5);
  uStack_48 = uStack_38;
  local_50 = local_40;
  FUN_1001bd30(param_1,0,0,0,0,param_2,param_3,&local_50);
  return;
}

