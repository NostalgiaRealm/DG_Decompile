/*
 * FUN_100556a8 at 100556a8
 * undefined FUN_100556a8(void)
 * Address ranges: 100556a8-10055747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100556a8(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_10;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar4 = SoftwareBreakpoint(0xf004,0x100556d8);
    (*(code *)uVar4)();
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    uVar5 = (*param_2 * uVar2) / uVar1;
  }
  uVar3 = param_2[1];
  if (uVar3 < uVar5) {
    if ((param_3 & 1) == 0) {
      if (uVar2 != 0) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = (uVar3 * uVar1) / uVar2;
        }
        local_10 = CONCAT44((int)((ulonglong)*(undefined8 *)param_2 >> 0x20),uVar5);
        return local_10;
      }
                    /* WARNING: Does not return */
      uVar4 = SoftwareBreakpoint(0xf004,0x10055734);
      (*(code *)uVar4)();
    }
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      uVar4 = SoftwareBreakpoint(0xf004,0x1005570c);
      (*(code *)uVar4)();
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar3 / uVar2;
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      local_10 = CONCAT44(uVar5,(int)*(undefined8 *)param_2);
      return local_10;
    }
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = *param_2 / uVar1;
    }
  }
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  local_10 = CONCAT44(uVar5 * uVar2,uVar5 * uVar1);
  return local_10;
}

