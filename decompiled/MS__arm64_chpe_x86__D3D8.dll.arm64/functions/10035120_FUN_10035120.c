/*
 * FUN_10035120 at 10035120
 * undefined FUN_10035120(void)
 * Address ranges: 10035120-10035163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10035120(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_4 == 0) {
    uVar2 = (uint)(param_1 * param_2) >> 3;
  }
  else {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      uVar1 = SoftwareBreakpoint(0xf004,0x1003513c);
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

