/*
 * FUN_180057be0 at 180057be0
 * undefined __cdecl FUN_180057be0(longlong param_1, longlong param_2)
 * Address ranges: 180057be0-180057be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057be0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar3 * 8);
      (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined4 *)(param_2 + 0x10),param_2);
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x6c8));
  }
  return;
}

