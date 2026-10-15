/*
 * FUN_10063550 at 10063550
 * undefined FUN_10063550(void)
 * Address ranges: 10063550-100635e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063550(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar3 = 0;
    do {
      if (param_2 == *(int *)(*(int *)(param_1 + 0xb4) + uVar3 * 4)) {
        puVar1 = (uint *)(param_1 + 0xb8);
        uVar4 = *puVar1;
        if (uVar4 <= uVar3) {
          return;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar4) {
          do {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 0xb4) + uVar3 * 4);
            uVar3 = uVar3 + 1;
            puVar2[-1] = *puVar2;
            uVar4 = *puVar1;
          } while (uVar3 < uVar4);
        }
        *puVar1 = uVar4 - 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xb8));
  }
  return;
}

