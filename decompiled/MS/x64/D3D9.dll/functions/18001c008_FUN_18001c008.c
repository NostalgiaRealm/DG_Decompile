/*
 * FUN_18001c008 at 18001c008
 * undefined8 __fastcall FUN_18001c008(longlong param_1, int param_2, int * param_3, undefined8 param_4, undefined8 param_5, uint param_6)
 * Address ranges: 18001c008-18001c3f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18001c008(longlong param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             uint param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined1 local_4c;
  undefined1 local_4b;
  
  if (param_3 == (int *)0x0) {
    return 0x8876086c;
  }
  if (2 < param_2 - 1U) {
    return 0x8876086c;
  }
  if (*(char *)(param_1 + 0x40c) != '\0') {
    return 0x8876086c;
  }
  puVar7 = FUN_18001bdc0(param_1);
  if ((int)puVar7 == -1) {
    return 0x8007000e;
  }
  puVar17 = (undefined4 *)&DAT_1801046a0;
  puVar18 = (undefined4 *)&DAT_1801047c0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + ((ulonglong)puVar7 & 0xffffffff) * 8);
  uVar6 = 0x11;
  if (param_2 == 3) {
    puVar17 = &DAT_1801045f0;
    uVar6 = 2;
  }
  uVar9 = 0x43;
  if (param_2 == 3) {
    puVar18 = &DAT_1801047b0;
    uVar9 = 0x2a;
  }
  if (param_2 == 1) {
    uVar11 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 8) + uVar11 * 8) != '\0') {
        *(undefined4 *)(lVar3 + 0x10 + uVar11 * 4) = *(undefined4 *)(param_1 + 0x478 + uVar11 * 4);
        uVar8 = (ulonglong)((uint)uVar11 & 0x3f);
        pbVar4 = (byte *)(lVar3 + 0xac68 + (uVar11 >> 6) * 8 + ((longlong)uVar8 >> 3));
        *pbVar4 = *pbVar4 | '\x01' << (uVar8 & 7);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0xd2);
    uVar11 = 0;
    do {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x10) + uVar11 * 0xc) != '\0') {
          *(undefined4 *)(lVar3 + uVar11 * 4 + 0x358 + uVar8 * 0x84) =
               *(undefined4 *)(param_1 + uVar11 * 4 + 0x7c0 + uVar8 * 0x84);
          uVar6 = (int)uVar8 * 0x21 + (int)uVar11;
          uVar13 = (ulonglong)(uVar6 & 0x3f);
          pbVar4 = (byte *)(lVar3 + 0xac88 + (ulonglong)(uVar6 >> 6) * 8 + ((longlong)uVar13 >> 3));
          *pbVar4 = *pbVar4 | '\x01' << (uVar13 & 7);
        }
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
      } while (uVar6 < 8);
      uVar6 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar6;
    } while (uVar6 < 0x21);
    uVar5 = *(undefined8 *)(param_1 + 0x2dc);
    *(undefined8 *)(lVar3 + 0x49f8) = *(undefined8 *)(param_1 + 0x2d4);
    *(undefined8 *)(lVar3 + 0x4a00) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x2ec);
    *(undefined8 *)(lVar3 + 0x4a08) = *(undefined8 *)(param_1 + 0x2e4);
    *(undefined8 *)(lVar3 + 0x4a10) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x2fc);
    *(undefined8 *)(lVar3 + 0x4a18) = *(undefined8 *)(param_1 + 0x2f4);
    *(undefined8 *)(lVar3 + 0x4a20) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x30c);
    *(undefined8 *)(lVar3 + 0x4a28) = *(undefined8 *)(param_1 + 0x304);
    *(undefined8 *)(lVar3 + 0x4a30) = uVar5;
    *(undefined4 *)(lVar3 + 19000) = *(undefined4 *)(param_1 + 0x314);
    *(undefined1 *)(lVar3 + 0xace9) = 1;
  }
  else {
    uVar11 = 0;
    do {
      *(undefined4 *)(lVar3 + 0x10 + (ulonglong)(uint)puVar17[uVar11] * 4) =
           *(undefined4 *)(param_1 + 0x478 + (ulonglong)(uint)puVar17[uVar11] * 4);
      puVar16 = puVar17 + uVar11;
      uVar15 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar15;
      uVar8 = (ulonglong)(*puVar16 & 0x3f);
      pbVar4 = (byte *)(lVar3 + 0xac68 + (ulonglong)(*puVar16 >> 6) * 8 + ((longlong)uVar8 >> 3));
      *pbVar4 = *pbVar4 | '\x01' << (uVar8 & 7);
    } while (uVar15 < uVar9);
    uVar11 = 0;
    do {
      uVar8 = 0;
      do {
        *(undefined4 *)(uVar11 * 0x84 + lVar3 + 0x358 + (ulonglong)(uint)puVar18[uVar8] * 4) =
             *(undefined4 *)(uVar11 * 0x84 + param_1 + 0x7c0 + (ulonglong)(uint)puVar18[uVar8] * 4);
        piVar1 = puVar18 + uVar8;
        uVar15 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar15;
        uVar9 = *piVar1 + (int)uVar11 * 0x21;
        uVar13 = (ulonglong)(uVar9 & 0x3f);
        pbVar4 = (byte *)(lVar3 + 0xac88 + (ulonglong)(uVar9 >> 6) * 8 + ((longlong)uVar13 >> 3));
        *pbVar4 = *pbVar4 | '\x01' << (uVar13 & 7);
      } while (uVar15 < uVar6);
      uVar9 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
    } while (uVar9 < 8);
    if (param_2 != 3) goto LAB_18001c3b4;
  }
  if (*(int *)(param_1 + 0x328) != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x328) == 0) {
      puVar16 = (uint *)0x0;
      puVar12 = (undefined8 *)&DAT_00000004;
      goto LAB_18001c270;
    }
    do {
      puVar16 = (uint *)(*(longlong *)(param_1 + 800) + 8 + (ulonglong)uVar6 * 0x78);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 800) + 0xc + (ulonglong)uVar6 * 0x78);
LAB_18001c270:
      if (puVar16 != (uint *)0x0) {
        local_b8 = *puVar12;
        uStack_b0 = puVar12[1];
        param_6 = *puVar16;
        local_a8 = puVar12[2];
        uStack_a0 = puVar12[3];
        local_98 = puVar12[4];
        uStack_90 = puVar12[5];
        local_4b = 1;
        local_88 = puVar12[6];
        uStack_80 = puVar12[7];
        local_78 = puVar12[8];
        uStack_70 = puVar12[9];
        local_68 = puVar12[10];
        uStack_54 = *(undefined8 *)((longlong)puVar12 + 100);
        uStack_60 = (undefined4)puVar12[0xb];
        uStack_5c = (undefined4)*(undefined8 *)((longlong)puVar12 + 0x5c);
        uStack_58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar12 + 0x5c) >> 0x20);
        if (*(uint *)(param_1 + 0x360) != 0) {
          uVar11 = 0;
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x358) + uVar11 * 4) == param_6)
            goto LAB_18001c2d9;
            uVar9 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(param_1 + 0x360));
        }
        uVar11 = 0xffffffff;
LAB_18001c2d9:
        local_4c = (int)uVar11 != -1;
        FUN_18001d9f4((longlong *)(lVar3 + 0x4ab8),&param_6,&local_b8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x328));
  }
  uVar11 = 0;
  do {
    lVar14 = *(longlong *)(param_1 + 0xe10);
    lVar10 = uVar11 * 0x40;
    uVar5 = ((undefined8 *)(lVar14 + lVar10))[1];
    puVar12 = (undefined8 *)(lVar3 + 0x778 + lVar10);
    *puVar12 = *(undefined8 *)(lVar14 + lVar10);
    puVar12[1] = uVar5;
    puVar12 = (undefined8 *)(lVar14 + 0x10 + lVar10);
    uVar5 = puVar12[1];
    puVar2 = (undefined8 *)(lVar3 + 0x788 + lVar10);
    *puVar2 = *puVar12;
    puVar2[1] = uVar5;
    puVar12 = (undefined8 *)(lVar14 + 0x20 + lVar10);
    uVar5 = puVar12[1];
    puVar2 = (undefined8 *)(lVar3 + 0x798 + lVar10);
    *puVar2 = *puVar12;
    puVar2[1] = uVar5;
    puVar12 = (undefined8 *)(lVar14 + 0x30 + lVar10);
    uVar5 = puVar12[1];
    puVar2 = (undefined8 *)(lVar3 + 0x7a8 + lVar10);
    *puVar2 = *puVar12;
    puVar2[1] = uVar5;
    uVar13 = uVar11 + 1;
    uVar8 = (ulonglong)((uint)uVar11 & 0x3f);
    pbVar4 = (byte *)(lVar3 + 0xacb0 + (uVar11 >> 6) * 8 + ((longlong)uVar8 >> 3));
    *pbVar4 = *pbVar4 | '\x01' << (uVar8 & 7);
    uVar11 = uVar13;
  } while (uVar13 != 0x10a);
  uVar11 = 0;
  do {
    lVar14 = 0;
    do {
      *(undefined4 *)(lVar3 + uVar11 * 0x10 + 0x4a54 + lVar14 * 4) =
           *(undefined4 *)(param_1 + uVar11 * 0x10 + 0x418 + lVar14 * 4);
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    uVar6 = (uint)uVar11 + 1;
    uVar8 = (ulonglong)((uint)uVar11 & 0x3f);
    pbVar4 = (byte *)(lVar3 + 0xace0 + (uVar11 >> 6) * 8 + ((longlong)uVar8 >> 3));
    *pbVar4 = *pbVar4 | '\x01' << (uVar8 & 7);
    uVar11 = (ulonglong)uVar6;
  } while (uVar6 < 6);
LAB_18001c3b4:
  *(undefined8 *)(lVar3 + 8) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf0))(*(longlong **)(param_1 + 0x28),lVar3,0);
  *param_3 = (int)puVar7 + 1;
  return 0;
}

