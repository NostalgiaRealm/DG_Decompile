/*
 * FUN_1800be130 at 1800be130
 * undefined8 __fastcall FUN_1800be130(longlong param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1800be130-1800be1ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800be130(longlong param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  BOOL BVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_1801123a8;
  uVar1 = *(uint *)(param_1 + -0x59bc);
  if (param_2 < uVar1) {
    if (uVar1 < param_2 + param_4) {
      param_4 = uVar1 - param_2;
    }
  }
  else {
    param_4 = 0;
  }
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    lpCriticalSection = DAT_1801123a8;
    if (BVar3 == 0) {
      FUN_1800044dc(0);
      lpCriticalSection = DAT_1801123a8;
    }
  }
  puVar5 = (undefined4 *)(param_1 + -0x5458 + (ulonglong)(param_2 * 4) * 4);
  for (uVar4 = (ulonglong)(uint)(param_4 * 4); uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_3 = *puVar5;
    puVar5 = puVar5 + 1;
    param_3 = param_3 + 1;
  }
  if (bVar2) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
  }
  return 0;
}

