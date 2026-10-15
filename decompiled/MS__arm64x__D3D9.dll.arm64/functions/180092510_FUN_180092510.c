/*
 * FUN_180092510 at 180092510
 * undefined FUN_180092510(void)
 * Address ranges: 180092510-18009257f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180092510(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (param_2 & 0xffffffff) * 0x20;
  uVar3 = uVar2 | 0x10;
  (*__imp_USER32_dll_UnionRect)
            (*(longlong *)(param_1 + 0x84) + uVar3,*(longlong *)(param_1 + 0x84) + uVar3);
  if (*(longlong *)(param_1 + 0x164) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x164) + uVar2;
    (*__imp_USER32_dll_UnionRect)(lVar1 + 0x10,lVar1 + 0x10,param_3);
  }
  return;
}

