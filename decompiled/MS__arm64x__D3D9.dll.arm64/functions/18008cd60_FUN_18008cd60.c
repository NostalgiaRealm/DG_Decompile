/*
 * FUN_18008cd60 at 18008cd60
 * undefined FUN_18008cd60(void)
 * Address ranges: 18008cd60-18008ce87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008cd60(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
  puVar1 = (undefined8 *)&DAT_00000040;
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)(param_1[3] + 0x20);
  }
  uVar6 = *puVar1;
  puVar1 = (undefined8 *)&DAT_00000040;
  if (param_1[2] != 0) {
    puVar1 = (undefined8 *)(param_1[2] + 0x20);
  }
  uVar5 = *puVar1;
  lVar4 = *param_1;
  FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),uVar5,(ulonglong)uVar2,0,
                0x400);
  FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),uVar6,uVar3,0,0x800);
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_88 = uVar5;
  local_78 = (ulonglong)uVar2;
  FUN_1800ea4f0(*(undefined8 *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),&local_88);
  return;
}

