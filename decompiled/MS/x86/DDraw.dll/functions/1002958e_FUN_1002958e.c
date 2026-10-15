/*
 * FUN_1002958e at 1002958e
 * undefined __fastcall FUN_1002958e(int param_1)
 * Address ranges: 1002958e-100295ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002958e(int param_1)

{
  int iVar1;
  void *this;
  int extraout_EDX;
  
  iVar1 = FUN_10024537(*(int *)(param_1 + 0xc));
  if (iVar1 == extraout_EDX) {
    FUN_1002454b(this,*(uint *)(extraout_EDX + 0x10) >> 7 & 1);
  }
  return;
}

