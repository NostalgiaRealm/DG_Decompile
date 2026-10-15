/*
 * FUN_18005bce8 at 18005bce8
 * undefined FUN_18005bce8(void)
 * Address ranges: 18005bce8-18005bdb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005bce8(longlong *param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  uVar1 = param_3 - param_2 & 0x3fffffff;
  uVar5 = uVar1 << 1;
  puVar3 = (undefined8 *)((longlong)param_1 + (ulonglong)(param_2 << 2) * 4 + 0x5520);
  puVar4 = param_4;
  while (uVar1 != 0) {
    *puVar3 = *puVar4;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    uVar1 = uVar5;
  }
  if (8 < param_2) {
    param_2 = 8;
  }
  if (8 < param_3) {
    param_3 = 8;
  }
  if (param_2 < param_3) {
    auVar8 = NEON_fmov(0x3f800000,4);
    auVar7 = NEON_fmov(0xbf800000,4);
    uVar5 = param_2;
    do {
      uVar2 = uVar5 - param_2;
      uVar1 = uVar5 << 2;
      uVar5 = uVar5 + 1;
      auVar6 = NEON_fmin(*(undefined1 (*) [16])(param_4 + ((ulonglong)uVar2 & 0x3fffffff) * 2),
                         auVar8,4);
      auVar6 = NEON_fmax(auVar6,auVar7,4);
      *(longlong *)((longlong)param_1 + (ulonglong)uVar1 * 4 + 0x54a8) = auVar6._8_8_;
      *(longlong *)((longlong)param_1 + (ulonglong)uVar1 * 4 + 0x54a0) = auVar6._0_8_;
    } while (uVar5 < param_3);
  }
  *(undefined1 *)((longlong)param_1 + 0xf6b6) = 1;
  return;
}

