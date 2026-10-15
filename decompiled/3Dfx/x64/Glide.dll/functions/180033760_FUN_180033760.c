/*
 * FUN_180033760 at 180033760
 * undefined __fastcall FUN_180033760(longlong param_1)
 * Address ranges: 180033760-1800337d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033760(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x10))();
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8);
  uVar2 = (ulonglong)uVar1;
  FUN_18004ceec(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),uVar1,
                *(longlong **)(param_1 + 0x6b8));
  FUN_180031f4c(param_1,uVar2);
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x218 + lVar3 * 0x180) != 0) {
      FUN_180037668((uint *)(param_1 + 0x148 + lVar3 * 0x180));
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return;
}

