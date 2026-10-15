/*
 * FUN_180053c7c at 180053c7c
 * undefined __fastcall FUN_180053c7c(longlong param_1, longlong param_2)
 * Address ranges: 180053c7c-180053ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053c7c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint local_28 [8];
  
  if (*(int *)(param_1 + 0x6c8) != 0) {
    FUN_180059a3c(param_1,param_2,local_28);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x6c8) != 0) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar3 * 8);
        (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(param_2 + 0x10),param_2,local_28);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x6c8));
    }
  }
  return;
}

