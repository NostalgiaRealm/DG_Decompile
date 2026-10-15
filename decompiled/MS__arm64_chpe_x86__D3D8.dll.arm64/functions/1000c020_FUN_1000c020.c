/*
 * FUN_1000c020 at 1000c020
 * undefined FUN_1000c020(void)
 * Address ranges: 1000c020-1000c0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c020(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (uint *)(param_1 + 0xb40);
  if (*puVar1 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xb3c) + uVar4 * 4) == param_2) {
        if (uVar4 == 0xffffffff) {
          return;
        }
        (&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] =
             (&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] +
             (ulonglong)*(uint *)(param_2 + 0x68);
        uVar5 = *puVar1;
        if (uVar4 < uVar5) {
          uVar4 = uVar4 + 1;
          if (uVar4 < uVar5) {
            do {
              puVar2 = (undefined4 *)(*(int *)(param_1 + 0xb3c) + uVar4 * 4);
              uVar4 = uVar4 + 1;
              puVar2[-1] = *puVar2;
              uVar5 = *puVar1;
            } while (uVar4 < uVar5);
          }
          *puVar1 = uVar5 - 1;
        }
        iVar3 = 0;
        if (param_2 != 0) {
          iVar3 = param_2 + 0x70;
        }
        FUN_10001cd0(param_1,iVar3);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  return;
}

