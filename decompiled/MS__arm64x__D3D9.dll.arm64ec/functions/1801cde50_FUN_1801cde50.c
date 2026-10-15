/*
 * FUN_1801cde50 at 1801cde50
 * undefined FUN_1801cde50(void)
 * Address ranges: 1801cde50-1801cdfe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801cde50(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4,uint param_5)

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
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  ulonglong uVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  code *pcVar15;
  
  lVar1 = param_1 + (ulonglong)(param_3 << 2) * 4;
  uVar8 = param_5 & 0x3fffffff;
  uVar7 = uVar8 << 1;
  puVar9 = (undefined8 *)(lVar1 + 0x53e0);
  uVar6 = uVar7;
  puVar10 = param_4;
  uVar11 = uVar8;
  while (uVar11 != 0) {
    *puVar9 = *puVar10;
    uVar6 = uVar6 - 1;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
    uVar11 = uVar6;
  }
  uVar12 = FUN_180224358();
  FUN_1802243a0(0x3fc0);
  if (*(char *)(param_1 + 0x21) == '\0') {
    puVar9 = (undefined8 *)(lVar1 + 0xb520);
    while (uVar8 != 0) {
      *puVar9 = *param_4;
      uVar7 = uVar7 - 1;
      puVar9 = puVar9 + 1;
      param_4 = param_4 + 1;
      uVar8 = uVar7;
    }
    param_5 = param_3 + param_5;
    if (param_2 != 0) {
      psVar2 = (short *)(param_2 + 0x18);
      sVar3 = *psVar2;
      uVar14 = 0;
      while ((sVar3 != -1 && (uVar4 = psVar2[uVar14], uVar4 <= param_5))) {
        uVar5 = psVar2[(int)uVar14 + 1];
        if (param_3 <= uVar5) {
          uVar6 = param_3;
          if (param_3 <= uVar4) {
            uVar6 = (uint)uVar4;
          }
          uVar7 = (uint)uVar5;
          if (param_5 <= uVar5) {
            uVar7 = param_5;
          }
          uVar8 = uVar7 - uVar6 & 0x3fffffff;
          uVar7 = uVar8 << 1;
          puVar9 = (undefined8 *)
                   (*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar6 << 2) * 4 + 0x414);
          puVar10 = (undefined8 *)(param_1 + (ulonglong)(uVar6 << 2) * 4 + 0xb520);
          while (uVar8 != 0) {
            *puVar10 = *puVar9;
            uVar7 = uVar7 - 1;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
            uVar8 = uVar7;
          }
        }
        uVar14 = (ulonglong)((int)uVar14 + 2);
        sVar3 = psVar2[uVar14];
      }
    }
    uVar13 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar15 = extraout_x11;
  }
  else {
    uVar13 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                       (0x180224000,*(undefined8 *)(param_1 + 0x28),extraout_x1,param_3 + param_5);
    pcVar15 = extraout_x11_00;
  }
  (*pcVar15)(uVar13,param_3);
  FUN_1802243a0(uVar12);
  return;
}

