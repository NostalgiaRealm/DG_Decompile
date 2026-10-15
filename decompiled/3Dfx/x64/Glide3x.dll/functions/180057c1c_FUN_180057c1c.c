/*
 * FUN_180057c1c at 180057c1c
 * undefined __fastcall FUN_180057c1c(longlong param_1)
 * Address ranges: 180057c1c-180057cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057c1c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  do {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x28 + lVar3 * 0x10) != 0) {
      do {
        FUN_180060ac0(*(LPVOID *)(*(longlong *)(param_1 + (lVar3 + 2) * 0x10) + uVar2 * 8));
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x28 + lVar3 * 0x10));
    }
    FUN_180060ac0(*(LPVOID *)(param_1 + 0x20 + lVar3 * 0x10));
    *(undefined8 *)(param_1 + 0x20 + lVar3 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28 + lVar3 * 0x10) = 0;
    FUN_180060ac0(*(LPVOID *)(param_1 + 0x120 + lVar3 * 0x10));
    *(undefined8 *)(param_1 + 0x120 + lVar3 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x128 + lVar3 * 0x10) = 0;
    FUN_180060ac0(*(LPVOID *)(param_1 + 0x220 + lVar3 * 0x10));
    lVar4 = lVar3 + 1;
    *(undefined8 *)(param_1 + 0x220 + lVar3 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x228 + lVar3 * 0x10) = 0;
    lVar3 = lVar4;
  } while (lVar4 != 0x10);
  return;
}

