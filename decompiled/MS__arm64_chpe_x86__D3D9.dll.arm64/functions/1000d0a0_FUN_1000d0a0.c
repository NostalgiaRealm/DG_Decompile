/*
 * FUN_1000d0a0 at 1000d0a0
 * undefined FUN_1000d0a0(void)
 * Address ranges: 1000d0a0-1000d177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d0a0(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (uint *)(param_1 + 0xe04);
  if (*puVar1 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xe00) + uVar4 * 4) == param_2) {
        if (uVar4 == 0xffffffff) {
          return;
        }
        (&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45] =
             (&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45] +
             (ulonglong)*(uint *)(param_2 + 0x68);
        uVar5 = *puVar1;
        if (uVar4 < uVar5) {
          uVar4 = uVar4 + 1;
          if (uVar4 < uVar5) {
            do {
              puVar2 = (undefined4 *)(*(int *)(param_1 + 0xe00) + uVar4 * 4);
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
        FUN_10001d20(param_1,iVar3);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  return;
}

