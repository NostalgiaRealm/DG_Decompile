/*
 * FUN_10024418 at 10024418
 * undefined FUN_10024418(void)
 * Address ranges: 10024418-100244cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16]
FUN_10024418(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,byte param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = 0;
  local_8 = 0;
  if (param_1 < param_2) {
    iVar1 = param_6 + 1;
    uVar2 = iVar1 * 2;
    uVar3 = uVar2 * param_5;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar8 = SoftwareBreakpoint(0xf004,0x10024450);
      (*(code *)uVar8)();
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = param_1 / uVar3;
    }
    if (iVar1 == 0) {
                    /* WARNING: Does not return */
      uVar8 = SoftwareBreakpoint(0xf004,0x10024464);
      (*(code *)uVar8)();
    }
    uVar5 = 0;
    if (iVar1 != 0) {
      uVar5 = (param_1 - uVar4 * uVar3) / uVar2;
    }
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_2 / uVar3;
    }
    uVar7 = 0;
    if (iVar1 != 0) {
      uVar7 = (param_2 - uVar6 * uVar3) / uVar2;
    }
    if (param_3 < uVar5) {
      uVar5 = 0;
      uVar4 = uVar4 + 1;
    }
    uVar2 = param_3;
    if (uVar7 <= param_3) {
      uVar2 = uVar7;
    }
    uVar3 = param_4;
    if (uVar4 < param_4) {
      uVar3 = uVar4;
    }
    local_10 = CONCAT44(uVar3,uVar5);
    local_8 = CONCAT44(uVar6,uVar2);
    if (param_4 <= uVar6) {
      local_8 = CONCAT44(param_4 - 1,param_3);
    }
  }
  auVar9._8_8_ = local_8;
  auVar9._0_8_ = local_10;
  return auVar9;
}

