/*
 * FUN_1800bd374 at 1800bd374
 * ulonglong __fastcall FUN_1800bd374(longlong param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 1800bd374-1800bd43d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800bd374(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  ulonglong uVar4;
  
  uVar4 = 0x8876086c;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xf0)) {
    lVar1 = *(longlong *)(param_1 + -0x6808 + (ulonglong)param_2 * 8);
    if (lVar1 == 0) {
      *param_3 = 0;
      uVar4 = 0x88760866;
    }
    else {
      uVar4 = FUN_1800c1048(lVar1 + 0x80,(longlong *)&DAT_1800fd6c0,param_3);
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar4;
}

