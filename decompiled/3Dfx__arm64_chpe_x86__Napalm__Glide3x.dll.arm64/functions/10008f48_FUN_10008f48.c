/*
 * FUN_10008f48 at 10008f48
 * undefined FUN_10008f48(void)
 * Address ranges: 10008f48-10008f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10008f48(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar2 != 0) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0xd0) + -0x48 + iVar2 * 0x48);
      if (*piVar1 == param_2) {
        return piVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}

