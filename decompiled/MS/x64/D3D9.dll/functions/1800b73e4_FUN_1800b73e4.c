/*
 * FUN_1800b73e4 at 1800b73e4
 * byte __fastcall FUN_1800b73e4(longlong param_1)
 * Address ranges: 1800b73e4-1800b78f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800b73e4(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte *pbVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  byte bVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint local_res8 [2];
  uint local_518 [16];
  undefined8 local_4d8 [74];
  undefined8 local_284 [74];
  undefined4 local_30;
  
  if (*(char *)(param_1 + 0xc50a) == '\0') {
    bVar21 = *(byte *)(param_1 + 0xc505);
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0xc498);
    bVar21 = 0;
    if (lVar13 != 0) {
      puVar1 = (undefined8 *)(lVar13 + 0x20);
      lVar24 = 4;
      *(undefined8 **)(param_1 + 0xc4e8) = puVar1;
      puVar17 = puVar1;
      puVar14 = (undefined8 *)(param_1 + 0x70);
      lVar22 = lVar24;
      do {
        puVar16 = puVar14;
        puVar12 = puVar17;
        uVar8 = puVar12[1];
        *puVar16 = *puVar12;
        puVar16[1] = uVar8;
        uVar8 = puVar12[3];
        puVar16[2] = puVar12[2];
        puVar16[3] = uVar8;
        uVar8 = puVar12[5];
        puVar16[4] = puVar12[4];
        puVar16[5] = uVar8;
        uVar8 = puVar12[7];
        puVar16[6] = puVar12[6];
        puVar16[7] = uVar8;
        uVar8 = puVar12[9];
        puVar16[8] = puVar12[8];
        puVar16[9] = uVar8;
        uVar8 = puVar12[0xb];
        puVar16[10] = puVar12[10];
        puVar16[0xb] = uVar8;
        uVar8 = puVar12[0xd];
        puVar16[0xc] = puVar12[0xc];
        puVar16[0xd] = uVar8;
        uVar8 = puVar12[0xf];
        puVar16[0xe] = puVar12[0xe];
        puVar16[0xf] = uVar8;
        lVar22 = lVar22 + -1;
        puVar17 = puVar12 + 0x10;
        puVar14 = puVar16 + 0x10;
      } while (lVar22 != 0);
      uVar8 = puVar12[0x11];
      uVar11 = 1;
      puVar16[0x10] = puVar12[0x10];
      puVar16[0x11] = uVar8;
      uVar8 = puVar12[0x13];
      puVar16[0x12] = puVar12[0x12];
      puVar16[0x13] = uVar8;
      uVar8 = puVar12[0x15];
      puVar16[0x14] = puVar12[0x14];
      puVar16[0x15] = uVar8;
      uVar8 = puVar12[0x17];
      puVar16[0x16] = puVar12[0x16];
      puVar16[0x17] = uVar8;
      uVar8 = puVar12[0x19];
      puVar16[0x18] = puVar12[0x18];
      puVar16[0x19] = uVar8;
      *(undefined4 *)(puVar16 + 0x1a) = *(undefined4 *)(puVar12 + 0x1a);
      if (*(char *)(lVar13 + 0x293) == '\0') {
        puVar17 = puVar1;
        if (*(undefined8 **)(lVar13 + 0x278) != (undefined8 *)0x0) {
          puVar17 = *(undefined8 **)(lVar13 + 0x278);
        }
        *(undefined8 **)(param_1 + 0xc4f0) = puVar17;
        lVar22 = lVar24;
        puVar17 = (undefined8 *)(param_1 + 0x70);
        do {
          puVar12 = puVar17;
          puVar14 = puVar1;
          uVar8 = puVar14[1];
          *puVar12 = *puVar14;
          puVar12[1] = uVar8;
          uVar8 = puVar14[3];
          puVar12[2] = puVar14[2];
          puVar12[3] = uVar8;
          uVar8 = puVar14[5];
          puVar12[4] = puVar14[4];
          puVar12[5] = uVar8;
          uVar8 = puVar14[7];
          puVar12[6] = puVar14[6];
          puVar12[7] = uVar8;
          uVar8 = puVar14[9];
          puVar12[8] = puVar14[8];
          puVar12[9] = uVar8;
          uVar8 = puVar14[0xb];
          puVar12[10] = puVar14[10];
          puVar12[0xb] = uVar8;
          uVar8 = puVar14[0xd];
          puVar12[0xc] = puVar14[0xc];
          puVar12[0xd] = uVar8;
          uVar8 = puVar14[0xf];
          puVar12[0xe] = puVar14[0xe];
          puVar12[0xf] = uVar8;
          lVar22 = lVar22 + -1;
          puVar1 = puVar14 + 0x10;
          puVar17 = puVar12 + 0x10;
        } while (lVar22 != 0);
        uVar8 = puVar14[0x11];
        puVar12[0x10] = puVar14[0x10];
        puVar12[0x11] = uVar8;
        uVar8 = puVar14[0x13];
        puVar12[0x12] = puVar14[0x12];
        puVar12[0x13] = uVar8;
        uVar8 = puVar14[0x15];
        puVar12[0x14] = puVar14[0x14];
        puVar12[0x15] = uVar8;
        uVar8 = puVar14[0x17];
        puVar12[0x16] = puVar14[0x16];
        puVar12[0x17] = uVar8;
        uVar8 = puVar14[0x19];
        puVar12[0x18] = puVar14[0x18];
        puVar12[0x19] = uVar8;
        *(undefined4 *)(puVar12 + 0x1a) = *(undefined4 *)(puVar14 + 0x1a);
        bVar20 = 1 < *(int *)(param_1 + 0x74) - 3U;
      }
      else {
        *(undefined8 **)(param_1 + 0xc4f0) = puVar1;
        bVar20 = false;
        if ((*(int *)(param_1 + 0x74) != 4) &&
           ((*(int *)(param_1 + 0x74) != 3 || (*(longlong *)(param_1 + 0xc490) != 0)))) {
          bVar20 = true;
        }
      }
      if ((*(char *)(param_1 + 0x681b) != '\0') ||
         (bVar4 = false, *(char *)(lVar13 + 0x292) == '\0')) {
        bVar4 = true;
      }
      bVar21 = bVar20 & bVar4;
      if (bVar21 != 0) {
        *(undefined4 *)(param_1 + 0x67cc) = 0xffffffff;
        *(undefined1 *)(param_1 + 0xc508) = 0;
        if ((*(ulonglong *)(param_1 + 0xc490) == 0) || (*(int *)(lVar13 + 0x24) == 0)) {
          *(undefined8 *)(param_1 + 0xc4f8) = 0;
          if (*(char *)(lVar13 + 0x293) == '\0') {
            bVar21 = *(byte *)(lVar13 + 0x290);
          }
        }
        else {
          lVar13 = FUN_1800bed58(param_1 + 0x68b8,*(ulonglong *)(param_1 + 0xc490));
          if (lVar13 != 0) {
            iVar10 = (**(code **)(**(longlong **)(lVar13 + 8) + 8))();
            *(int *)(param_1 + 0x67cc) = iVar10;
            if (iVar10 == -1) {
              lVar22 = *(longlong *)(param_1 + 0xc4e8);
              *(undefined4 *)(param_1 + 0x67cc) = 0;
              uVar18 = 0;
              if (lVar22 != 0) {
                while (uVar19 = (uint)uVar18, uVar19 < 0x10) {
                  if (((*(char *)(uVar18 + 0x10 + *(longlong *)(lVar13 + 0x10)) == '\0') ||
                      (cVar2 = *(char *)(uVar18 + *(longlong *)(lVar13 + 0x10)), cVar2 == -1)) ||
                     (uVar18 = 0, *(int *)(lVar22 + 8) == 0)) {
                    uVar18 = (ulonglong)(uVar19 + 1);
                  }
                  else {
                    do {
                      uVar23 = (ulonglong)*(byte *)(lVar22 + 0x214 + uVar18);
                      if (*(char *)(lVar22 + 0x19 + uVar23 * 8) == cVar2) {
                        *(uint *)(param_1 + 0x67cc) =
                             *(uint *)(param_1 + 0x67cc) |
                             1 << (*(byte *)(lVar22 + 0x14 + uVar23 * 8) & 0x1f);
                        break;
                      }
                      uVar15 = (int)uVar18 + 1;
                      uVar18 = (ulonglong)uVar15;
                    } while (uVar15 < *(uint *)(lVar22 + 8));
                    uVar18 = (ulonglong)(uVar19 + 1);
                  }
                }
              }
            }
            FUN_1800fbea0((undefined1 *)local_518,0,0x40);
            if (*(char *)(param_1 + 0x681b) == '\0') {
              local_res8[0] = *(uint *)(param_1 + 0x67cc);
              uVar11 = 0;
              if (local_res8[0] != 0) {
                for (; (local_res8[0] >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
              if (local_res8[0] == 0) {
                uVar11 = 0xffffffff;
              }
              else {
                pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar11 >> 3));
                *pbVar3 = *pbVar3 & ~('\x01' << (uVar11 & 7));
                uVar11 = uVar11 & 0xff;
              }
              if (uVar11 != 0xffffffff) {
                while( true ) {
                  uVar19 = *(uint *)(param_1 + 0xc4a0 + (longlong)(int)uVar11 * 4);
                  if ((int)uVar19 < 0) {
                    local_518[(int)uVar11] = uVar19 & 0x3fffffff;
                  }
                  uVar11 = 0;
                  if (local_res8[0] != 0) {
                    for (; (local_res8[0] >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                    }
                  }
                  if (local_res8[0] == 0) break;
                  pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar11 >> 3));
                  *pbVar3 = *pbVar3 & ~('\x01' << (uVar11 & 7));
                  uVar11 = uVar11 & 0xff;
                }
              }
              uVar11 = *(uint *)(param_1 + 0xc4a0) & 0x3fffffff;
            }
            else if (*(char *)(*(longlong *)(lVar13 + 0x868) + 1) == '\x03') {
              local_res8[0] = *(uint *)(param_1 + 0x67cc);
              uVar19 = 0;
              if (local_res8[0] != 0) {
                for (; (local_res8[0] >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                }
              }
              if (local_res8[0] != 0) {
                pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar19 >> 3));
                *pbVar3 = *pbVar3 & ~('\x01' << (uVar19 & 7));
                while ((*(uint *)(param_1 + 0xc4a0 + (ulonglong)(uVar19 & 0xff) * 4) & 0x3fffffff)
                       == 1) {
                  uVar19 = 0;
                  if (local_res8[0] != 0) {
                    for (; (local_res8[0] >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                    }
                  }
                  if (local_res8[0] == 0) goto LAB_1800b7764;
                  pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar19 >> 3));
                  *pbVar3 = *pbVar3 & ~('\x01' << (uVar19 & 7));
                }
                *(undefined1 *)(param_1 + 0xc508) = 1;
              }
            }
LAB_1800b7764:
            puVar1 = *(undefined8 **)(param_1 + 0xc4e8);
            puVar17 = local_4d8;
            lVar22 = lVar24;
            do {
              puVar12 = puVar17;
              puVar14 = puVar1;
              uVar8 = puVar14[1];
              *puVar12 = *puVar14;
              puVar12[1] = uVar8;
              uVar8 = puVar14[3];
              puVar12[2] = puVar14[2];
              puVar12[3] = uVar8;
              uVar8 = puVar14[5];
              puVar12[4] = puVar14[4];
              puVar12[5] = uVar8;
              uVar8 = puVar14[7];
              puVar12[6] = puVar14[6];
              puVar12[7] = uVar8;
              uVar8 = puVar14[9];
              puVar12[8] = puVar14[8];
              puVar12[9] = uVar8;
              uVar8 = puVar14[0xb];
              puVar12[10] = puVar14[10];
              puVar12[0xb] = uVar8;
              uVar8 = puVar14[0xd];
              puVar12[0xc] = puVar14[0xc];
              puVar12[0xd] = uVar8;
              uVar8 = puVar14[0xf];
              puVar12[0xe] = puVar14[0xe];
              puVar12[0xf] = uVar8;
              lVar22 = lVar22 + -1;
              puVar1 = puVar14 + 0x10;
              puVar17 = puVar12 + 0x10;
            } while (lVar22 != 0);
            uVar8 = puVar14[0x11];
            puVar12[0x10] = puVar14[0x10];
            puVar12[0x11] = uVar8;
            uVar8 = puVar14[0x13];
            puVar12[0x12] = puVar14[0x12];
            puVar12[0x13] = uVar8;
            uVar8 = puVar14[0x15];
            puVar12[0x14] = puVar14[0x14];
            puVar12[0x15] = uVar8;
            uVar8 = puVar14[0x17];
            puVar12[0x16] = puVar14[0x16];
            puVar12[0x17] = uVar8;
            uVar8 = puVar14[0x19];
            puVar12[0x18] = puVar14[0x18];
            puVar12[0x19] = uVar8;
            *(undefined4 *)(puVar12 + 0x1a) = *(undefined4 *)(puVar14 + 0x1a);
            puVar1 = *(undefined8 **)(param_1 + 0xc4f0);
            puVar17 = local_284;
            do {
              puVar12 = puVar17;
              puVar14 = puVar1;
              uVar8 = puVar14[1];
              *puVar12 = *puVar14;
              puVar12[1] = uVar8;
              uVar8 = puVar14[3];
              puVar12[2] = puVar14[2];
              puVar12[3] = uVar8;
              uVar8 = puVar14[5];
              puVar12[4] = puVar14[4];
              puVar12[5] = uVar8;
              uVar8 = puVar14[7];
              puVar12[6] = puVar14[6];
              puVar12[7] = uVar8;
              uVar8 = puVar14[9];
              puVar12[8] = puVar14[8];
              puVar12[9] = uVar8;
              uVar8 = puVar14[0xb];
              puVar12[10] = puVar14[10];
              puVar12[0xb] = uVar8;
              uVar8 = puVar14[0xd];
              puVar12[0xc] = puVar14[0xc];
              puVar12[0xd] = uVar8;
              uVar8 = puVar14[0xf];
              puVar12[0xe] = puVar14[0xe];
              puVar12[0xf] = uVar8;
              lVar24 = lVar24 + -1;
              puVar1 = puVar14 + 0x10;
              puVar17 = puVar12 + 0x10;
            } while (lVar24 != 0);
            uVar8 = puVar14[0x11];
            puVar12[0x10] = puVar14[0x10];
            puVar12[0x11] = uVar8;
            uVar8 = puVar14[0x13];
            puVar12[0x12] = puVar14[0x12];
            puVar12[0x13] = uVar8;
            uVar8 = puVar14[0x15];
            puVar12[0x14] = puVar14[0x14];
            puVar12[0x15] = uVar8;
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xb4);
            uVar6 = *(undefined4 *)(puVar14 + 0x17);
            uVar7 = *(undefined4 *)((longlong)puVar14 + 0xbc);
            *(undefined4 *)(puVar12 + 0x16) = *(undefined4 *)(puVar14 + 0x16);
            *(undefined4 *)((longlong)puVar12 + 0xb4) = uVar5;
            *(undefined4 *)(puVar12 + 0x17) = uVar6;
            *(undefined4 *)((longlong)puVar12 + 0xbc) = uVar7;
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc4);
            uVar6 = *(undefined4 *)(puVar14 + 0x19);
            uVar7 = *(undefined4 *)((longlong)puVar14 + 0xcc);
            *(undefined4 *)(puVar12 + 0x18) = *(undefined4 *)(puVar14 + 0x18);
            *(undefined4 *)((longlong)puVar12 + 0xc4) = uVar5;
            *(undefined4 *)(puVar12 + 0x19) = uVar6;
            *(undefined4 *)((longlong)puVar12 + 0xcc) = uVar7;
            *(undefined4 *)(puVar12 + 0x1a) = *(undefined4 *)(puVar14 + 0x1a);
            local_30 = *(undefined4 *)(param_1 + 0x67cc);
            bVar9 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x10))
                              (*(longlong **)(lVar13 + 8),local_4d8,local_518,uVar11);
            bVar21 = bVar21 & bVar9;
            *(undefined8 *)(param_1 + 0xc4f8) = *(undefined8 *)(lVar13 + 8);
          }
        }
      }
    }
    *(byte *)(param_1 + 0xc505) = bVar21;
    *(undefined1 *)(param_1 + 0xc50a) = 0;
  }
  return bVar21;
}

