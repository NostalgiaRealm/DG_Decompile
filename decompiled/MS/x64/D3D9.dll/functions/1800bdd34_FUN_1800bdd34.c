/*
 * FUN_1800bdd34 at 1800bdd34
 * undefined8 __fastcall FUN_1800bdd34(longlong param_1, uint param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 1800bdd34-1800bde0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bdd34(longlong param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  BOOL BVar2;
  undefined8 uVar3;
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
  uVar3 = 0x8876086c;
  if ((((param_2 < 8) && (param_3 != 0)) && (param_3 < 0x21)) && (param_4 != (undefined4 *)0x0)) {
    if (*(char *)(*(longlong *)(param_1 + -0x6828) + (longlong)(int)param_3 * 0xc) == '\0') {
      *param_4 = 0;
    }
    else {
      uVar3 = 0;
      *param_4 = *(undefined4 *)
                  (param_1 + -0x6078 + ((ulonglong)param_2 * 0x21 + (longlong)(int)param_3) * 4);
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

