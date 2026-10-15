/*
 * FUN_18016c2f8 at 18016c2f8
 * undefined FUN_18016c2f8(void)
 * Address ranges: 18016c2f8-18016c3db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016c2f8(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  code *extraout_x11;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar5,0);
  uVar2 = param_3 - param_2 & 0x3fffffff;
  uVar6 = uVar2 << 1;
  puVar3 = (undefined8 *)(param_1 + (ulonglong)(param_2 << 2) * 4 + 0x5520);
  puVar4 = param_4;
  while (uVar2 != 0) {
    *puVar3 = *puVar4;
    uVar6 = uVar6 - 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    uVar2 = uVar6;
  }
  if (8 < param_2) {
    param_2 = 8;
  }
  if (8 < param_3) {
    param_3 = 8;
  }
  if (param_2 < param_3) {
    auVar7 = NEON_fmov(0x3f800000,4);
    auVar8 = NEON_fmov(0xbf800000,4);
    uVar6 = param_2;
    do {
      uVar2 = uVar6 - param_2;
      lVar1 = param_1 + (ulonglong)(uVar6 << 2) * 4;
      uVar6 = uVar6 + 1;
      auVar9 = NEON_fmin(*(undefined1 (*) [16])(param_4 + ((ulonglong)uVar2 & 0x3fffffff) * 2),
                         auVar7,4);
      auVar9 = NEON_fmax(auVar9,auVar8,4);
      *(longlong *)(lVar1 + 0x54a8) = auVar9._8_8_;
      *(longlong *)(lVar1 + 0x54a0) = auVar9._0_8_;
    } while (uVar6 < param_3);
  }
  *(undefined1 *)(param_1 + 0xf6b6) = 1;
  return;
}

