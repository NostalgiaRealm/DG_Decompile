/*
 * FUN_1800591f4 at 1800591f4
 * undefined __fastcall FUN_1800591f4(longlong param_1)
 * Address ranges: 1800591f4-18005927a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800591f4(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar2 = 0;
      goto LAB_180059223;
    }
    do {
      lVar2 = uVar4 * 0x30 + *(longlong *)(param_1 + 0x18);
LAB_180059223:
      puVar1 = *(undefined8 **)(lVar2 + 0x28);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_18005927c(puVar1);
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

