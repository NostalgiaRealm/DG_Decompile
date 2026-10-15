/*
 * FUN_14000b108 at 14000b108
 * undefined __fastcall FUN_14000b108(longlong param_1, undefined8 param_2)
 * Address ranges: 14000b108-14000b1b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000b108(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 uStack_14;
  
  cVar4 = (char)param_2;
  local_28 = 0;
  local_24 = 1;
  local_44 = 1;
  local_1c = 0;
  uStack_14 = 0;
  local_48 = 0;
  local_20 = 2;
  local_40 = 2;
  local_3c = 0;
  uStack_34 = 0;
  uVar1 = *(uint *)(param_1 + 600) | 8;
  if (cVar4 == '\0') {
    uVar1 = *(uint *)(param_1 + 600) & 0xfffffff7;
  }
  uVar2 = uVar1 | 0x10;
  if (cVar4 == '\0') {
    uVar2 = uVar1 & 0xffffffef;
  }
  uVar1 = uVar2 | 0x20;
  if (cVar4 == '\0') {
    uVar1 = uVar2 & 0xffffffdf;
  }
  uVar2 = uVar1 | 0x40;
  if (cVar4 == '\0') {
    uVar2 = uVar1 & 0xffffffbf;
  }
  *(uint *)(param_1 + 600) = uVar2;
  puVar3 = &local_48;
  if (cVar4 != '\0') {
    puVar3 = &local_28;
  }
  FUN_14000e660(param_1,param_2,(longlong *)(param_1 + 0x150),puVar3[*(uint *)(param_1 + 0x260)]);
  return;
}

