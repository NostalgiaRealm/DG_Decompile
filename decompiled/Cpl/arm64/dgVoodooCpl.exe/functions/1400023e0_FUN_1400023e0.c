/*
 * FUN_1400023e0 at 1400023e0
 * undefined __cdecl FUN_1400023e0(longlong param_1, int param_2)
 * Address ranges: 1400023e0-140002457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400023e0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  LRESULT LVar3;
  ulonglong uVar4;
  
  LVar3 = FUN_14000fd38(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  uVar4 = 0;
  if ((uint)LVar3 != 0) {
    do {
      iVar2 = FUN_14000fd78(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),uVar4);
      if (iVar2 == param_2) {
        FUN_14000fff0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(int)uVar4);
        return;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < (uint)LVar3);
  }
  return;
}

