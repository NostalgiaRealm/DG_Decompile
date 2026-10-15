/*
 * FUN_1003146f at 1003146f
 * undefined __fastcall FUN_1003146f(int param_1)
 * Address ranges: 1003146f-100314af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003146f(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) != 0) {
    if ((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x160);
    }
    else {
      iVar2 = *(int *)(*piVar1 + 0x10);
    }
    FUN_1000638e((void *)*piVar1,*(int *)(param_1 + 0x174),iVar2);
  }
  FUN_10006367((void *)*piVar1);
  return;
}

