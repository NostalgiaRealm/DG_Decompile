/*
 * FUN_1800bdb88 at 1800bdb88
 * undefined8 __fastcall FUN_1800bdb88(longlong param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1800bdb88-1800bdc41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bdb88(longlong param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  BOOL BVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar3;
  
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
  uVar3 = 0x8876086c;
  if (((param_2 != 0) && (param_2 < 0xd2)) && (param_3 != (undefined4 *)0x0)) {
    if (*(char *)(*(longlong *)(param_1 + -0x6830) + (longlong)(int)param_2 * 8) == '\0') {
      *param_3 = 0;
    }
    else {
      uVar3 = 0;
      *param_3 = *(undefined4 *)(param_1 + -0x63c0 + (longlong)(int)param_2 * 4);
    }
  }
  if (bVar1) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
  }
  return uVar3;
}

