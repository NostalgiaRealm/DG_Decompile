/*
 * FUN_1800be2b0 at 1800be2b0
 * undefined8 __fastcall FUN_1800be2b0(longlong param_1, uint param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 1800be2b0-1800be361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800be2b0(longlong param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_1801123a8;
  uVar3 = (ulonglong)param_4;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar1 = false;
  }
  else {
    bVar1 = true;
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    lpCriticalSection = DAT_1801123a8;
    if (BVar2 == 0) {
      FUN_1800044dc(0);
      lpCriticalSection = DAT_1801123a8;
    }
  }
  if (param_2 < 0x10) {
    if (0x10 < param_2 + param_4) {
      uVar3 = (ulonglong)(0x10 - param_2);
    }
  }
  else {
    uVar3 = 0;
  }
  puVar4 = (undefined4 *)((ulonglong)param_2 * 4 + 0x158 + param_1);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  if (bVar1) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
  }
  return 0;
}

