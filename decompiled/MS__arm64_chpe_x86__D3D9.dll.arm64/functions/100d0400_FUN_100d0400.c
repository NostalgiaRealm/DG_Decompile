/*
 * FUN_100d0400 at 100d0400
 * undefined FUN_100d0400(void)
 * Address ranges: 100d0400-100d04c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d0400(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_1 + 0xb8);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xb4) + uVar4 * 4) == param_2) {
        if (uVar4 != 0xffffffff) {
          uVar4 = uVar4 + 1;
          if (uVar4 < uVar3) {
            do {
              puVar2 = (undefined4 *)(*(int *)(param_1 + 0xb4) + uVar4 * 4);
              uVar4 = uVar4 + 1;
              puVar2[-1] = *puVar2;
            } while (uVar4 < *puVar1);
          }
          *puVar1 = *puVar1 - 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_101322d0(DAT_10170ac4);
    DAT_10170ac0 = 0;
    DAT_10170ac4 = 0;
  }
  return;
}

