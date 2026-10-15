/*
 * FUN_1800a1f48 at 1800a1f48
 * undefined FUN_1800a1f48(void)
 * Address ranges: 1800a1f48-1800a1fdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a1f48(longlong param_1,uint param_2,undefined8 param_3,int param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong local_30 [2];
  
  (*__imp_KERNEL32_dll_QueryPerformanceCounter)(local_30);
  param_1 = param_1 + (ulonglong)param_2 * 0xc18;
  uVar5 = *(ulonglong *)(param_1 + 0x10cc0);
  local_30[0] = local_30[0] - *(longlong *)(param_1 + 0x10cc8);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800a1fa4);
    (*pcVar4)();
  }
  lVar2 = 0;
  if (uVar5 != 0) {
    lVar2 = local_30[0] / (longlong)uVar5;
  }
  iVar3 = 0;
  if (uVar5 != 0) {
    iVar3 = (int)(((local_30[0] - lVar2 * uVar5) * (ulonglong)(param_4 + 1)) / uVar5);
  }
  if (param_5 != (int *)0x0) {
    iVar1 = 0;
    if (iVar3 != param_4) {
      iVar1 = iVar3;
    }
    *param_5 = iVar1;
  }
  return iVar3 == param_4;
}

