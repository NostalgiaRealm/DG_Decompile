/*
 * FUN_1800c41f0 at 1800c41f0
 * uint __fastcall FUN_1800c41f0(longlong param_1, int * param_2)
 * Address ranges: 1800c41f0-1800c42a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800c41f0(longlong param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  byte *pbVar4;
  
  lpCriticalSection = DAT_1801123a8;
  pbVar4 = (byte *)(*(longlong *)(param_1 + -0x100) + -0x59c0);
  if (*(longlong *)(param_1 + -0x100) == 0) {
    pbVar4 = &DAT_00000e78;
  }
  if (((*pbVar4 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar1 = false;
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
  cVar2 = FUN_180018f10(param_1 + -0x118,0,param_2);
  if (bVar1) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
  }
  return ~-(uint)(cVar2 != '\0') & 0x8876086c;
}

