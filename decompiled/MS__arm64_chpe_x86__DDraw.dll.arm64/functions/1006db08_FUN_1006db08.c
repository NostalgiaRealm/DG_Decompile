/*
 * FUN_1006db08 at 1006db08
 * undefined FUN_1006db08(void)
 * Address ranges: 1006db08-1006dba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006db08(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_1 + 0x4bc);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x4b8) + uVar4 * 4) == param_2) {
        if (uVar4 != 0xffffffff) {
          uVar4 = uVar4 + 1;
          if (uVar4 < uVar3) {
            do {
              puVar2 = (undefined4 *)(*(int *)(param_1 + 0x4b8) + uVar4 * 4);
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
  FUN_10091460(param_2,0xd68);
  return;
}

