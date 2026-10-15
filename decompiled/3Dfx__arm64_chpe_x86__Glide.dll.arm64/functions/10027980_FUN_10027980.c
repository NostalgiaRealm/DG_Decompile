/*
 * FUN_10027980 at 10027980
 * undefined FUN_10027980(void)
 * Address ranges: 10027980-10027a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10027980(int param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (param_5 == 0) {
    param_5 = *(int *)(param_1 + 4);
  }
  uVar1 = *(uint *)(param_5 + 0xa2);
  uVar2 = *(uint *)(param_5 + 0xa6);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  if ((uVar1 == 0) || (uVar2 == 0)) {
    param_1 = param_1 + param_3 * 8;
    uVar3 = *param_4;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar5 = SoftwareBreakpoint(0xf004,0x100279d8);
      (*(code *)uVar5)();
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(uint *)(param_1 + 0x14) / uVar3;
    }
    uVar3 = param_4[1];
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar5 = SoftwareBreakpoint(0xf004,0x100279f4);
      (*(code *)uVar5)();
    }
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = *(uint *)(param_1 + 0x18) / uVar3;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    if (uVar1 == uVar2) {
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      *param_2 = uVar4;
      uVar6 = uVar4;
    }
    else if (uVar1 == 0) {
      *param_2 = uVar4;
      return param_2;
    }
    param_2[1] = uVar6;
  }
  return param_2;
}

