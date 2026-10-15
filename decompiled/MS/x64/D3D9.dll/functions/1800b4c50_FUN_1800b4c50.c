/*
 * FUN_1800b4c50 at 1800b4c50
 * undefined8 __fastcall FUN_1800b4c50(longlong param_1, int param_2)
 * Address ranges: 1800b4c50-1800b4d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b4c50(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_1801123a8;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar2 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
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
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (param_2 != *(int *)(param_1 + -0x48)) {
      *(int *)(param_1 + -0x48) = param_2;
      *(undefined4 *)(param_1 + -0x40) = 0xffff;
      *(undefined4 *)(param_1 + -0x34) = 0x1f;
    }
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(int *)(lVar1 + 0xac60) = param_2;
    *(undefined1 *)(lVar1 + 0xacfb) = 1;
  }
  if (bVar2) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
  }
  return 0;
}

