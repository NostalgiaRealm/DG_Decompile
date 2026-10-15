/*
 * FUN_1801fbee8 at 1801fbee8
 * undefined FUN_1801fbee8(void)
 * Address ranges: 1801fbee8-1801fbfaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fbee8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FUN_1801fe510();
    *(undefined8 *)(param_1 + 0x480) = 0;
    lVar4 = 0;
    do {
      lVar5 = lVar4 * 0x10;
      uVar3 = 0;
      if (*(int *)(param_1 + 0x28 + lVar5) != 0) {
        do {
          FUN_1802229d8(*(undefined8 *)(*(longlong *)(param_1 + (lVar4 + 2) * 0x10) + uVar3 * 8));
          uVar1 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar5 + param_1 + 0x28));
      }
      lVar2 = param_1 + lVar5;
      FUN_1802229d8(*(undefined8 *)(lVar2 + 0x20));
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28 + lVar5) = 0;
      *(undefined4 *)(lVar2 + 0x2c) = 0;
      FUN_1802229d8(*(undefined8 *)(lVar2 + 0x120));
      *(undefined8 *)(lVar2 + 0x120) = 0;
      *(undefined8 *)(lVar2 + 0x128) = 0;
      FUN_1802229d8(*(undefined8 *)(lVar2 + 0x220));
      lVar4 = lVar4 + 1;
      *(undefined8 *)(lVar2 + 0x220) = 0;
      *(undefined8 *)(lVar2 + 0x228) = 0;
    } while (lVar4 != 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

