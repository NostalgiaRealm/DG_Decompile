/*
 * FUN_180057af0 at 180057af0
 * undefined __cdecl FUN_180057af0(longlong param_1, longlong param_2)
 * Address ranges: 180057af0-180057b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057af0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint auStack_40 [8];
  
  if (*(int *)(param_1 + 0x6c8) != 0) {
    FUN_18005ca60(param_1,param_2,auStack_40);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x6c8) != 0) {
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar3 * 8);
        (**(code **)(*plVar2 + 0x28))(plVar2,*(undefined4 *)(param_2 + 0x10),param_2,auStack_40);
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x6c8));
    }
  }
  return;
}

