/*
 * FUN_10068730 at 10068730
 * undefined FUN_10068730(void)
 * Address ranges: 10068730-100687df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068730(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  if (param_2 < param_3) {
    auVar6 = NEON_fmov(0x3f800000,4);
    auVar5 = NEON_fmov(0xbf800000,4);
    uVar3 = param_2;
    do {
      iVar2 = uVar3 - param_2;
      puVar1 = (undefined8 *)(param_1 + 0x47d0 + uVar3 * 0x10);
      uVar3 = uVar3 + 1;
      auVar4 = NEON_fmin(*(undefined1 (*) [16])(param_4 + iVar2 * 0x10),auVar6,4);
      auVar4 = NEON_fmax(auVar4,auVar5,4);
      puVar1[1] = auVar4._8_8_;
      *puVar1 = auVar4._0_8_;
    } while (uVar3 < param_3);
  }
  *(undefined1 *)(param_1 + 0xd9a6) = 1;
  return;
}

