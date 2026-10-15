/*
 * FUN_100b1c10 at 100b1c10
 * undefined FUN_100b1c10(void)
 * Address ranges: 100b1c10-100b1c9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b1c10(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (**(int **)(param_1 + 0xad0) != 0) {
    iVar2 = **(int **)(param_1 + 0xad0) + -8;
  }
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0xbd) == '\0') {
      return iVar2;
    }
    if (*(uint *)(param_1 + 0xb34) != 0) {
      uVar3 = 0;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0xb30) + uVar3 * 4);
        pcVar1 = &DAT_000000bd;
        if (iVar2 != 0) {
          pcVar1 = (char *)(iVar2 + 0xb5);
        }
        if (*pcVar1 == '\0') {
          if (iVar2 == 0) {
            return 0;
          }
          return iVar2 + -8;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xb34));
    }
  }
  return 0;
}

