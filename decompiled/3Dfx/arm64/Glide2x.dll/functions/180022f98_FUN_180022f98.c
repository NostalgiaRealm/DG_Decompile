/*
 * FUN_180022f98 at 180022f98
 * uint __cdecl FUN_180022f98(longlong param_1)
 * Address ranges: 180022f98-180022ffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180022f98(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  LARGE_INTEGER local_20 [2];
  
  QueryPerformanceCounter(local_20);
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x3180) + 0x18);
  lVar5 = local_20[0].QuadPart - *(longlong *)(*(longlong *)(param_1 + 0x3180) + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180022fd4);
    (*pcVar4)();
  }
  lVar3 = 0;
  if (uVar2 != 0) {
    lVar3 = lVar5 / (longlong)uVar2;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = (uint)(((lVar5 - lVar3 * uVar2) * (ulonglong)(*(uint *)(param_1 + 0xac) + 1)) / uVar2);
  }
  if (*(uint *)(param_1 + 0xac) <= uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}

