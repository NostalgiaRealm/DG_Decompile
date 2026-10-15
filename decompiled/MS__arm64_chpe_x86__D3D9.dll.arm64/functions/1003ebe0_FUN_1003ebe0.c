/*
 * FUN_1003ebe0 at 1003ebe0
 * undefined FUN_1003ebe0(void)
 * Address ranges: 1003ebe0-1003ec0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003ebe0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    iVar1 = param_1 + param_2;
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x1003ebfc);
      (*(code *)uVar2)();
    }
    param_1 = 0;
    if (param_2 != 0) {
      param_1 = (iVar1 - 1U & -param_2) / param_2;
    }
  }
  return param_1;
}

