/*
 * FUN_1800431c0 at 1800431c0
 * uint * __cdecl FUN_1800431c0(undefined8 param_1, uint * param_2, uint * param_3, uint param_4, uint param_5, uint param_6, ulonglong param_7)
 * Address ranges: 1800431c0-180043257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800431c0(undefined8 param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,
                    uint param_6,ulonglong param_7)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)param_7;
  if (param_6 == 0xffffffff) {
    uVar5 = (uint)(param_7 >> 0x10) & 0xffff;
    if ((param_7 & 0xffff0000) != 0) {
      uVar1 = (uint)param_7 & 0xffff;
      if ((param_7 & 0xffff) != 0) {
        param_6 = *param_3;
        uVar2 = param_3[1];
        uVar4 = 0;
        if ((param_7 & 0xffff0000) != 0) {
          uVar4 = (param_6 * uVar1) / uVar5;
        }
        if (uVar2 <= uVar4) {
          if ((param_7 & 0xffff) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800431fc);
            (*pcVar3)();
          }
          param_6 = 0;
          uVar4 = uVar2;
          if ((param_7 & 0xffff) != 0) {
            param_6 = (uVar2 * uVar5) / uVar1;
          }
        }
        goto LAB_18004320c;
      }
    }
    param_6 = 0;
    uVar4 = 0;
  }
LAB_18004320c:
  if (param_4 == 0xffffffff && param_5 == 0xffffffff) {
    param_4 = *param_3 - param_6 >> 1;
    param_5 = param_3[1] - uVar4 >> 1;
  }
  *param_2 = param_4;
  param_2[1] = param_5;
  param_2[2] = param_6 + param_4;
  param_2[3] = uVar4 + param_5;
  if ((int)(param_6 + param_4) <= (int)param_4 || (int)(uVar4 + param_5) <= (int)param_5) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}

