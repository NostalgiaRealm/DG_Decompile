/*
 * FUN_180029b58 at 180029b58
 * undefined1[16] __cdecl FUN_180029b58(uint param_1, uint param_2, uint param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 180029b58-180029c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16]
FUN_180029b58(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = 0;
  local_8 = 0;
  if (param_1 < param_2) {
    uVar1 = (param_6 & 0xff) * 2 + 2;
    uVar2 = uVar1 * param_5;
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x180029b8c);
      (*pcVar7)();
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_1 / uVar2;
    }
    if (uVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x180029ba0);
      (*pcVar7)();
    }
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = (param_1 - uVar3 * uVar2) / uVar1;
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = param_2 / uVar2;
    }
    uVar6 = 0;
    if (uVar1 != 0) {
      uVar6 = (param_2 - uVar5 * uVar2) / uVar1;
    }
    if (param_3 < uVar4) {
      uVar4 = 0;
      uVar3 = uVar3 + 1;
    }
    uVar1 = param_3;
    if (uVar6 <= param_3) {
      uVar1 = uVar6;
    }
    uVar2 = param_4;
    if (uVar3 < param_4) {
      uVar2 = uVar3;
    }
    local_10 = CONCAT44(uVar2,uVar4);
    local_8 = CONCAT44(uVar5,uVar1);
    if (param_4 <= uVar5) {
      local_8 = CONCAT44(param_4 - 1,param_3);
    }
  }
  auVar8._8_8_ = local_8;
  auVar8._0_8_ = local_10;
  return auVar8;
}

