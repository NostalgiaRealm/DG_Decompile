/*
 * FUN_100224c0 at 100224c0
 * undefined FUN_100224c0(void)
 * Address ranges: 100224c0-100225ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100224c0(int param_1)

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
          FUN_100340e8(param_1,*(undefined4 *)(param_1 + 0x18),uVar2);
          uVar1 = FUN_10034090(param_1,*(undefined4 *)(param_1 + 0x14),uVar2);
          (*(code *)PTR_FUN_100ba2b8)
                    (*(int *)(param_1 + 0x5c) + (uVar2 + *(int *)(param_1 + 0x2c) * uVar3) * 0x20 +
                     0x10,0,0,uVar1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x20));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x24));
  }
  return;
}

