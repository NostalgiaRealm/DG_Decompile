/*
 * FUN_18015f638 at 18015f638
 * undefined FUN_18015f638(void)
 * Address ranges: 18015f638-18015f6db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015f638(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar2 = 0;
      goto LAB_18015f67c;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x20) + uVar3 * 0x40;
LAB_18015f67c:
      puVar4 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_18022bc58;
        FUN_18015f2f0(puVar4);
        FUN_1802229d8(puVar4,0x90);
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_1802229d8(0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

