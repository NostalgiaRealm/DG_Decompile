/*
 * FUN_1800938b0 at 1800938b0
 * undefined8 __fastcall FUN_1800938b0(longlong param_1)
 * Address ranges: 1800938b0-180093911
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800938b0(longlong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined1 uVar2;
  uint local_58;
  uint local_54;
  
  uVar2 = 1;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((*(int *)(lVar1 + 0x20) == 1) && (*(int *)(lVar1 + 0x24) == 1)) {
    if (*(int *)(lVar1 + 0x30) == 0) goto LAB_180093902;
    if (*(int *)(lVar1 + 0x30) == 1) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x60))(*(longlong **)(lVar1 + 8),&local_58);
      in_RAX = (ulonglong)local_58;
      if ((*(uint *)(*(longlong *)(param_1 + 0x38) + 0x18) == local_58) &&
         (in_RAX = (ulonglong)local_54, *(uint *)(*(longlong *)(param_1 + 0x38) + 0x1c) == local_54)
         ) goto LAB_180093902;
    }
  }
  uVar2 = 0;
LAB_180093902:
  return CONCAT71((int7)(in_RAX >> 8),uVar2);
}

