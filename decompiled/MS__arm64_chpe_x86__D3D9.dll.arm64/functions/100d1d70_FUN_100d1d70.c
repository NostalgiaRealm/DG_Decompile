/*
 * FUN_100d1d70 at 100d1d70
 * undefined FUN_100d1d70(void)
 * Address ranges: 100d1d70-100d1e1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d1d70(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_1012e248();
  if (iVar4 != 0) {
    puVar1 = (uint *)(iVar4 + 0x58);
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        if (*(undefined ***)(*(int *)(iVar4 + 0x54) + uVar5 * 4) == &PTR_PTR_1016f948) {
          if (uVar5 != 0xffffffff) {
            uVar5 = uVar5 + 1;
            if (uVar5 < uVar3) {
              do {
                puVar2 = (undefined4 *)(*(int *)(iVar4 + 0x54) + uVar5 * 4);
                uVar5 = uVar5 + 1;
                puVar2[-1] = *puVar2;
              } while (uVar5 < *puVar1);
            }
            *puVar1 = *puVar1 - 1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    FUN_1012ec50(iVar4);
  }
  return;
}

