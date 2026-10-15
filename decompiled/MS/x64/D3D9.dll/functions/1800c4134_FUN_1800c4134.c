/*
 * FUN_1800c4134 at 1800c4134
 * ulonglong __fastcall FUN_1800c4134(longlong param_1, uint param_2)
 * Address ranges: 1800c4134-1800c41ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800c4134(longlong param_1,uint param_2)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  byte *pbVar4;
  
  uVar3 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + -0xdc)) {
    pbVar4 = (byte *)(*(longlong *)(param_1 + -0x100) + -0x59c0);
    if (*(longlong *)(param_1 + -0x100) == 0) {
      pbVar4 = &DAT_00000e78;
    }
    if (((*pbVar4 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
    uVar3 = FUN_18001895c(*(longlong *)(param_1 + -0xd8 + (ulonglong)param_2 * 8));
    uVar3 = uVar3 & 0xffffffff;
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

