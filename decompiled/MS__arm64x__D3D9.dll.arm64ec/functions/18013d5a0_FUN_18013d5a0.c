/*
 * FUN_18013d5a0 at 18013d5a0
 * undefined FUN_18013d5a0(void)
 * Address ranges: 18013d5a0-18013d977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013d5a0(longlong param_1,int param_2,int param_3,longlong param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  ulonglong uVar13;
  int iVar14;
  byte bVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  int *piVar19;
  ulonglong uVar20;
  
  uVar5 = param_2 - 1;
  uVar20 = (ulonglong)uVar5;
  if (uVar5 < 4) {
    FUN_180137af0(param_1,0,0,0);
    puVar7 = __hybrid_os_arm64x_dispatch_icall;
    lVar1 = param_1 + uVar20 * 8;
    iVar3 = (int)uVar5 >> 3;
    if (param_4 == 0) {
      *(undefined8 *)(lVar1 + 0xfc18) = 0;
      *(undefined8 *)(lVar1 + 0xfc40) = 0;
    }
    else {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      iVar10 = (*extraout_x11)(param_4);
      if (iVar10 == 1) {
        *(longlong *)(lVar1 + 0xfc40) = param_4 + -0x20;
        *(undefined8 *)(lVar1 + 0xfc18) = 0;
        if (*(int *)(lVar1 + 0x81c) != param_3) {
          *(int *)(lVar1 + 0x81c) = param_3;
          *(byte *)(param_1 + 0xf6bc + (longlong)iVar3) =
               *(byte *)(param_1 + 0xf6bc + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
        }
        lVar1 = param_1 + uVar20 * 0x20;
        uVar13 = (uVar20 + 0x2a1) * 0x20;
        puVar2 = (undefined4 *)(uVar13 + param_1);
        iVar10 = -1;
        if ((&DAT_18022da48)[*(uint *)(param_4 + -0xc)] == '\0') {
          iVar10 = 0;
        }
        iVar14 = 0;
        if ((&DAT_18022da48)[*(uint *)(param_4 + -0xc)] == '\0') {
          iVar14 = 0x3f800000;
        }
        if ((((*(int *)(uVar13 + param_1) == -1) && (puVar2[1] == -1)) && (puVar2[2] == -1)) &&
           (((iVar10 == puVar2[3] && (*(int *)(lVar1 + 0x5430) == 0)) &&
            ((*(int *)(lVar1 + 0x5434) == 0 &&
             ((*(int *)(lVar1 + 0x5438) == 0 && (iVar14 == *(int *)(lVar1 + 0x543c))))))))) {
          bVar15 = 0;
          puVar17 = puVar2 + 2;
          puVar11 = puVar2 + 1;
          piVar12 = puVar2 + 3;
        }
        else {
          puVar17 = (undefined4 *)((uVar13 | 8) + param_1);
          piVar12 = (int *)((uVar13 | 0xc) + param_1);
          bVar15 = 1;
          puVar11 = (undefined4 *)((uVar13 | 4) + param_1);
        }
        *piVar12 = iVar10;
        *puVar17 = 0xffffffff;
        *puVar11 = 0xffffffff;
        *puVar2 = 0xffffffff;
        *(undefined4 *)(uVar20 * 0x20 + param_1 + 0x5438) = 0;
        *(undefined4 *)(uVar20 * 0x20 + param_1 + 0x5434) = 0;
        *(int *)(uVar20 * 0x20 + param_1 + 0x543c) = iVar14;
        *(undefined4 *)(lVar1 + 0x5430) = 0;
        bVar15 = *(byte *)(param_1 + 0xf6b4) | bVar15;
      }
      else {
        param_4 = param_4 + -0xe0;
        (*(code *)puVar7)(0x180224000);
        (*extraout_x11_00)(param_4,param_5);
        *(longlong *)(lVar1 + 0xfc18) = param_4;
        *(undefined8 *)(lVar1 + 0xfc40) = 0;
        if (*(int *)(lVar1 + 0x81c) != param_3) {
          *(int *)(lVar1 + 0x81c) = param_3;
          *(byte *)(param_1 + 0xf6bc + (longlong)iVar3) =
               *(byte *)(param_1 + 0xf6bc + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
        }
        (*(code *)puVar7)(0x180224000);
        cVar8 = (*extraout_x11_01)(param_4);
        (*(code *)puVar7)(0x180224000);
        cVar9 = (*extraout_x11_02)(param_4);
        lVar1 = param_1 + uVar20 * 0x20;
        uVar13 = (uVar20 + 0x2a1) * 0x20;
        iVar14 = -1;
        iVar10 = iVar14;
        if (cVar8 == '\0') {
          iVar10 = 0;
        }
        iVar4 = 0;
        if (cVar8 == '\0') {
          iVar4 = 0x3f800000;
        }
        iVar6 = 0;
        if (cVar9 == '\0') {
          iVar14 = 0;
          iVar6 = 0x3f800000;
        }
        piVar12 = (int *)(uVar13 + param_1);
        if (((((iVar10 == *(int *)(uVar13 + param_1)) && (iVar10 == piVar12[1])) &&
             (iVar10 == piVar12[2])) &&
            ((iVar14 == piVar12[3] && (iVar4 == *(int *)(lVar1 + 0x5430))))) &&
           ((iVar4 == *(int *)(lVar1 + 0x5434) &&
            ((iVar4 == *(int *)(lVar1 + 0x5438) && (iVar6 == *(int *)(lVar1 + 0x543c))))))) {
          bVar15 = 0;
          piVar16 = piVar12 + 2;
          piVar19 = piVar12 + 1;
          piVar18 = piVar12 + 3;
        }
        else {
          piVar18 = (int *)((uVar13 | 0xc) + param_1);
          bVar15 = 1;
          piVar16 = (int *)((uVar13 | 8) + param_1);
          piVar19 = (int *)((uVar13 | 4) + param_1);
        }
        *piVar16 = iVar10;
        *piVar19 = iVar10;
        *piVar12 = iVar10;
        *piVar18 = iVar14;
        *(int *)(uVar20 * 0x20 + param_1 + 0x5438) = iVar4;
        *(int *)(uVar20 * 0x20 + param_1 + 0x5434) = iVar4;
        *(int *)(uVar20 * 0x20 + param_1 + 0x543c) = iVar6;
        *(int *)(lVar1 + 0x5430) = iVar4;
        bVar15 = *(byte *)(param_1 + 0xf6b4) | bVar15;
      }
      *(byte *)(param_1 + 0xf6b4) = bVar15;
    }
    *(undefined1 *)(param_1 + 0xf6c0) = 1;
    *(byte *)(param_1 + 0xf6b8 + (longlong)iVar3) =
         *(byte *)(param_1 + 0xf6b8 + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
  }
  return;
}

