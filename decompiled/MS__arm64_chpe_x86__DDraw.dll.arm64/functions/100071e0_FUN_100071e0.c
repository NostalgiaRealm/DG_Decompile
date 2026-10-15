/*
 * FUN_100071e0 at 100071e0
 * undefined FUN_100071e0(void)
 * Address ranges: 100071e0-10007223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100071e0(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_4 == 0) {
    uVar2 = (uint)(param_1 * param_2) >> 3;
  }
  else {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      uVar1 = SoftwareBreakpoint(0xf004,0x100071fc);
      (*(code *)uVar1)();
    }
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = ((param_1 + param_3) - 1 & -param_3) / param_3;
    }
    uVar2 = uVar2 * param_4;
  }
  return (uVar2 + param_5) - 1 & -param_5;
}

