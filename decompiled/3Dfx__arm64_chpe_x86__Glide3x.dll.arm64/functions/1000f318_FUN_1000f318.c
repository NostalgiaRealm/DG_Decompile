/*
 * FUN_1000f318 at 1000f318
 * undefined FUN_1000f318(void)
 * Address ranges: 1000f318-1000f3cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1000f318(int param_1,uint *param_2,int param_3,uint *param_4,int param_5)

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
      uVar5 = SoftwareBreakpoint(0xf004,0x1000f370);
      (*(code *)uVar5)();
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(uint *)(param_1 + 0x14) / uVar3;
    }
    uVar3 = param_4[1];
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar5 = SoftwareBreakpoint(0xf004,0x1000f38c);
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

