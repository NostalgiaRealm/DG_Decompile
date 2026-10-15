/*
 * FUN_1006ff18 at 1006ff18
 * undefined FUN_1006ff18(void)
 * Address ranges: 1006ff18-1006ffc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006ff18(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar4 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      iVar3 = 0;
      goto LAB_1006ff64;
    }
    do {
      iVar3 = *(int *)(param_1 + 0x10) + uVar4 * 0x40;
LAB_1006ff64:
      puVar2 = *(undefined4 **)(iVar3 + 0x38);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_1015ed04;
        FUN_1006f8c0(puVar2);
        FUN_10132260(puVar2,0x80);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x14));
  }
  FUN_101322d0(*(undefined4 *)(param_1 + 0xc));
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}

