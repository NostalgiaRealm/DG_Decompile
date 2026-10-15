/*
 * FUN_140011670 at 140011670
 * undefined __fastcall FUN_140011670(longlong param_1)
 * Address ranges: 140011670-14001172f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140011670(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x28 + uVar1 * 0x10) != 0) {
      uVar2 = 0;
      do {
        FUN_140024260(*(LPVOID *)(*(longlong *)(param_1 + (uVar1 + 2) * 0x10) + uVar2 * 8));
        uVar3 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x28 + uVar1 * 0x10));
    }
    FUN_140024260(*(LPVOID *)(param_1 + 0x20 + uVar1 * 0x10));
    *(undefined8 *)(param_1 + 0x20 + uVar1 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28 + uVar1 * 0x10) = 0;
    FUN_140024260(*(LPVOID *)(param_1 + 0x120 + uVar1 * 0x10));
    *(undefined8 *)(param_1 + 0x120 + uVar1 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x128 + uVar1 * 0x10) = 0;
    FUN_140024260(*(LPVOID *)(param_1 + 0x220 + uVar1 * 0x10));
    uVar2 = uVar1 + 1;
    *(undefined8 *)(param_1 + 0x220 + uVar1 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x228 + uVar1 * 0x10) = 0;
    uVar1 = uVar2;
  } while (uVar2 != 0x10);
  return;
}

