/*
 * FUN_1800ef138 at 1800ef138
 * undefined __fastcall FUN_1800ef138(longlong param_1, longlong param_2)
 * Address ranges: 1800ef138-1800ef187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ef138(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar3 * 8);
      (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined4 *)(param_2 + 0x10),param_2);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x6c8));
  }
  return;
}

