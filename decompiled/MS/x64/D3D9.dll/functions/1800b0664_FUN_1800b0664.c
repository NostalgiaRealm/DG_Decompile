/*
 * FUN_1800b0664 at 1800b0664
 * int __fastcall FUN_1800b0664(longlong param_1)
 * Address ranges: 1800b0664-1800b06bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b0664(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x10) + iVar2 + -1 == 0) {
    FUN_1800b0388((longlong *)(param_1 + -0x6838));
    FUN_1800afed8((longlong *)(param_1 + -0x6838));
    FUN_1800fbdd4(*(LPVOID *)(param_1 + -0x6840));
  }
  return iVar2 + -1;
}

