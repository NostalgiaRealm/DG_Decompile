/*
 * FUN_180016d2c at 180016d2c
 * undefined4 __fastcall FUN_180016d2c(longlong param_1, undefined4 * param_2)
 * Address ranges: 180016d2c-180016dc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180016d2c(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    if (((*(byte *)(*(longlong *)(param_1 + 0x50) + 0xe78) & 4) == 0) &&
       (DAT_1801123a8[1].LockCount == 0)) {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      BVar2 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar2 == 0) {
        FUN_1800044dc(0);
      }
    }
    FUN_180003b0c(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xe28),*(uint *)(param_1 + 0xe8),
                  param_2);
    uVar3 = 0;
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
      uVar3 = 0;
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

