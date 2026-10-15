/*
 * FUN_1001c3b8 at 1001c3b8
 * undefined FUN_1001c3b8(void)
 * Address ranges: 1001c3b8-1001c42f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001c3b8(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong local_20 [2];
  
  (*(code *)PTR_FUN_100a80b0)(local_20);
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

