/*
 * FUN_18004fcb0 at 18004fcb0
 * undefined FUN_18004fcb0(void)
 * Address ranges: 18004fcb0-18004fd43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fcb0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar2 = 0;
      goto LAB_18004fcf4;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x20) + uVar3 * 0x40;
LAB_18004fcf4:
      puVar4 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_1802345f8;
        FUN_18004f628(puVar4);
        FUN_180102fc0(puVar4,0x90);
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

