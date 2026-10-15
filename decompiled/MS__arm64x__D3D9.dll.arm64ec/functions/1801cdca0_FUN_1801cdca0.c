/*
 * FUN_1801cdca0 at 1801cdca0
 * undefined FUN_1801cdca0(void)
 * Address ranges: 1801cdca0-1801cde4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801cdca0(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  longlong lVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  code *pcVar14;
  
  uVar11 = FUN_180224358();
  FUN_1802243a0(0x3fc0);
  lVar1 = param_1 + (ulonglong)param_3 * 4;
  uVar8 = param_5 >> 1;
  puVar9 = (undefined8 *)(lVar1 + 0x6990);
  puVar10 = param_4;
  for (uVar7 = uVar8; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = *puVar10;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((param_5 & 1) != 0) {
    *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
  }
  puVar9 = (undefined8 *)(lVar1 + 0xb330);
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar9 = *param_4;
    puVar9 = puVar9 + 1;
    param_4 = param_4 + 1;
  }
  if ((param_5 & 1) != 0) {
    *(undefined4 *)puVar9 = *(undefined4 *)param_4;
  }
  param_5 = param_3 + param_5;
  if (param_2 != 0) {
    psVar2 = (short *)(param_2 + 0x840);
    sVar3 = *psVar2;
    uVar13 = 0;
    while ((sVar3 != -1 && (uVar4 = psVar2[uVar13], uVar4 <= param_5))) {
      uVar5 = psVar2[(int)uVar13 + 1];
      if (param_3 <= uVar5) {
        uVar7 = param_3;
        if (param_3 <= uVar4) {
          uVar7 = (uint)uVar4;
        }
        uVar8 = (uint)uVar5;
        if (param_5 <= uVar5) {
          uVar8 = param_5;
        }
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar7 * 4 + 0x49e8);
        puVar10 = (undefined8 *)(param_1 + (ulonglong)(uVar7 << 2) * 4 + 0xb330);
        for (uVar6 = uVar8 - uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        if ((uVar8 - uVar7 & 1) != 0) {
          *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
        }
      }
      uVar13 = (ulonglong)((int)uVar13 + 2);
      sVar3 = psVar2[uVar13];
    }
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    uVar12 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar14 = extraout_x11;
  }
  else {
    uVar12 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar14 = extraout_x11_00;
  }
  (*pcVar14)(uVar12,(ulonglong)param_3);
  FUN_1802243a0(uVar11);
  return;
}

