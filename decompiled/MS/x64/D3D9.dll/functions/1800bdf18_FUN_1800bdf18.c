/*
 * FUN_1800bdf18 at 1800bdf18
 * undefined8 __fastcall FUN_1800bdf18(longlong param_1, uint param_2, longlong * param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 1800bdf18-1800be00d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800bdf18(longlong param_1,uint param_2,longlong *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)param_2;
  if (param_2 < 0x10) {
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
    lVar4 = *(longlong *)(param_1 + -0x170 + uVar3 * 8);
    if ((lVar4 != 0) && (lVar4 = lVar4 + 0x90, lVar4 != 0)) {
      FUN_1800c29dc(lVar4);
    }
    *param_3 = lVar4;
    *param_5 = *(undefined4 *)(param_1 + -0xf0 + uVar3 * 4);
    *param_4 = *(undefined4 *)(param_1 + -0xb0 + uVar3 * 4);
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  else {
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
  }
  return 0;
}

