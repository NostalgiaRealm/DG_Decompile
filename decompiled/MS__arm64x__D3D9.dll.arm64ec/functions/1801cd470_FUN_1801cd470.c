/*
 * FUN_1801cd470 at 1801cd470
 * undefined FUN_1801cd470(void)
 * Address ranges: 1801cd470-1801cd93f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cd470(longlong param_1,longlong param_2,longlong param_3)

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
  undefined *puVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  int iVar15;
  undefined4 local_70;
  
  local_70 = 1;
  if (param_2 != 0) {
    FUN_1801042e0(param_2 + 0xc);
  }
  puVar11 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0xc488) != 0) {
    lVar13 = FUN_1801dbc18(param_1 + 0x6910);
    if ((lVar13 != 0) && (*(char *)(param_1 + 0x21) == '\0')) {
      psVar2 = (short *)(lVar13 + 0x18);
      iVar15 = 0;
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar15 * 2;
        lVar1 = param_1 + (ulonglong)(ushort)psVar2[uVar6] * 0x10;
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)(ushort)psVar2[uVar6] & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar9 = (undefined8 *)(lVar1 + 0x53e0);
        puVar10 = (undefined8 *)(lVar1 + 0xb520);
        while (uVar7 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar7 = uVar8;
        }
        (*(code *)puVar11)(0x180224000);
        (*extraout_x11)();
        iVar15 = iVar15 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
      iVar15 = 0;
      psVar2 = (short *)(lVar13 + 0x1dc);
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar15 * 2;
        lVar1 = param_1 + (ulonglong)(ushort)psVar2[uVar6] * 0x10;
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)(ushort)psVar2[uVar6] & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar9 = (undefined8 *)(lVar1 + 0x6a50);
        puVar10 = (undefined8 *)(lVar1 + 0xc320);
        while (uVar7 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar7 = uVar8;
        }
        (*(code *)puVar11)(0x180224000);
        (*extraout_x11_00)();
        iVar15 = iVar15 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
      iVar15 = 0;
      psVar2 = (short *)(lVar13 + 0x200);
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar15 * 2;
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)(ushort)psVar2[uVar6];
        lVar13 = param_1 + (ulonglong)(ushort)psVar2[uVar6] * 4;
        puVar9 = (undefined8 *)(lVar13 + 0x6a10);
        puVar10 = (undefined8 *)(lVar13 + 0xc420);
        for (uVar8 = uVar7 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
        }
        (*(code *)puVar11)(0x180224000);
        (*extraout_x11_01)();
        iVar15 = iVar15 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
    }
    FUN_1801dcdf0(*(undefined8 *)(param_1 + 0xc488));
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x67e8) = 0;
    *(undefined8 *)(param_1 + 0xc488) = 0;
    uVar14 = (*(code *)puVar11)(0x180224000);
    (*extraout_x11_06)(uVar14,0);
  }
  else if (param_3 == 0) {
    local_70 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xc488) = param_2;
    *(undefined8 *)(param_1 + 0x67e8) = *(undefined8 *)(param_3 + 8);
    uVar14 = (*(code *)puVar11)(0x180224000);
    (*extraout_x11_02)(uVar14,*(undefined8 *)(param_3 + 8));
    uVar12 = FUN_180224358();
    FUN_1802243a0(0x3fc0);
    if (*(char *)(param_1 + 0x21) == '\0') {
      psVar2 = (short *)(param_3 + 0x18);
      iVar15 = 0;
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar15 * 2;
        uVar4 = psVar2[uVar6];
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)uVar4 & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar9 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar4 * 0x10 + 0x414);
        puVar10 = (undefined8 *)(param_1 + (ulonglong)uVar4 * 0x10 + 0xb520);
        while (uVar7 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar7 = uVar8;
        }
        (*(code *)puVar11)(0x180224000);
        (*extraout_x11_03)();
        iVar15 = iVar15 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
      psVar2 = (short *)(param_3 + 0x1dc);
      iVar15 = 0;
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar15 * 2;
        uVar4 = psVar2[uVar6];
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)uVar4 & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar9 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar4 * 0x10 + 0x1a0);
        puVar10 = (undefined8 *)(param_1 + (ulonglong)uVar4 * 0x10 + 0xc320);
        while (uVar7 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar7 = uVar8;
        }
        (*(code *)puVar11)(0x180224000);
        (*extraout_x11_04)();
        iVar15 = iVar15 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
      psVar2 = (short *)(param_3 + 0x200);
      iVar15 = 0;
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar15 * 2;
        uVar4 = psVar2[uVar6];
        uVar5 = psVar2[uVar6 + 1];
        puVar9 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar4 * 4 + 0x2b0);
        puVar10 = (undefined8 *)(param_1 + (ulonglong)uVar4 * 4 + 0xc420);
        for (uVar8 = (uint)uVar5 - (uint)uVar4 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        if (((uint)uVar5 - (uint)uVar4 & 1) != 0) {
          *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
        }
        (*(code *)puVar11)(0x180224000);
        (*extraout_x11_05)();
        iVar15 = iVar15 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
    }
    FUN_1802243a0(uVar12);
  }
  *(undefined1 *)(param_1 + 0xd10) = 1;
  return local_70;
}

