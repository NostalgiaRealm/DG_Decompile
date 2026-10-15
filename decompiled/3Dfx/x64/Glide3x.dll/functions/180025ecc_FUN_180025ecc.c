/*
 * FUN_180025ecc at 180025ecc
 * undefined __fastcall FUN_180025ecc(longlong param_1)
 * Address ranges: 180025ecc-180025f45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180025ecc(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0xcb0) + 0x10))();
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338);
  uVar2 = (ulonglong)uVar1;
  FUN_18004f050(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),uVar1,
                *(longlong **)(param_1 + 0xcb8));
  FUN_1800246b0(param_1,uVar2);
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x218 + lVar3 * 0x180) != 0) {
      FUN_180029a18((uint *)(param_1 + 0x148 + lVar3 * 0x180));
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 7);
  return;
}

