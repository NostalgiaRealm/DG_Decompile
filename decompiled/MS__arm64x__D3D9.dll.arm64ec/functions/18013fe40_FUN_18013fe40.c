/*
 * FUN_18013fe40 at 18013fe40
 * undefined FUN_18013fe40(void)
 * Address ranges: 18013fe40-18013fee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013fe40(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar2 = 0;
      goto LAB_18013fe84;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x18) + uVar3 * 0x40;
LAB_18013fe84:
      puVar4 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_D3DPERF_GetStatus_native_18022af30;
        FUN_18013f9b8(puVar4 + 2);
        FUN_1802229d8(puVar4,0x88);
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_1802229d8(0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

