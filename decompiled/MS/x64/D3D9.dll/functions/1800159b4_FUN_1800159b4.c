/*
 * FUN_1800159b4 at 1800159b4
 * undefined __fastcall FUN_1800159b4(longlong param_1, undefined8 param_2)
 * Address ranges: 1800159b4-180015a69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800159b4(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar2 = DAT_180111f20;
  *(undefined1 *)(param_1 + 0x121) = 1;
  lpCriticalSection = DAT_1801123a8;
  if (*(char *)(lVar2 + 0x882) != '\0') {
    if (((*(byte *)(*(longlong *)(param_1 + 0x50) + 0xe78) & 4) == 0) &&
       (DAT_1801123a8[1].LockCount == 0)) {
      bVar1 = false;
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    }
    else {
      bVar1 = true;
      BVar3 = TryEnterCriticalSection(DAT_1801123a8);
      lpCriticalSection = DAT_1801123a8;
      if (BVar3 == 0) {
        FUN_1800044dc(0);
        lpCriticalSection = DAT_1801123a8;
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x681a) = 1;
    if (bVar1) {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180015a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowWindowAsync(param_2,1);
  return;
}

