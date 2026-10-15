/*
 * FUN_1801a3d98 at 1801a3d98
 * undefined FUN_1801a3d98(void)
 * Address ranges: 1801a3d98-1801a3e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a3d98(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  local_30 = 0;
  local_28 = 0;
  puVar3 = (uint *)&DAT_00000024;
  if (param_2 != 0) {
    puVar3 = (uint *)(param_2 + -0xdc);
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  puVar4 = (uint *)&DAT_00000024;
  if (param_3 != 0) {
    puVar4 = (uint *)(param_3 + -0xdc);
  }
  puVar5 = (uint *)&DAT_00000028;
  if (param_2 != 0) {
    puVar5 = (uint *)(param_2 + -0xd8);
  }
  puVar6 = (uint *)&DAT_00000028;
  if (param_3 != 0) {
    puVar6 = (uint *)(param_3 + -0xd8);
  }
  uVar1 = *puVar6;
  if (*puVar5 <= *puVar6) {
    uVar1 = *puVar5;
  }
  local_24 = 1;
  uVar2 = *puVar4;
  if (*puVar3 <= *puVar4) {
    uVar2 = *puVar3;
  }
  thunk_FUN_180223c20(&local_40,0,0,uVar2,uVar1);
  uStack_48 = uStack_38;
  local_50 = local_40;
  FUN_1801a40a8(param_1,0,0,0,0,param_2,param_3,&local_50);
  return;
}

