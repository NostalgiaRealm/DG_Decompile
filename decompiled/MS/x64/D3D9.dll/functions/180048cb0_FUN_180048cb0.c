/*
 * FUN_180048cb0 at 180048cb0
 * undefined __fastcall FUN_180048cb0(longlong param_1)
 * Address ranges: 180048cb0-180048ce0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048cb0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  piVar1 = (int *)(lVar2 + 0x684);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_1800e2ae8(lVar2 + 8,'\0');
    return;
  }
  return;
}

