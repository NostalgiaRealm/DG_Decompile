/*
 * FUN_1400133c0 at 1400133c0
 * undefined __cdecl FUN_1400133c0(longlong param_1)
 * Address ranges: 1400133c0-140013473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400133c0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  do {
    lVar5 = lVar4 * 0x10;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x28 + lVar5) != 0) {
      do {
        thunk_FUN_140024830(*(LPVOID *)(*(longlong *)(param_1 + (lVar4 + 2) * 0x10) + uVar3 * 8));
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + param_1 + 0x28));
    }
    lVar2 = param_1 + lVar5;
    thunk_FUN_140024830(*(LPVOID *)(lVar2 + 0x20));
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28 + lVar5) = 0;
    *(undefined4 *)(lVar2 + 0x2c) = 0;
    thunk_FUN_140024830(*(LPVOID *)(lVar2 + 0x120));
    *(undefined8 *)(lVar2 + 0x120) = 0;
    *(undefined8 *)(lVar2 + 0x128) = 0;
    thunk_FUN_140024830(*(LPVOID *)(lVar2 + 0x220));
    lVar4 = lVar4 + 1;
    *(undefined8 *)(lVar2 + 0x220) = 0;
    *(undefined8 *)(lVar2 + 0x228) = 0;
  } while (lVar4 != 0x10);
  return;
}

