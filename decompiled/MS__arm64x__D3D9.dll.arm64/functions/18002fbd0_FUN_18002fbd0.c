/*
 * FUN_18002fbd0 at 18002fbd0
 * undefined FUN_18002fbd0(void)
 * Address ranges: 18002fbd0-18002ff53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002fbd0(longlong param_1,int param_2,int param_3,longlong *param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar5 = param_2 - 1;
  uVar19 = (ulonglong)uVar5;
  if (uVar5 < 4) {
    FUN_18002a810(param_1,0,0,0);
    lVar1 = param_1 + uVar19 * 8;
    iVar3 = (int)uVar5 >> 3;
    if (param_4 == (longlong *)0x0) {
      *(undefined8 *)(lVar1 + 0xfc18) = 0;
      *(undefined8 *)(lVar1 + 0xfc40) = 0;
    }
    else {
      iVar8 = (**(code **)(*param_4 + 8))(param_4);
      if (iVar8 == 1) {
        *(undefined8 *)(lVar1 + 0xfc18) = 0;
        *(longlong **)(lVar1 + 0xfc40) = param_4 + -4;
        if (*(int *)(lVar1 + 0x81c) != param_3) {
          *(int *)(lVar1 + 0x81c) = param_3;
          *(byte *)(param_1 + 0xf6bc + (longlong)iVar3) =
               *(byte *)(param_1 + 0xf6bc + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
        }
        lVar1 = param_1 + uVar19 * 0x20;
        uVar18 = (uVar19 + 0x2a1) * 0x20;
        iVar8 = -1;
        if ((&DAT_180231518)[*(uint *)((longlong)param_4 + -0xc)] == '\0') {
          iVar8 = 0;
        }
        iVar17 = 0;
        if ((&DAT_180231518)[*(uint *)((longlong)param_4 + -0xc)] == '\0') {
          iVar17 = 0x3f800000;
        }
        puVar2 = (undefined4 *)(uVar18 + param_1);
        if ((((*(int *)(uVar18 + param_1) == -1) && (puVar2[1] == -1)) && (puVar2[2] == -1)) &&
           (((iVar8 == puVar2[3] && (*(int *)(lVar1 + 0x5430) == 0)) &&
            ((*(int *)(lVar1 + 0x5434) == 0 &&
             ((*(int *)(lVar1 + 0x5438) == 0 && (iVar17 == *(int *)(lVar1 + 0x543c))))))))) {
          bVar16 = 0;
          puVar10 = puVar2 + 2;
          puVar12 = puVar2 + 1;
          piVar14 = puVar2 + 3;
        }
        else {
          puVar10 = (undefined4 *)((uVar18 | 8) + param_1);
          piVar14 = (int *)((uVar18 | 0xc) + param_1);
          bVar16 = 1;
          puVar12 = (undefined4 *)((uVar18 | 4) + param_1);
        }
        *piVar14 = iVar8;
        *puVar10 = 0xffffffff;
        *puVar12 = 0xffffffff;
        *puVar2 = 0xffffffff;
        *(undefined4 *)(uVar19 * 0x20 + param_1 + 0x5438) = 0;
        *(undefined4 *)(uVar19 * 0x20 + param_1 + 0x5434) = 0;
        *(undefined4 *)(lVar1 + 0x5430) = 0;
      }
      else {
        param_4 = param_4 + -0x1c;
        (**(code **)(*param_4 + 0xf8))(param_4,param_5);
        *(longlong **)(lVar1 + 0xfc18) = param_4;
        *(undefined8 *)(lVar1 + 0xfc40) = 0;
        if (*(int *)(lVar1 + 0x81c) != param_3) {
          *(int *)(lVar1 + 0x81c) = param_3;
          *(byte *)(param_1 + 0xf6bc + (longlong)iVar3) =
               *(byte *)(param_1 + 0xf6bc + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
        }
        cVar6 = (**(code **)(*param_4 + 0x78))(param_4);
        cVar7 = (**(code **)(*param_4 + 0x80))(param_4);
        lVar1 = param_1 + uVar19 * 0x20;
        uVar18 = (uVar19 + 0x2a1) * 0x20;
        iVar15 = -1;
        iVar8 = iVar15;
        if (cVar6 == '\0') {
          iVar8 = 0;
        }
        iVar4 = 0;
        if (cVar6 == '\0') {
          iVar4 = 0x3f800000;
        }
        if (cVar7 == '\0') {
          iVar15 = 0;
        }
        iVar17 = 0;
        if (cVar7 == '\0') {
          iVar17 = 0x3f800000;
        }
        piVar14 = (int *)(uVar18 + param_1);
        if (((((iVar8 == *(int *)(uVar18 + param_1)) && (iVar8 == piVar14[1])) &&
             (iVar8 == piVar14[2])) &&
            ((iVar15 == piVar14[3] && (iVar4 == *(int *)(lVar1 + 0x5430))))) &&
           ((iVar4 == *(int *)(lVar1 + 0x5434) &&
            ((iVar4 == *(int *)(lVar1 + 0x5438) && (iVar17 == *(int *)(lVar1 + 0x543c))))))) {
          bVar16 = 0;
          piVar9 = piVar14 + 2;
          piVar11 = piVar14 + 1;
          piVar13 = piVar14 + 3;
        }
        else {
          piVar9 = (int *)((uVar18 | 8) + param_1);
          piVar13 = (int *)((uVar18 | 0xc) + param_1);
          bVar16 = 1;
          piVar11 = (int *)((uVar18 | 4) + param_1);
        }
        *piVar13 = iVar15;
        *piVar9 = iVar8;
        *piVar11 = iVar8;
        *piVar14 = iVar8;
        *(int *)(uVar19 * 0x20 + param_1 + 0x5438) = iVar4;
        *(int *)(uVar19 * 0x20 + param_1 + 0x5434) = iVar4;
        *(int *)(lVar1 + 0x5430) = iVar4;
      }
      *(int *)(uVar19 * 0x20 + param_1 + 0x543c) = iVar17;
      *(byte *)(param_1 + 0xf6b4) = *(byte *)(param_1 + 0xf6b4) | bVar16;
    }
    *(undefined1 *)(param_1 + 0xf6c0) = 1;
    *(byte *)(param_1 + 0xf6b8 + (longlong)iVar3) =
         *(byte *)(param_1 + 0xf6b8 + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
  }
  return;
}

