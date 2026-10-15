/*
 * FUN_18001a79c at 18001a79c
 * undefined __fastcall FUN_18001a79c(longlong param_1)
 * Address ranges: 18001a79c-18001a7d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a79c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
  piVar1 = (int *)(lVar2 + 0x684);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_180047cd4(lVar2 + 8,'\0');
  }
  return;
}

