/*
 * FUN_18009f474 at 18009f474
 * undefined __fastcall FUN_18009f474(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 18009f474-18009fb5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009f474(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  longlong local_res20;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98 [4];
  
  uVar12 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      uVar15 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        do {
          uVar14 = 1;
          bVar3 = (byte)uVar15 & 0x1f;
          uVar5 = uVar14;
          if (*(uint *)(param_1 + 0x24) >> bVar3 != 0) {
            uVar5 = *(uint *)(param_1 + 0x24) >> bVar3;
          }
          bVar3 = (byte)uVar15 & 0x1f;
          uVar6 = uVar14;
          if (*(uint *)(param_1 + 0x28) >> bVar3 != 0) {
            uVar6 = *(uint *)(param_1 + 0x28) >> bVar3;
          }
          uVar13 = uVar12 * *(int *)(param_1 + 0x3c) + uVar15;
          if (*(int *)(param_1 + 0x44) - 3U < 3) {
            lVar19 = *(longlong *)(param_3 + 0x1c);
            if (lVar19 == 0) {
              lVar19 = *(longlong *)(param_3 + 0x14);
            }
            uVar21 = *(undefined4 *)(param_3 + 0x48);
            plVar7 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1940),&local_b0,
                                   *(uint *)(param_3 + 0x34),uVar13);
            plVar8 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_a8,
                                   *(uint *)(param_2 + 0x2c),0);
            fVar17 = (float)(int)uVar6;
            fVar16 = (float)(int)uVar5;
            FUN_180097a94(*(longlong *)(param_1 + 0x130),*(uint *)(param_1 + 0x2c),
                          *(uint *)(param_1 + 0x2c),uVar15,uVar13,uVar15,uVar12,uVar13,
                          *(float *)(param_1 + 0x244) * 0.0,*(float *)(param_1 + 0x248) * 0.0,
                          *(float *)(param_1 + 0x244) * fVar16,*(float *)(param_1 + 0x248) * fVar17,
                          0,0,fVar16,fVar17,0,0,*(undefined8 *)(param_2 + 0x14),0,lVar19,
                          (undefined8 *)&DAT_1800fe8e0,(undefined8 *)&DAT_1800fe8e0,plVar8,
                          (undefined8 *)&DAT_1800fe8e0,plVar7,0,0,uVar21,'\0',0xf,1);
            uVar10 = *(uint *)(param_1 + 0x2c);
            if ((((&DAT_1800fec18)[uVar10] != '\0') &&
                (uVar9 = FUN_18009f438(param_1), (&DAT_1800fec18)[uVar9 & 0xffffffff] != '\0')) &&
               (*(char *)(*(longlong *)(param_1 + 0x50) + 0x6e9 +
                         (ulonglong)*(uint *)(param_1 + 0x20) * 0x20) != '\0')) {
              lVar19 = *(longlong *)(param_3 + 0x1c);
              iVar11 = (*(int *)(param_1 + 0x34) + uVar12) * *(int *)(param_1 + 0x3c);
              if (lVar19 == 0) {
                lVar19 = *(longlong *)(param_3 + 0x14);
              }
              fVar1 = *(float *)(param_1 + 0x248);
              fVar2 = *(float *)(param_1 + 0x244);
              uVar22 = *(undefined4 *)(param_3 + 0x48);
              plVar20 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1940),
                                      &local_a0,*(uint *)(param_3 + 0x34),uVar13);
              plVar7 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),local_98,
                                     *(uint *)(param_2 + 0x2c),1);
              uVar14 = 0x22;
              uVar21 = 0;
              plVar8 = (longlong *)&DAT_1800fe8e0;
              uVar18 = *(undefined8 *)(param_2 + 0x14);
              local_res20 = 0;
              fVar17 = fVar1 * fVar17;
              fVar16 = fVar2 * fVar16;
              goto LAB_18009fac3;
            }
          }
          else {
            if (*(int *)(param_1 + 0x2c) == 0) {
              FUN_1800976c4(*(longlong *)(param_1 + 0x130),1,*(longlong *)(param_1 + 0x10));
            }
            uVar10 = *(uint *)(param_1 + 0x2c);
            if (*(char *)(param_1 + 0x24c) == '\0') {
              uVar14 = *(uint *)(&DAT_1800feb70 + (ulonglong)uVar10 * 4);
            }
            uVar14 = (-(uint)(*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84) !=
                             '\0') & 0x1000 | uVar14 & 7 | 0xf8000000) << 4 |
                     *(uint *)(&DAT_1800ff0e0 + (ulonglong)uVar10 * 4) & 0xf;
            local_res20 = *(longlong *)(param_3 + 0x1c);
            if (local_res20 == 0) {
              local_res20 = *(longlong *)(param_3 + 0x14);
            }
            fVar1 = *(float *)(param_1 + 0x248);
            iVar11 = uVar12 * *(int *)(param_1 + 0x3c);
            fVar2 = *(float *)(param_1 + 0x244);
            uVar21 = *(undefined4 *)(param_3 + 0x48);
            plVar7 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_c0,
                                   *(uint *)(param_2 + 0x2c),0);
            plVar8 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1938),&local_b8,
                                   *(uint *)(param_3 + 0x30),uVar13);
            uVar22 = 0;
            plVar20 = (longlong *)&DAT_1800fe8e0;
            uVar18 = *(undefined8 *)(param_2 + 0x14);
            lVar19 = 0;
            fVar17 = fVar1 * (float)(int)uVar6;
            fVar16 = fVar2 * (float)(int)uVar5;
LAB_18009fac3:
            FUN_180097a94(*(longlong *)(param_1 + 0x130),uVar10,uVar10,uVar15,iVar11 + uVar15,uVar15
                          ,uVar12,iVar11 + uVar15,fVar2 * 0.0,fVar1 * 0.0,fVar16,fVar17,0,0,
                          (float)(int)uVar5,(float)(int)uVar6,local_res20,0,uVar18,0,lVar19,plVar8,
                          (undefined8 *)&DAT_1800fe8e0,plVar7,(undefined8 *)&DAT_1800fe8e0,plVar20,
                          uVar21,0,uVar22,'\0',uVar14,1);
          }
          uVar15 = uVar15 + 1;
          uVar9 = (ulonglong)(uVar13 & 0x3f);
          pbVar4 = (byte *)(param_1 + 0x250 + (ulonglong)(uVar13 >> 6) * 8 + ((longlong)uVar9 >> 3))
          ;
          *pbVar4 = *pbVar4 & ~('\x01' << (uVar9 & 7));
          pbVar4 = (byte *)(param_1 + 0x280 + (ulonglong)(uVar13 >> 6) * 8 + ((longlong)uVar9 >> 3))
          ;
          *pbVar4 = *pbVar4 & ~('\x01' << (uVar9 & 7));
        } while (uVar15 < *(uint *)(param_1 + 0x30));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0x34));
  }
  return;
}

