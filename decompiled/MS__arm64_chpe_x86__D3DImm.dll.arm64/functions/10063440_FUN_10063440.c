/*
 * FUN_10063440 at 10063440
 * undefined FUN_10063440(void)
 * Address ranges: 10063440-10063547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063440(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x1efc) != '\0') {
    uVar4 = 0;
    if (*(uint *)(param_1 + 0xa0) != 0) {
      do {
        FUN_100546a0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + uVar4 * 4),param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0xa0));
    }
  }
  if (*(uint *)(param_1 + 0xac) != 0) {
    uVar4 = 0;
    do {
      if (param_2 == *(int *)(*(int *)(param_1 + 0xa8) + uVar4 * 4)) {
        puVar1 = (uint *)(param_1 + 0xac);
        uVar3 = *puVar1;
        if (uVar3 <= uVar4) {
          return;
        }
        uVar4 = uVar4 + 1;
        if (uVar4 < uVar3) {
          do {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 0xa8) + uVar4 * 4);
            uVar4 = uVar4 + 1;
            puVar2[-1] = *puVar2;
            uVar3 = *puVar1;
          } while (uVar4 < uVar3);
        }
        *puVar1 = uVar3 - 1;
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0xac));
  }
  return;
}

