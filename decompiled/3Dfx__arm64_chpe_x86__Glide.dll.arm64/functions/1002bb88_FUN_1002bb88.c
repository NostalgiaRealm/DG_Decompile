/*
 * FUN_1002bb88 at 1002bb88
 * undefined FUN_1002bb88(void)
 * Address ranges: 1002bb88-1002bbff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1002bb88(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong local_20 [2];
  
  (*(code *)PTR_FUN_1009d0b0)(local_20);
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (local_20[0] <= *(longlong *)(param_1 + ((*(int *)(param_1 + 0x38) + uVar2) % 7 + 4) * 0x10))
    {
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return iVar1;
}

