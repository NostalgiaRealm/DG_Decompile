/*
 * FUN_1800b3a8c at 1800b3a8c
 * ulonglong __fastcall FUN_1800b3a8c(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800b3a8c-1800b3b42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b3a8c(longlong param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  uVar3 = 0x8876086c;
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
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xf0)) {
    uVar3 = FUN_1800b1160(param_1 + -0x6838,param_2,
                          (longlong *)(-(ulonglong)(param_3 != 0) & param_3 - 0x80U));
    uVar3 = uVar3 & 0xffffffff;
  }
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar3;
}

