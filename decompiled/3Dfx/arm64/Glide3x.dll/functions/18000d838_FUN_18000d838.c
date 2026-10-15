/*
 * FUN_18000d838 at 18000d838
 * uint * __cdecl FUN_18000d838(longlong param_1, uint * param_2, uint param_3, uint * param_4, longlong param_5)
 * Address ranges: 18000d838-18000d8bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18000d838(longlong param_1,uint *param_2,uint param_3,uint *param_4,longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  
  if (param_5 == 0) {
    param_5 = *(longlong *)(param_1 + 8);
  }
  uVar3 = *(uint *)(param_5 + 0xa2);
  uVar4 = *(uint *)(param_5 + 0xa6);
  *param_2 = uVar3;
  param_2[1] = uVar4;
  if ((uVar3 == 0) || (uVar4 == 0)) {
    lVar1 = param_1 + (ulonglong)param_3 * 8;
    uVar2 = *param_4;
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18000d868);
      (*pcVar7)();
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = *(uint *)(lVar1 + 0x20) / uVar2;
    }
    uVar2 = param_4[1];
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18000d87c);
      (*pcVar7)();
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = *(uint *)(lVar1 + 0x24) / uVar2;
    }
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    if (uVar3 == uVar4) {
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      *param_2 = uVar5;
      param_2[1] = uVar5;
    }
    else if (uVar3 == 0) {
      *param_2 = uVar5;
    }
    else {
      param_2[1] = uVar6;
    }
  }
  return param_2;
}

