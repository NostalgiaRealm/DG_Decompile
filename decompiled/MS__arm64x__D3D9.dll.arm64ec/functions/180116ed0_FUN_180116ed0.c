/*
 * FUN_180116ed0 at 180116ed0
 * undefined FUN_180116ed0(void)
 * Address ranges: 180116ed0-180116f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180116ed0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int extraout_w1;
  uint extraout_w1_00;
  uint uVar4;
  uint extraout_w10;
  uint uVar5;
  int extraout_w11;
  int extraout_w12;
  int extraout_w12_00;
  
  FUN_180107018(param_3);
  FUN_180107140(param_3);
  uVar2 = FUN_1801071f0(param_3);
  if (extraout_w11 == 0) {
    iVar3 = FUN_180106dc0(param_3);
    uVar5 = (uint)(iVar3 * extraout_w12_00) >> 3;
    uVar4 = extraout_w1_00;
  }
  else {
    if (extraout_w10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0xf004,0x180116f18);
      (*pcVar1)();
    }
    uVar5 = 0;
    if (extraout_w10 != 0) {
      uVar5 = ((extraout_w10 + extraout_w12) - 1 & -extraout_w10) / extraout_w10;
    }
    uVar5 = uVar5 * extraout_w11;
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0xf004,0x180116f38);
      (*pcVar1)();
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = ((uVar2 + extraout_w1) - 1 & -uVar2) / uVar2;
    }
  }
  return uVar4 * uVar5;
}

