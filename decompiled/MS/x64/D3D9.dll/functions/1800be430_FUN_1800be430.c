/*
 * FUN_1800be430 at 1800be430
 * undefined8 __fastcall FUN_1800be430(longlong param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1800be430-1800be4d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800be430(longlong param_1,int param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_1801123a8;
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
  puVar4 = (undefined4 *)(param_1 + 0x218 + (ulonglong)(uint)(param_2 * 4) * 4);
  for (uVar3 = (ulonglong)(uint)(param_4 * 4); uVar3 != 0; uVar3 = uVar3 - 1) {
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

