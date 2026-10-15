/*
 * FUN_100635f0 at 100635f0
 * undefined FUN_100635f0(void)
 * Address ranges: 100635f0-1006374b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100635f0(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_40 [16];
  
  if (*(char *)(param_1 + 0x1efc) != '\0') {
    FUN_10096840(auStack_40);
    uVar5 = 0;
    if (*(uint *)(param_1 + 0xa0) != 0) {
      do {
        FUN_10054660(*(undefined4 *)(*(int *)(param_1 + 0x9c) + uVar5 * 4),param_2);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0xa0));
    }
    uVar5 = 0;
    if (*(uint *)(param_1 + 0xac) != 0) {
      do {
        piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0xa8) + uVar5 * 4) + 0x88);
        if (*piVar1 == param_2) {
          *piVar1 = 0;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0xac));
    }
    if (*(uint *)(param_1 + 0xc4) != 0) {
      uVar5 = 0;
      do {
        if (param_2 == *(int *)(*(int *)(param_1 + 0xc0) + uVar5 * 4)) {
          puVar2 = (uint *)(param_1 + 0xc4);
          uVar4 = *puVar2;
          if (uVar5 < uVar4) {
            uVar5 = uVar5 + 1;
            if (uVar5 < uVar4) {
              do {
                puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc0) + uVar5 * 4);
                uVar5 = uVar5 + 1;
                puVar3[-1] = *puVar3;
                uVar4 = *puVar2;
              } while (uVar5 < uVar4);
            }
            *puVar2 = uVar4 - 1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0xc4));
    }
    FUN_10096790(auStack_40);
  }
  return;
}

