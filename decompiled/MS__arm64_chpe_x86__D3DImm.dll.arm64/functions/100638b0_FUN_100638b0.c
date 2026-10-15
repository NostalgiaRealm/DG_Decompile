/*
 * FUN_100638b0 at 100638b0
 * undefined FUN_100638b0(void)
 * Address ranges: 100638b0-10063953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100638b0(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(char *)(param_1 + 0x1efc) != '\0') && (*(uint *)(param_1 + 0xdc) != 0)) {
    uVar3 = 0;
    do {
      if (param_2 == *(int *)(*(int *)(param_1 + 0xd8) + uVar3 * 4)) {
        puVar1 = (uint *)(param_1 + 0xdc);
        uVar4 = *puVar1;
        if (uVar4 <= uVar3) {
          return;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar4) {
          do {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 0xd8) + uVar3 * 4);
            uVar3 = uVar3 + 1;
            puVar2[-1] = *puVar2;
            uVar4 = *puVar1;
          } while (uVar3 < uVar4);
        }
        *puVar1 = uVar4 - 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xdc));
  }
  return;
}

