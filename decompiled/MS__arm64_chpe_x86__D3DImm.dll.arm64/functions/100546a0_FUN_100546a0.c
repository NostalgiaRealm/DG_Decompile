/*
 * FUN_100546a0 at 100546a0
 * undefined FUN_100546a0(void)
 * Address ranges: 100546a0-10054777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100546a0(int param_1,int param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x1518) == param_2) {
    *(int *)(param_1 + 0x1518) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x151c)) {
    *(int *)(param_1 + 0x151c) = 0;
    *(undefined4 *)(param_1 + 0x1520) = 0;
  }
  if (*(uint *)(param_1 + 0x1528) != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x1524) + uVar3 * 8) == param_2) {
        puVar1 = (uint *)(param_1 + 0x1528);
        uVar4 = *puVar1;
        if (uVar4 <= uVar3) {
          return;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar4) {
          do {
            puVar2 = (undefined8 *)(*(int *)(param_1 + 0x1524) + uVar3 * 8);
            uVar3 = uVar3 + 1;
            puVar2[-1] = *puVar2;
            uVar4 = *puVar1;
          } while (uVar3 < uVar4);
        }
        *puVar1 = uVar4 - 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x1528));
  }
  return;
}

