/*
 * FUN_140001e70 at 140001e70
 * undefined __fastcall FUN_140001e70(longlong param_1, int param_2)
 * Address ranges: 140001e70-140001ec4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140001e70(longlong param_1,int param_2)

{
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  
  LVar2 = FUN_14000e230(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  uVar3 = 0;
  if ((uint)LVar2 != 0) {
    do {
      iVar1 = FUN_14000e270(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(ulonglong)uVar3);
      if (iVar1 == param_2) {
        FUN_14000e4a0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),uVar3);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)LVar2);
  }
  return;
}

