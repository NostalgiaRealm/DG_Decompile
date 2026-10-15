/*
 * FUN_1800b4318 at 1800b4318
 * undefined4 __fastcall FUN_1800b4318(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800b4318-1800b43b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b4318(longlong param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_2 < 6) && (param_3 != 0)) {
    if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
    FUN_18001d54c(param_1 + -0x6838,param_2,param_3);
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

