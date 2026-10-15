/*
 * FUN_100aae63 at 100aae63
 * undefined4 __fastcall FUN_100aae63(int param_1)
 * Address ranges: 100aae63-100aae8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100aae63(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar1,
     iVar1 == *(int *)(param_1 + 0x28))) {
    uVar2 = FUN_100aaf88(param_1);
    if ((char)uVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x24);
}

