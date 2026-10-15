/*
 * FUN_10020980 at 10020980
 * undefined __fastcall FUN_10020980(int param_1)
 * Address ranges: 10020980-100209af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10020980(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1d54) + 0x1304);
  piVar1 = (int *)(iVar2 + 0x634);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(iVar2 + 0x630) <= *(int *)(iVar2 + 0x624))) {
    FUN_10052215((void *)(iVar2 + 4),'\0');
  }
  return;
}

