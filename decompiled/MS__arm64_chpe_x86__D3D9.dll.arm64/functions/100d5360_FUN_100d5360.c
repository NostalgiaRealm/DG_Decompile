/*
 * FUN_100d5360 at 100d5360
 * undefined FUN_100d5360(void)
 * Address ranges: 100d5360-100d543b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d5360(int param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(uint *)(param_1 + 0xd98) != 0) {
    uVar5 = 0;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0xd94) + uVar5 * 4);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar3 + -8;
      }
      if (((iVar4 != 0) && (param_2 == *(int *)(iVar4 + 0xac))) && (*(char *)(iVar4 + 0xbd) == '\0')
         ) {
        return iVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xd98));
  }
  if (*(uint *)(param_1 + 0xdf8) != 0) {
    uVar5 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0xdf4) + uVar5 * 4);
      piVar1 = (int *)&DAT_000000ac;
      if (iVar4 != 0) {
        piVar1 = (int *)(iVar4 + 0xa4);
      }
      if (param_2 == *piVar1) {
        pcVar2 = &DAT_000000bd;
        if (iVar4 != 0) {
          pcVar2 = (char *)(iVar4 + 0xb5);
        }
        if (*pcVar2 == '\0') {
          if (iVar4 == 0) {
            return 0;
          }
          return iVar4 + -8;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xdf8));
  }
  return 0;
}

