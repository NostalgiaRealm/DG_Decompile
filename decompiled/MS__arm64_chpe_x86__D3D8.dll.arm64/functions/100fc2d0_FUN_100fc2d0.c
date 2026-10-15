/*
 * FUN_100fc2d0 at 100fc2d0
 * undefined FUN_100fc2d0(void)
 * Address ranges: 100fc2d0-100fc313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100fc2d0(int param_1,int param_2)

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

