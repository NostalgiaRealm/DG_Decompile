/*
 * FUN_1801002d0 at 1801002d0
 * undefined FUN_1801002d0(void)
 * Address ranges: 1801002d0-18010037b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801002d0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_10;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801002f0);
    (*pcVar3)();
  }
  uVar6 = 0;
  if (uVar1 != 0) {
    uVar6 = (uVar2 * *param_2) / uVar1;
  }
  uVar5 = param_2[1];
  if (uVar5 < uVar6) {
    if ((param_3 & 1) == 0) {
      if (uVar2 != 0) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = (uVar1 * uVar5) / uVar2;
        }
        local_10 = CONCAT44((int)((ulonglong)*(undefined8 *)param_2 >> 0x20),uVar6);
        return local_10;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180100368);
      (*pcVar3)();
    }
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180100338);
      (*pcVar3)();
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = uVar5 / uVar2;
    }
    uVar5 = uVar6 * uVar2;
    bVar4 = uVar6 == 0;
    if (bVar4) {
      uVar6 = 1;
    }
    uVar6 = uVar1 * uVar6;
    if (bVar4) {
      uVar5 = uVar2;
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      local_10 = CONCAT44(uVar6,(int)*(undefined8 *)param_2);
      return local_10;
    }
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = *param_2 / uVar1;
    }
    uVar6 = uVar5 * uVar1;
    if (uVar5 == 0) {
      uVar5 = 1;
      uVar6 = uVar1;
    }
    uVar5 = uVar2 * uVar5;
  }
  local_10 = CONCAT44(uVar5,uVar6);
  return local_10;
}

