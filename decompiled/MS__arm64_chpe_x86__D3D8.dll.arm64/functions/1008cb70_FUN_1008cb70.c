/*
 * FUN_1008cb70 at 1008cb70
 * undefined FUN_1008cb70(void)
 * Address ranges: 1008cb70-1008cc63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008cb70(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x24) != 0) {
    do {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        do {
          FUN_100ae528(param_1,*(undefined4 *)(param_1 + 0x18),uVar2);
          uVar1 = FUN_100ae4d0(param_1,*(undefined4 *)(param_1 + 0x14),uVar2);
          (*(code *)PTR_FUN_1013426c)
                    (*(int *)(param_1 + 0xc4) + (uVar2 + *(int *)(param_1 + 0x2c) * uVar3) * 0x1c +
                     0xc,0,0,uVar1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x20));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x24));
  }
  return;
}

