/*
 * FUN_18003f330 at 18003f330
 * undefined __fastcall FUN_18003f330(longlong param_1)
 * Address ranges: 18003f330-18003f3b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003f330(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar2 = 0;
      goto LAB_18003f35f;
    }
    do {
      lVar2 = uVar4 * 0x30 + *(longlong *)(param_1 + 0x18);
LAB_18003f35f:
      puVar1 = *(undefined8 **)(lVar2 + 0x28);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_18003f3b8(puVar1);
        FUN_1800fbcf0(puVar1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

