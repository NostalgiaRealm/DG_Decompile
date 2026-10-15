/*
 * FUN_1801a3498 at 1801a3498
 * undefined FUN_1801a3498(void)
 * Address ranges: 1801a3498-1801a35bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a3498(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
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
  FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),uVar5,(ulonglong)uVar2,0,
                0x400);
  FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),uVar6,uVar3,0,0x800);
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_78 = uVar5;
  local_68 = (ulonglong)uVar2;
  FUN_180209ae0(*(undefined8 *)(*(longlong *)(lVar4 + 0x1cf18) + 0x1508),&local_78);
  return;
}

