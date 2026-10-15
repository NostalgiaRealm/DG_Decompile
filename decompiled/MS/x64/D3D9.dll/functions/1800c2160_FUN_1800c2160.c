/*
 * FUN_1800c2160 at 1800c2160
 * ulonglong __fastcall FUN_1800c2160(longlong param_1, uint param_2, int param_3, undefined8 * param_4)
 * Address ranges: 1800c2160-1800c2225
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800c2160(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x178) + 0xe78) & 4) == 0) &&
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
  *param_4 = 0;
  uVar3 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0xd4)) && (param_3 == 0)) {
    uVar3 = FUN_1800c1048(*(longlong *)(param_1 + 0x60 + (ulonglong)(param_2 + 1) * 8) + 0x80,
                          (longlong *)&DAT_1800fd6c0,param_4);
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

