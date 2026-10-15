/*
 * FUN_1000bf10 at 1000bf10
 * undefined FUN_1000bf10(void)
 * Address ranges: 1000bf10-1000c013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000bf10(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0xad4) != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xad0) + uVar3 * 4) == param_2) {
        if (uVar3 != 0xffffffff) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xad4));
  }
  puVar1 = (uint *)(param_1 + 0xb34);
  if (*puVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xb30) + uVar3 * 4) == param_2) {
        if (uVar3 == 0xffffffff) {
          return;
        }
        (&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] =
             (&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] +
             (ulonglong)*(uint *)(param_2 + 0xcc);
        uVar4 = *puVar1;
        if (uVar4 <= uVar3) {
          return;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar4) {
          do {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 0xb30) + uVar3 * 4);
            uVar3 = uVar3 + 1;
            puVar2[-1] = *puVar2;
            uVar4 = *puVar1;
          } while (uVar3 < uVar4);
        }
        *puVar1 = uVar4 - 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar1);
  }
  return;
}

