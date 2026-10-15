/*
 * FUN_180095d68 at 180095d68
 * undefined FUN_180095d68(void)
 * Address ranges: 180095d68-1800961e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180095d68(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  uVar13 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      uVar14 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        do {
          uVar5 = *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          uVar6 = *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar14 & 0x1f);
          if (uVar6 == 0) {
            uVar6 = 1;
          }
          uVar7 = uVar14 + *(int *)(param_1 + 0x3c) * uVar13;
          uVar16 = (ulonglong)uVar7;
          if (*(int *)(param_1 + 0x44) - 3U < 3) {
            lVar15 = *(longlong *)(param_3 + 0x1c);
            if (lVar15 == 0) {
              lVar15 = *(longlong *)(param_3 + 0x14);
            }
            uVar2 = *(undefined4 *)(param_3 + 0x48);
            uVar9 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),auStack_a8
                                  ,*(undefined4 *)(param_3 + 0x34),uVar16);
            uVar10 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),
                                   auStack_a0,*(undefined4 *)(param_2 + 0x2c),0);
            fVar19 = (float)(int)uVar6;
            fVar17 = (float)(int)uVar5;
            FUN_18008e010(*(float *)(param_1 + 0x244) * 0.0,*(float *)(param_1 + 0x248) * 0.0,
                          *(float *)(param_1 + 0x244) * fVar17,*(float *)(param_1 + 0x248) * fVar19,
                          0,0,fVar17,fVar19,*(undefined8 *)(param_1 + 0x130),
                          *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),uVar14,
                          uVar16,uVar14,uVar13,uVar16,0,0,*(undefined8 *)(param_2 + 0x14),0,lVar15,
                          &DAT_180231350,&DAT_180231350,uVar10,&DAT_180231350,uVar9,0,0,uVar2,0,0xf,
                          1);
            uVar5 = *(uint *)(param_1 + 0x2c);
            if ((((&DAT_180231818)[uVar5] != '\0') &&
                (uVar12 = FUN_180095d10(param_1), (&DAT_180231818)[uVar12 & 0xffffffff] != '\0')) &&
               (*(char *)(*(longlong *)(param_1 + 0x50) +
                          (ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + 0x6e9) != '\0')) {
              lVar15 = *(longlong *)(param_3 + 0x1c);
              iVar8 = uVar14 + (*(int *)(param_1 + 0x34) + uVar13) * *(int *)(param_1 + 0x3c);
              if (lVar15 == 0) {
                lVar15 = *(longlong *)(param_3 + 0x14);
              }
              fVar18 = *(float *)(param_1 + 0x244);
              fVar20 = *(float *)(param_1 + 0x248);
              uVar2 = *(undefined4 *)(param_3 + 0x48);
              uVar9 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),
                                    auStack_98,*(undefined4 *)(param_3 + 0x34),uVar16);
              uVar10 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),
                                     auStack_90,*(undefined4 *)(param_2 + 0x2c),1);
              FUN_18008e010(fVar18 * 0.0,fVar20 * 0.0,fVar18 * fVar17,fVar20 * fVar19,0,0,fVar17,
                            fVar19,*(undefined8 *)(param_1 + 0x130),uVar5,uVar5,uVar14,iVar8,uVar14,
                            uVar13,iVar8,0,0,*(undefined8 *)(param_2 + 0x14),0,lVar15,&DAT_180231350
                            ,&DAT_180231350,uVar10,&DAT_180231350,uVar9,0,0,uVar2,0,0x22,1);
            }
          }
          else {
            if (*(int *)(param_1 + 0x2c) == 0) {
              FUN_18008db78(*(undefined8 *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x10));
            }
            uVar1 = *(uint *)(param_1 + 0x2c);
            if (*(char *)(param_1 + 0x24c) == '\0') {
              uVar11 = *(uint *)(&DAT_180231770 + (ulonglong)uVar1 * 4);
            }
            else {
              uVar11 = 1;
            }
            lVar15 = *(longlong *)(param_3 + 0x1c);
            uVar3 = 0xf8001000;
            if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84) == '\0') {
              uVar3 = 0xf8000000;
            }
            uVar4 = *(uint *)(&DAT_180231550 + (ulonglong)uVar1 * 4);
            if (lVar15 == 0) {
              lVar15 = *(longlong *)(param_3 + 0x14);
            }
            fVar17 = *(float *)(param_1 + 0x244);
            fVar19 = *(float *)(param_1 + 0x248);
            uVar2 = *(undefined4 *)(param_3 + 0x48);
            iVar8 = uVar14 + *(int *)(param_1 + 0x3c) * uVar13;
            uVar9 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_b8
                                  ,*(undefined4 *)(param_2 + 0x2c),0);
            uVar10 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),
                                   auStack_b0,*(undefined4 *)(param_3 + 0x30),uVar16);
            FUN_18008e010(fVar17 * 0.0,fVar19 * 0.0,fVar17 * (float)(int)uVar5,
                          fVar19 * (float)(int)uVar6,0,0,(float)(int)uVar5,(float)(int)uVar6,
                          *(undefined8 *)(param_1 + 0x130),uVar1,uVar1,uVar14,iVar8,uVar14,uVar13,
                          iVar8,lVar15,0,*(undefined8 *)(param_2 + 0x14),0,0,uVar10,&DAT_180231350,
                          uVar9,&DAT_180231350,&DAT_180231350,uVar2,0,0,0,
                          uVar4 & 0xf | (uVar3 | uVar11 & 7) << 4,1);
          }
          lVar15 = param_1 + ((ulonglong)(uVar7 >> 6) + 0x4a) * 8;
          uVar12 = (ulonglong)(uVar7 >> 3) & 7;
          uVar14 = uVar14 + 1;
          *(byte *)(lVar15 + uVar12) =
               *(byte *)(lVar15 + uVar12) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
          lVar15 = param_1 + ((ulonglong)(uVar7 >> 6) + 0x50) * 8;
          uVar12 = (ulonglong)(uVar7 >> 3) & 7;
          *(byte *)(lVar15 + uVar12) =
               *(byte *)(lVar15 + uVar12) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
        } while (uVar14 < *(uint *)(param_1 + 0x30));
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x34));
  }
  return;
}

