/*
 * FUN_1800a1190 at 1800a1190
 * undefined1 __fastcall FUN_1800a1190(longlong param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 1800a1190-1800a18d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800a1190(longlong param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 uVar17;
  undefined *puVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong local_res8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8 [13];
  
  uVar15 = param_3 * *(int *)(param_1 + 0x3c) + param_2;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
LAB_1800a1692:
    uVar17 = 0;
    if (((*(int *)(param_1 + 0x2c) != 0) ||
        ((*(byte *)(param_1 + 0x270 + (ulonglong)(uVar15 >> 6) * 8 +
                   ((longlong)(ulonglong)(uVar15 & 0x3f) >> 3)) >> ((ulonglong)(uVar15 & 0x3f) & 7)
         & 1) == 0)) || (*(longlong *)(param_1 + 0x1c8) == 0)) goto LAB_1800a1721;
    bVar2 = (byte)param_2 & 0x1f;
    bVar3 = (byte)param_2 & 0x1f;
    uVar6 = 1;
    if (*(uint *)(param_1 + 0x28) >> bVar3 != 0) {
      uVar6 = *(uint *)(param_1 + 0x28) >> bVar3;
    }
    uVar7 = 1;
    if (*(uint *)(param_1 + 0x24) >> bVar2 != 0) {
      uVar7 = *(uint *)(param_1 + 0x24) >> bVar2;
    }
    FUN_1800a0aa4(param_1,param_2,param_3,0.0,0.0,(float)(int)uVar7,(float)(int)uVar6,0);
  }
  else {
    lVar19 = (ulonglong)uVar15 * 0x20;
    BVar5 = IsRectEmpty((RECT *)(*(longlong *)(param_1 + 0x1c8) + 0x10 + lVar19));
    if (BVar5 != 0) goto LAB_1800a1692;
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    fVar20 = (float)*(int *)(lVar19 + 0x10 + lVar1);
    fVar21 = (float)*(int *)(lVar19 + 0x14 + lVar1);
    fVar22 = (float)*(int *)(lVar19 + 0x18 + lVar1);
    fVar23 = (float)*(int *)(lVar19 + 0x1c + lVar1);
    if (*(int *)(param_1 + 0x44) - 3U < 3) {
      local_res8 = *(longlong *)(param_1 + 0x7c);
      if (local_res8 == 0) {
        local_res8 = *(longlong *)(param_1 + 0x74);
      }
      uVar14 = *(undefined4 *)(param_1 + 0xa8);
      plVar8 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1940),&local_c8,
                             *(uint *)(param_1 + 0x94),uVar15);
      plVar9 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_c0,
                             *(uint *)(param_1 + 0x220),0);
      plVar10 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_b8,
                              *(uint *)(param_1 + 0x1d0),0);
      FUN_180097a94(*(longlong *)(param_1 + 0x130),*(uint *)(param_1 + 0x2c),
                    *(uint *)(param_1 + 0x2c),param_2,uVar15,param_2,param_3,uVar15,
                    *(float *)(param_1 + 0x244) * fVar20,*(float *)(param_1 + 0x248) * fVar21,
                    *(float *)(param_1 + 0x244) * fVar22,*(float *)(param_1 + 0x248) * fVar23,fVar20
                    ,fVar21,fVar22,fVar23,0,0,*(undefined8 *)(param_1 + 0x1b8),
                    *(undefined8 *)(param_1 + 0x208),local_res8,(undefined8 *)&DAT_1800fe8e0,
                    (undefined8 *)&DAT_1800fe8e0,plVar10,plVar9,plVar8,0,0,uVar14,'\0',0x17,1);
      puVar18 = &DAT_1800fec18;
      if ((((&DAT_1800fec18)[*(uint *)(param_1 + 0x2c)] != '\0') &&
          (uVar11 = FUN_18009f438(param_1), puVar18[uVar11 & 0xffffffff] != '\0')) &&
         (*(char *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + 0x6e9 +
                   *(longlong *)(param_1 + 0x50)) != '\0')) {
        local_c8 = *(longlong *)(param_1 + 0x7c);
        iVar13 = (*(int *)(param_1 + 0x34) + param_3) * *(int *)(param_1 + 0x3c) + param_2;
        if (local_c8 == 0) {
          local_c8 = *(longlong *)(param_1 + 0x74);
        }
        uVar14 = *(undefined4 *)(param_1 + 0xa8);
        plVar8 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1940),&local_b8,
                               *(uint *)(param_1 + 0x94),uVar15);
        plVar9 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_c0,
                               *(uint *)(param_1 + 0x220),1);
        plVar10 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_b0,
                                *(uint *)(param_1 + 0x1d0),1);
        FUN_180097a94(*(longlong *)(param_1 + 0x130),*(uint *)(param_1 + 0x2c),
                      *(uint *)(param_1 + 0x2c),param_2,iVar13,param_2,param_3,iVar13,
                      *(float *)(param_1 + 0x244) * fVar20,*(float *)(param_1 + 0x248) * fVar21,
                      *(float *)(param_1 + 0x244) * fVar22,*(float *)(param_1 + 0x248) * fVar23,
                      fVar20,fVar21,fVar22,fVar23,0,0,*(undefined8 *)(param_1 + 0x1b8),
                      *(undefined8 *)(param_1 + 0x208),local_c8,(undefined8 *)&DAT_1800fe8e0,
                      (undefined8 *)&DAT_1800fe8e0,plVar10,plVar9,plVar8,0,0,uVar14,'\0',0x27,1);
      }
      uVar11 = (ulonglong)(uVar15 & 0x3f);
      pbVar4 = (byte *)(param_1 + 0x250 + (ulonglong)(uVar15 >> 6) * 8 + ((longlong)uVar11 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar11 & 7));
      pbVar4 = (byte *)(param_1 + 0x280 + (ulonglong)(uVar15 >> 6) * 8 + ((longlong)uVar11 >> 3));
      *pbVar4 = *pbVar4 | '\x01' << (uVar11 & 7);
    }
    else {
      FUN_1800a0aa4(param_1,param_2,param_3,fVar20,fVar21,fVar22,fVar23,0);
    }
    SetRectEmpty((LPRECT)(*(longlong *)(param_1 + 0x1c8) + 0x10 + lVar19));
  }
  uVar17 = 1;
LAB_1800a1721:
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (*(longlong *)(param_1 + 0x7c) != 0) {
      if (param_4 == 2) {
        if (*(longlong *)(param_1 + 0x208) == 0) {
          return uVar17;
        }
        bVar2 = *(byte *)(param_1 + 0x280 + (ulonglong)(uVar15 >> 6) * 8 +
                         ((longlong)(ulonglong)(uVar15 & 0x3f) >> 3)) >>
                ((ulonglong)(uVar15 & 0x3f) & 7);
      }
      else {
        if (param_4 != 1) {
          return uVar17;
        }
        if (*(longlong *)(param_1 + 0x154) == 0) {
          return uVar17;
        }
        bVar2 = *(byte *)(param_1 + 0x250 + (ulonglong)(uVar15 >> 6) * 8 +
                         ((longlong)(ulonglong)(uVar15 & 0x3f) >> 3)) >>
                ((ulonglong)(uVar15 & 0x3f) & 7);
      }
      if ((bVar2 & 1) == 0) {
        FUN_1800a0228(param_1,param_2,param_3,param_4);
      }
    }
  }
  else if ((param_4 == 1) && (uVar11 = *(ulonglong *)(param_1 + 0x7c), uVar11 != 0)) {
    uVar16 = (ulonglong)(uVar15 & 0x3f);
    if ((*(byte *)(param_1 + 0x250 + (ulonglong)(uVar15 >> 6) * 8 + ((longlong)uVar16 >> 3)) >>
         (uVar16 & 7) & 1) == 0) {
      if (*(char *)(param_1 + 0x24c) == '\0') {
        puVar12 = FUN_1800ac794(param_1,local_a8);
        uVar14 = *(undefined4 *)((longlong)puVar12 + 4);
      }
      else {
        lVar19 = 0x54;
        if (*(int *)(param_1 + 0x2c) != 0x15) {
          lVar19 = 0x44;
        }
        uVar14 = *(undefined4 *)(lVar19 + *(longlong *)(param_1 + 0x130));
      }
      FUN_180097cd8(*(longlong *)(param_1 + 0x130),param_1 + 0x60,(uint *)(param_1 + 0x60),uVar11,
                    *(ulonglong *)(param_1 + 0x74),0,0,uVar15,0,0,uVar15,0,0,uVar14,0,0,
                    (int *)(*(longlong *)(param_1 + 0x84) + 0x10 + (ulonglong)uVar15 * 0x20),
                    *(uint *)(param_1 + 0x1a0),1,'\x01','\0');
      pbVar4 = (byte *)(param_1 + 0x250 + (ulonglong)(uVar15 >> 6) * 8 + ((longlong)uVar16 >> 3));
      *pbVar4 = *pbVar4 | '\x01' << (uVar16 & 7);
    }
  }
  return uVar17;
}

