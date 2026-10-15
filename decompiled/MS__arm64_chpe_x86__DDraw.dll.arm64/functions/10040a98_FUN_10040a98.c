/*
 * FUN_10040a98 at 10040a98
 * undefined FUN_10040a98(void)
 * Address ranges: 10040a98-10040b43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040a98(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_1008cfc8();
  if (iVar4 != 0) {
    puVar1 = (uint *)(iVar4 + 0x58);
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        if (*(undefined ***)(*(int *)(iVar4 + 0x54) + uVar5 * 4) == &PTR_PTR_100bd0d0) {
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
    FUN_1008d9d0(iVar4);
  }
  return;
}

