/*
 * FUN_1801cb9a8 at 1801cb9a8
 * undefined FUN_1801cb9a8(void)
 * Address ranges: 1801cb9a8-1801cbc9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cb9a8(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar14 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x70)) && (param_2 + param_4 <= *(uint *)(param_1 + 0x70))) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
        bVar10 = false;
        *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
      }
      else {
        bVar10 = true;
        iVar13 = thunk_FUN_1802236e4(DAT_180258900);
        if (iVar13 == 0) {
          FUN_1801085c8();
        }
      }
      uVar17 = *(uint *)(param_1 + -0x59bc);
      if (param_2 < uVar17) {
        if (uVar17 < param_2 + param_4) {
          param_4 = uVar17 - param_2;
        }
      }
      else {
        param_4 = 0;
      }
      uVar3 = param_4 & 0x3fffffff;
      uVar5 = param_4 & 0x3fffffff;
      uVar17 = (param_4 & 0x3fffffff) << 1;
      uVar16 = (ulonglong)(param_2 << 2);
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar15 = FUN_1801dbb48(param_1 + 0x80,*(undefined8 *)(param_1 + 0x5c58));
        lVar1 = param_1 + (uVar16 & 0xffffffff) * 4;
        uVar9 = uVar17;
        puVar11 = (undefined8 *)(lVar1 + -0x5458);
        puVar12 = param_3;
        while (uVar3 != 0) {
          *puVar11 = *puVar12;
          uVar9 = uVar9 - 1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
          uVar3 = uVar9;
        }
        param_4 = param_2 + param_4;
        uVar14 = FUN_180224358();
        FUN_1802243a0(0x3fc0);
        puVar11 = (undefined8 *)(lVar1 + 0x9a8);
        while (uVar5 != 0) {
          *puVar11 = *param_3;
          uVar17 = uVar17 - 1;
          puVar11 = puVar11 + 1;
          param_3 = param_3 + 1;
          uVar5 = uVar17;
        }
        if (lVar15 != 0) {
          psVar2 = (short *)(lVar15 + 0x18);
          sVar6 = *psVar2;
          uVar16 = 0;
          while ((sVar6 != -1 && (uVar7 = psVar2[uVar16], uVar7 <= param_4))) {
            uVar8 = psVar2[(int)uVar16 + 1];
            if (param_2 <= uVar8) {
              uVar17 = param_2;
              if (param_2 <= uVar7) {
                uVar17 = (uint)uVar7;
              }
              uVar3 = (uint)uVar8;
              if (param_4 <= uVar8) {
                uVar3 = param_4;
              }
              uVar5 = uVar3 - uVar17 & 0x3fffffff;
              uVar3 = uVar5 << 1;
              puVar11 = (undefined8 *)
                        (*(longlong *)(lVar15 + 0x10) + (ulonglong)(uVar17 << 2) * 4 + 0x850);
              puVar12 = (undefined8 *)(param_1 + (ulonglong)(uVar17 << 2) * 4 + 0x9a8);
              while (uVar5 != 0) {
                *puVar12 = *puVar11;
                uVar3 = uVar3 - 1;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
                uVar5 = uVar3;
              }
            }
            uVar16 = (ulonglong)((int)uVar16 + 2);
            sVar6 = psVar2[uVar16];
          }
        }
        if ((*(char *)(param_1 + -0x6817) == '\0') ||
           ((lVar15 != 0 && (*(char *)(*(longlong *)(lVar15 + 0x10) + 0x44e) != '\0')))) {
          iVar13 = 1;
        }
        else {
          iVar13 = 0;
        }
        uVar3 = *(uint *)(param_1 + -0x28);
        iVar4 = *(int *)(param_1 + -0x24);
        uVar5 = *(uint *)(param_1 + -0x2c);
        uVar17 = param_2;
        if (iVar13 == iVar4) {
          if (uVar5 < uVar3) {
            if (uVar3 < param_2 || param_4 < uVar5) {
              FUN_1801c3d90(param_1 + -0x6838,iVar4);
              *(int *)(param_1 + -0x24) = iVar4;
            }
            else {
              uVar17 = uVar5;
              if (param_2 <= uVar5) {
                uVar17 = param_2;
              }
              if (param_4 < uVar3) {
                param_4 = uVar3;
              }
            }
          }
        }
        else {
          if (uVar5 < uVar3) {
            FUN_1801c3d90(param_1 + -0x6838,iVar4);
          }
          *(int *)(param_1 + -0x24) = iVar13;
        }
        *(uint *)(param_1 + -0x2c) = uVar17;
        *(uint *)(param_1 + -0x28) = param_4;
        FUN_1802243a0(uVar14);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + uVar16 * 4 + 0x6190);
        uVar3 = param_4 & 0x3fffffff;
        while (uVar3 != 0) {
          *puVar11 = *param_3;
          uVar17 = uVar17 - 1;
          puVar11 = puVar11 + 1;
          param_3 = param_3 + 1;
          uVar3 = uVar17;
        }
        if (param_4 != 0) {
          FUN_180222c50(param_1 + (ulonglong)param_2 + -0x658,1,param_4);
        }
      }
      if (bVar10) {
        thunk_FUN_18022370c(DAT_180258900);
      }
      else {
        *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
      }
    }
    uVar14 = 0;
  }
  return uVar14;
}

