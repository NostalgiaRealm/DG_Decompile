/*
 * FUN_18003dab8 at 18003dab8
 * undefined __fastcall FUN_18003dab8(longlong param_1)
 * Address ranges: 18003dab8-18003db47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003dab8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar2 = 0;
      goto LAB_18003dae5;
    }
    do {
      lVar2 = (ulonglong)uVar3 * 0x40 + *(longlong *)(param_1 + 0x18);
LAB_18003dae5:
      puVar1 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_D3DPERF_GetStatus_180101cc8;
        FUN_18003d358(puVar1 + 2);
        FUN_1800fbcf0(puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

