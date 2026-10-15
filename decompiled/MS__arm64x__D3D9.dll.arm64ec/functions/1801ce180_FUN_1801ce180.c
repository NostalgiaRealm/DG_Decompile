/*
 * FUN_1801ce180 at 1801ce180
 * undefined FUN_1801ce180(void)
 * Address ranges: 1801ce180-1801ce30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ce180(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  ulonglong uVar14;
  code *extraout_x11;
  
  uVar12 = FUN_180224358();
  FUN_1802243a0(0x3fc0);
  lVar1 = param_1 + (ulonglong)param_3 * 4;
  uVar7 = param_5 >> 1;
  puVar10 = (undefined8 *)(lVar1 + 0x6a10);
  puVar11 = param_4;
  for (uVar9 = uVar7; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar10 = *puVar11;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if ((param_5 & 1) != 0) {
    *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    puVar10 = (undefined8 *)(lVar1 + 0xc420);
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *param_4;
      puVar10 = puVar10 + 1;
      param_4 = param_4 + 1;
    }
    if ((param_5 & 1) != 0) {
      *(undefined4 *)puVar10 = *(undefined4 *)param_4;
    }
    uVar7 = param_3 + param_5;
    if (param_2 != 0) {
      psVar2 = (short *)(param_2 + 0x200);
      sVar4 = *psVar2;
      uVar14 = 0;
      while ((sVar4 != -1 && (uVar5 = psVar2[uVar14], uVar5 <= uVar7))) {
        uVar6 = psVar2[(int)uVar14 + 1];
        if (param_3 <= uVar6) {
          uVar9 = param_3;
          if (param_3 <= uVar5) {
            uVar9 = (uint)uVar5;
          }
          uVar3 = (uint)uVar6;
          if (uVar7 <= uVar6) {
            uVar3 = uVar7;
          }
          puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 4 + 0x2b0);
          puVar11 = (undefined8 *)(param_1 + (ulonglong)uVar9 * 4 + 0xc420);
          for (uVar8 = uVar3 - uVar9 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          if ((uVar3 - uVar9 & 1) != 0) {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
          }
        }
        uVar14 = (ulonglong)((int)uVar14 + 2);
        sVar4 = psVar2[uVar14];
      }
    }
  }
  uVar13 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                     (0x180224000,*(undefined8 *)(param_1 + 0x28),extraout_x1,param_3 + param_5);
  (*extraout_x11)(uVar13,(ulonglong)param_3);
  FUN_1802243a0(uVar12);
  return;
}

