/*
 * FUN_10032f90 at 10032f90
 * undefined FUN_10032f90(void)
 * Address ranges: 10032f90-10033023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10032f90(int param_1,int param_2,undefined8 param_3,int param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_30 [2];
  
  (*(code *)PTR_FUN_100ba114)(local_30);
  param_1 = param_1 + param_2 * 0xc18;
  uVar5 = *(ulonglong *)(param_1 + 0xca8);
  local_30[0] = local_30[0] - *(longlong *)(param_1 + 0xcb0);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar4 = SoftwareBreakpoint(0xf004,0x10032fe8);
    (*(code *)uVar4)();
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

