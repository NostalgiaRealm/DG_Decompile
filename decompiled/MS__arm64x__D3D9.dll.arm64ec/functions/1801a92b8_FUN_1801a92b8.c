/*
 * FUN_1801a92b8 at 1801a92b8
 * undefined FUN_1801a92b8(void)
 * Address ranges: 1801a92b8-1801a9317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a92b8(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (param_2 & 0xffffffff) * 0x20;
  uVar3 = uVar2 | 0x10;
  thunk_FUN_180223c70(*(longlong *)(param_1 + 0x84) + uVar3,*(longlong *)(param_1 + 0x84) + uVar3);
  if (*(longlong *)(param_1 + 0x164) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x164) + uVar2;
    thunk_FUN_180223c70(lVar1 + 0x10,lVar1 + 0x10,param_3);
  }
  return;
}

