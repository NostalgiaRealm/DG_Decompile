/*
 * FUN_100aca40 at 100aca40
 * undefined FUN_100aca40(void)
 * Address ranges: 100aca40-100acb33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100aca40(int param_1)

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
          FUN_100cef48(param_1,*(undefined4 *)(param_1 + 0x18),uVar2);
          uVar1 = FUN_100ceef0(param_1,*(undefined4 *)(param_1 + 0x14),uVar2);
          (*(code *)PTR_FUN_1016c26c)
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

