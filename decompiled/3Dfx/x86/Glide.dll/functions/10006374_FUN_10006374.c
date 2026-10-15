/*
 * FUN_10006374 at 10006374
 * undefined4 __fastcall FUN_10006374(int param_1)
 * Address ranges: 10006374-1000639b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10006374(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar1,
     iVar1 == *(int *)(param_1 + 0x28))) {
    uVar2 = FUN_10006499(param_1);
    if ((char)uVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x24);
}

