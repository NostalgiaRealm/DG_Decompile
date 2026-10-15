/*
 * FUN_18007df30 at 18007df30
 * undefined __fastcall FUN_18007df30(uint * param_1, longlong param_2, longlong param_3, longlong * param_4)
 * Address ranges: 18007df30-18007df9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007df30(uint *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(*(longlong *)(param_3 + 0x10) + 0x4a28 + lVar2 * 4);
    if (uVar1 != 0) {
      FUN_180085828(param_1,(uint *)(param_2 + -4 + (ulonglong)uVar1 * 4),param_3,param_4);
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,0x3e,0);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  return;
}

