/*
 * FUN_1000c550 at 1000c550
 * undefined FUN_1000c550(void)
 * Address ranges: 1000c550-1000c62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c550(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_1 + 0xb7c);
  if (*puVar1 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xb78) + uVar4 * 4) == param_2) {
        if (uVar4 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_2 + 0x3c) == 0) && (*(int *)(param_1 + 0xb04) == 1)) {
          (&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] =
               (&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] +
               (ulonglong)*(uint *)(param_2 + 0x10);
        }
        uVar3 = *puVar1;
        if (uVar3 <= uVar4) {
          return;
        }
        uVar4 = uVar4 + 1;
        if (uVar4 < uVar3) {
          do {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 0xb78) + uVar4 * 4);
            uVar4 = uVar4 + 1;
            puVar2[-1] = *puVar2;
            uVar3 = *puVar1;
          } while (uVar4 < uVar3);
        }
        *puVar1 = uVar3 - 1;
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  return;
}

