/*
 * FUN_1007f080 at 1007f080
 * undefined FUN_1007f080(void)
 * Address ranges: 1007f080-1007f17b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f080(int param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_w11;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  puVar1 = (undefined8 *)(param_1 + (param_2 + 0x550) * 0x10);
  uVar4 = param_3 - param_2 & 0x3fffffff;
  uVar5 = 0;
  puVar2 = param_4;
  if (uVar4 != 0) {
    do {
      uVar6 = *puVar2;
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 1;
      *puVar1 = uVar6;
      puVar1 = puVar1 + 1;
    } while (uVar5 < uVar4 << 1);
  }
  if (8 < param_2) {
    param_2 = 8;
  }
  if (8 < param_3) {
    param_3 = 8;
  }
  if (param_2 < param_3) {
    auVar9 = NEON_fmov(0x3f800000,4);
    auVar8 = NEON_fmov(0xbf800000,4);
    uVar5 = param_2;
    do {
      iVar3 = uVar5 - param_2;
      puVar2 = (undefined8 *)(param_1 + 0x5480 + uVar5 * 0x10);
      uVar5 = uVar5 + 1;
      auVar7 = NEON_fmin(*(undefined1 (*) [16])(param_4 + iVar3 * 2),auVar9,4);
      auVar7 = NEON_fmax(auVar7,auVar8,4);
      puVar2[1] = auVar7._8_8_;
      *puVar2 = auVar7._0_8_;
    } while (uVar5 < param_3);
  }
  *(undefined1 *)(param_1 + 0xf696) = 1;
  return;
}

