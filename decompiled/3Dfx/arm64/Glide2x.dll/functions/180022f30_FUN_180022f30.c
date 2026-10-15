/*
 * FUN_180022f30 at 180022f30
 * bool __cdecl FUN_180022f30(longlong param_1)
 * Address ranges: 180022f30-180022f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180022f30(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  LARGE_INTEGER local_20 [2];
  
  QueryPerformanceCounter(local_20);
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x3180) + 0x18);
  lVar5 = local_20[0].QuadPart - *(longlong *)(*(longlong *)(param_1 + 0x3180) + 0x20);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180022f6c);
    (*pcVar4)();
  }
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = lVar5 / (longlong)uVar1;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = ((lVar5 - lVar2 * uVar1) * (ulonglong)(*(uint *)(param_1 + 0xac) + 1)) / uVar1;
  }
  return uVar3 == *(uint *)(param_1 + 0xac);
}

