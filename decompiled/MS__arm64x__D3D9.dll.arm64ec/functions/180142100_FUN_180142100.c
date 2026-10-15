/*
 * FUN_180142100 at 180142100
 * undefined FUN_180142100(void)
 * Address ranges: 180142100-18014219b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180142100(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar3 = 0;
      goto LAB_180142140;
    }
    do {
      lVar3 = *(longlong *)(param_1 + 0x18) + uVar2 * 0x30;
LAB_180142140:
      lVar3 = *(longlong *)(lVar3 + 0x28);
      if (lVar3 != 0) {
        FUN_1801421e0(lVar3);
        FUN_1802229d8(lVar3,0x2f8);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
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

