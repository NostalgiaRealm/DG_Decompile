/*
 * FUN_100426d8 at 100426d8
 * undefined FUN_100426d8(void)
 * Address ranges: 100426d8-10042783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100426d8(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar4 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      iVar3 = 0;
      goto LAB_10042724;
    }
    do {
      iVar3 = *(int *)(param_1 + 0xc) + uVar4 * 0x40;
LAB_10042724:
      puVar2 = *(undefined4 **)(iVar3 + 0x38);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_101296c8;
        FUN_10041fd0(puVar2 + 4);
        FUN_100fec90(puVar2,0x78);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  FUN_100fed00(*(undefined4 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

