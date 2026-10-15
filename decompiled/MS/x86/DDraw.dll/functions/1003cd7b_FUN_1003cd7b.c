/*
 * FUN_1003cd7b at 1003cd7b
 * undefined4 __fastcall FUN_1003cd7b(int param_1)
 * Address ranges: 1003cd7b-1003cda2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003cd7b(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar1,
     iVar1 == *(int *)(param_1 + 0x28))) {
    uVar2 = FUN_1003cea0(param_1);
    if ((char)uVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x24);
}

