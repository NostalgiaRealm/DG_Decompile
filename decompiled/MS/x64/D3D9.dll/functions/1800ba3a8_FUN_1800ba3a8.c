/*
 * FUN_1800ba3a8 at 1800ba3a8
 * undefined __fastcall FUN_1800ba3a8(longlong param_1)
 * Address ranges: 1800ba3a8-1800ba454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ba3a8(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xed8) != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xed0) + uVar2 * 8);
      if (*(int *)(lVar1 + 0x7c) == 1) {
        FUN_180017af0(lVar1,lVar1 + 0xb0);
      }
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0xed8));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xec8) != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xec0) + uVar2 * 8);
      if (*(int *)(lVar1 + 0x7c) == 1) {
        FUN_180017af0(lVar1,lVar1 + 0xb0);
      }
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0xec8));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xef8) != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xef0) + uVar2 * 8);
      if (*(int *)(lVar1 + 0x54) == 1) {
        *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0xf0) = 0;
      }
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0xef8));
  }
  return;
}

