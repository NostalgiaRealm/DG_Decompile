/*
 * FUN_1800157d8 at 1800157d8
 * undefined4 __fastcall FUN_1800157d8(longlong * param_1)
 * Address ranges: 1800157d8-180015884
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800157d8(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  bVar1 = true;
  uVar3 = 0x8876086c;
  if ((*(uint *)(param_1[1] + 0x100) >> 0xb & 1) != 0) {
    if (((*(byte *)(param_1[5] + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      bVar1 = false;
    }
    else {
      BVar2 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar2 == 0) {
        FUN_1800044dc(0);
      }
    }
    uVar3 = FUN_1800155b0(param_1,'\0');
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

