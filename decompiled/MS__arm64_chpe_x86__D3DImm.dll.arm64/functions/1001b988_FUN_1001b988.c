/*
 * FUN_1001b988 at 1001b988
 * undefined FUN_1001b988(void)
 * Address ranges: 1001b988-1001ba33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b988(int param_1)

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
      goto LAB_1001b9d4;
    }
    do {
      iVar3 = *(int *)(param_1 + 0xc) + uVar4 * 0x40;
LAB_1001b9d4:
      puVar2 = *(undefined4 **)(iVar3 + 0x38);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_1009c768;
        FUN_1001b350(puVar2 + 4);
        FUN_10081d50(puVar2,0x78);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  FUN_10081dc0(*(undefined4 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

