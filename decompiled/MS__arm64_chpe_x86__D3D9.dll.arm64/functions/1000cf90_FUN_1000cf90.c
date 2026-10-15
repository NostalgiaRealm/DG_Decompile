/*
 * FUN_1000cf90 at 1000cf90
 * undefined FUN_1000cf90(void)
 * Address ranges: 1000cf90-1000d093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cf90(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0xd98) != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xd94) + uVar3 * 4) == param_2) {
        if (uVar3 != 0xffffffff) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xd98));
  }
  puVar1 = (uint *)(param_1 + 0xdf8);
  if (*puVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xdf4) + uVar3 * 4) == param_2) {
        if (uVar3 == 0xffffffff) {
          return;
        }
        (&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45] =
             (&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45] +
             (ulonglong)*(uint *)(param_2 + 0xcc);
        uVar4 = *puVar1;
        if (uVar4 <= uVar3) {
          return;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar4) {
          do {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 0xdf4) + uVar3 * 4);
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

