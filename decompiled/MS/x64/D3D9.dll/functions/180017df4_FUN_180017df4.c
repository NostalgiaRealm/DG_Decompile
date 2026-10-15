/*
 * FUN_180017df4 at 180017df4
 * undefined4 __fastcall FUN_180017df4(longlong param_1, int param_2, uint param_3)
 * Address ranges: 180017df4-180017ec8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180017df4(longlong param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  BOOL BVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  uVar4 = 0x8876086c;
  if (param_3 < *(ushort *)(param_1 + 0x3c)) {
    pbVar5 = (byte *)(*(longlong *)(param_1 + 0x18) + -0x59c0);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      pbVar5 = &DAT_00000e78;
    }
    if (((*pbVar5 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      bVar2 = false;
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    }
    else {
      bVar2 = true;
      BVar3 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar3 == 0) {
        FUN_1800044dc(0);
      }
    }
    uVar4 = 0;
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x40) + (ulonglong)(param_2 * 0x10 + param_3) * 8);
    if ((*(uint *)(plVar1[1] + 0x100) >> 0xb & 1) != 0) {
      uVar4 = FUN_1800155b0(plVar1,'\0');
    }
    if (bVar2) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar4;
}

