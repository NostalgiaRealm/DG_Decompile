/*
 * FUN_18000d268 at 18000d268
 * undefined __fastcall FUN_18000d268(longlong param_1)
 * Address ranges: 18000d268-18000d2a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d268(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
  piVar1 = (int *)(lVar2 + 0x684);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_180049e38(lVar2 + 8,'\0');
  }
  return;
}

