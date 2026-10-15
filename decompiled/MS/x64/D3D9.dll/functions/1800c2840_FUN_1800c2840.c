/*
 * FUN_1800c2840 at 1800c2840
 * ulonglong __fastcall FUN_1800c2840(longlong param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 1800c2840-1800c2915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800c2840(longlong param_1,uint param_2,undefined8 *param_3)

{
  bool bVar1;
  BOOL BVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)(*(longlong *)(param_1 + -0x80) + -0x59c0);
  if (*(longlong *)(param_1 + -0x80) == 0) {
    pbVar5 = &DAT_00000e78;
  }
  if (((*pbVar5 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar1 = false;
  }
  else {
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    bVar1 = true;
    if (BVar2 == 0) {
      FUN_1800044dc(0);
      bVar1 = true;
    }
  }
  uVar3 = 1;
  if ((*(uint *)(param_1 + -0x28) & 0x400) == 0) {
    uVar3 = (uint)*(ushort *)(param_1 + -0x5c);
  }
  uVar4 = 0x8876086c;
  if ((param_2 < uVar3) && (param_3 != (undefined8 *)0x0)) {
    uVar4 = FUN_1800c1048(*(longlong *)(param_1 + 0x18 + (ulonglong)param_2 * 8) + 0x80,
                          (longlong *)&DAT_1800fd6c0,param_3);
    uVar4 = uVar4 & 0xffffffff;
  }
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar4;
}

