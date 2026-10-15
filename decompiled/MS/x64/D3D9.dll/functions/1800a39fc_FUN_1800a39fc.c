/*
 * FUN_1800a39fc at 1800a39fc
 * undefined __fastcall FUN_1800a39fc(longlong param_1)
 * Address ranges: 1800a39fc-1800a3a65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a39fc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10);
    lVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x1ac0;
    FUN_1800a36a0(param_1,*(longlong *)(lVar2 + 0x2230 + lVar1),*(uint *)(param_1 + 0x48));
    FUN_1800f58f8((longlong *)(lVar1 + 0x21b8 + lVar2),*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

