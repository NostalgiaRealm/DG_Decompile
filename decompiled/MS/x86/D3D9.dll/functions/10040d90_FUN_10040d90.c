/*
 * FUN_10040d90 at 10040d90
 * undefined __fastcall FUN_10040d90(int param_1)
 * Address ranges: 10040d90-10040dbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10040d90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
  piVar1 = (int *)(iVar2 + 0x634);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(iVar2 + 0x630) <= *(int *)(iVar2 + 0x624))) {
    FUN_100bad40((void *)(iVar2 + 4),'\0');
  }
  return;
}

