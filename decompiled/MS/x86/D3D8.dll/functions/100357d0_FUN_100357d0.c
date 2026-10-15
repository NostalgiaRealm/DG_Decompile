/*
 * FUN_100357d0 at 100357d0
 * undefined __fastcall FUN_100357d0(int param_1)
 * Address ranges: 100357d0-100357ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100357d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x1304);
  piVar1 = (int *)(iVar2 + 0x634);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(iVar2 + 0x630) <= *(int *)(iVar2 + 0x624))) {
    FUN_10098768((void *)(iVar2 + 4),'\0');
  }
  return;
}

