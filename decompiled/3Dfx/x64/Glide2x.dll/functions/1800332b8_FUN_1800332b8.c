/*
 * FUN_1800332b8 at 1800332b8
 * undefined __fastcall FUN_1800332b8(longlong param_1)
 * Address ranges: 1800332b8-180033331
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800332b8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x10))();
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8);
  uVar2 = (ulonglong)uVar1;
  FUN_18004ca44(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),uVar1,
                *(longlong **)(param_1 + 0x6b8));
  FUN_180031aa4(param_1,uVar2);
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x218 + lVar3 * 0x180) != 0) {
      FUN_1800371c0((uint *)(param_1 + 0x148 + lVar3 * 0x180));
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return;
}

