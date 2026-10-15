/*
 * FUN_1800920b8 at 1800920b8
 * undefined1 __fastcall FUN_1800920b8(longlong param_1, longlong * param_2, int param_3, int param_4)
 * Address ranges: 1800920b8-1800925c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800920b8(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  RECT *pRVar1;
  longlong *plVar2;
  byte *pbVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined1 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_res10;
  undefined8 local_a8 [13];
  ulonglong uVar14;
  
  uVar9 = (uint)param_2;
  plVar12 = (longlong *)((ulonglong)param_2 & 0xffffffff);
  uVar20 = 0;
  local_res10 = 0;
  uVar13 = param_3 * *(int *)(param_1 + 0x3c) + uVar9;
  uVar14 = (ulonglong)uVar13;
  bVar7 = (byte)plVar12;
  if ((*(longlong *)(param_1 + 0xd0) == 0) ||
     (BVar4 = IsRectEmpty((RECT *)(*(longlong *)(param_1 + 0xd0) + 0x18 + uVar14 * 0x28)),
     BVar4 != 0)) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar5 = (ulonglong)(uVar13 & 0x3f);
      if (((*(byte *)(param_1 + 0x270 + (ulonglong)(uVar13 >> 6) * 8 + ((longlong)uVar5 >> 3)) >>
            (uVar5 & 7) & 1) == 0) &&
         (BVar4 = IsRectEmpty((RECT *)(*(longlong *)(param_1 + 0x1b0) + 0x18 + uVar14 * 0x28)),
         BVar4 != 0)) {
        uVar20 = 0;
      }
      else {
        if ((*(byte *)(param_1 + 0x270 + (ulonglong)(uVar13 >> 6) * 8 + ((longlong)uVar5 >> 3)) >>
             (uVar5 & 7) & 1) == 0) {
          lVar17 = *(longlong *)(param_1 + 0x1b0);
          iVar19 = *(int *)(lVar17 + 0x1c + uVar14 * 0x28);
          uVar10 = *(uint *)(lVar17 + 0x20 + uVar14 * 0x28);
          uVar16 = *(uint *)(lVar17 + 0x24 + uVar14 * 0x28);
          iVar18 = *(int *)(lVar17 + 0x18 + uVar14 * 0x28);
        }
        else {
          iVar19 = 0;
          uVar10 = 1;
          if (*(uint *)(param_1 + 0x24) >> (bVar7 & 0x1f) != 0) {
            uVar10 = *(uint *)(param_1 + 0x24) >> (bVar7 & 0x1f);
          }
          uVar16 = 1;
          iVar18 = iVar19;
          if (*(uint *)(param_1 + 0x28) >> (bVar7 & 0x1f) != 0) {
            uVar16 = *(uint *)(param_1 + 0x28) >> (bVar7 & 0x1f);
          }
        }
        FUN_180091c30(param_1,uVar9,param_3,(float)iVar18,(float)iVar19,(float)(int)uVar10,
                      (float)(int)uVar16,0);
        uVar20 = 1;
        param_2 = plVar12;
      }
    }
  }
  else {
    param_2 = *(longlong **)(param_1 + 0x198);
    if ((param_2 != (longlong *)0x0) &&
       (plVar2 = *(longlong **)(param_1 + 0xb8), plVar2 != (longlong *)0x0)) {
      lVar17 = *(longlong *)(param_1 + 0xd0);
      local_res10 = 1;
      pRVar1 = (RECT *)(lVar17 + 0x18 + uVar14 * 0x28);
      fVar21 = (float)pRVar1->left;
      fVar22 = (float)*(int *)(lVar17 + 0x1c + uVar14 * 0x28);
      fVar23 = (float)*(int *)(lVar17 + 0x20 + uVar14 * 0x28);
      fVar24 = (float)*(int *)(lVar17 + 0x24 + uVar14 * 0x28);
      if (*(int *)(param_1 + 0x44) - 3U < 3) {
        FUN_18008e9f0(param_1,param_2,plVar2,uVar13,0,pRVar1);
        lVar17 = *(longlong *)(param_1 + 0x80);
        if (lVar17 == 0) {
          lVar17 = *(longlong *)(param_1 + 0x78);
        }
        lVar8 = *(longlong *)(param_1 + 0x1a0);
        if (lVar8 == 0) {
          lVar8 = *(longlong *)(param_1 + 0x198);
        }
        FUN_18008d560(*(longlong *)(param_1 + 0x110),(ulonglong)*(uint *)(param_1 + 0x2c),
                      *(uint *)(param_1 + 0x2c),uVar9,param_3,uVar9,param_3,
                      *(float *)(param_1 + 0x240) * fVar21,*(float *)(param_1 + 0x244) * fVar22,
                      *(float *)(param_1 + 0x240) * fVar23,*(float *)(param_1 + 0x244) * fVar24,
                      fVar21,fVar22,fVar23,fVar24,0,0,0,lVar8,*(undefined8 *)(param_1 + 0x1a8),
                      *(undefined8 *)(param_1 + 0x1e8),lVar17,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8 + uVar14 * 0x28),'\0',0x17,1
                     );
        uVar15 = (ulonglong)(uVar13 >> 6);
        uVar5 = (ulonglong)(uVar13 & 0x3f);
        lVar17 = (longlong)uVar5 >> 3;
        pbVar3 = (byte *)(param_1 + 0x250 + uVar15 * 8 + lVar17);
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
        pbVar3 = (byte *)(param_1 + 0x280 + uVar15 * 8 + lVar17);
        *pbVar3 = *pbVar3 | '\x01' << (uVar5 & 7);
        pbVar3 = (byte *)(param_1 + 0xf0 + uVar15 * 8 + lVar17);
        *pbVar3 = *pbVar3 | '\x01' << (uVar5 & 7);
        uVar10 = 0 >> (bVar7 & 0x1f);
        param_2 = (longlong *)(ulonglong)uVar10;
        SetRect((LPRECT)(*(longlong *)(param_1 + 0x90) + 0x18 + uVar14 * 0x28),uVar10,0,
                *(uint *)(param_1 + 0x24) >> (bVar7 & 0x1f),
                *(uint *)(param_1 + 0x28) >> (bVar7 & 0x1f));
      }
      else {
        FUN_18008e9f0(param_1,param_2,plVar2,uVar9,param_3,pRVar1);
        FUN_180091c30(param_1,uVar9,param_3,fVar21,fVar22,fVar23,fVar24,0);
        param_2 = plVar12;
      }
    }
    SetRectEmpty((LPRECT)(*(longlong *)(param_1 + 0xd0) + 0x18 + uVar14 * 0x28));
    uVar20 = local_res10;
  }
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (param_4 == 2) {
        if (*(longlong *)(param_1 + 0x1e8) == 0) {
          return uVar20;
        }
        bVar7 = *(byte *)(param_1 + 0x280 + (ulonglong)(uVar13 >> 6) * 8 +
                         ((longlong)(ulonglong)(uVar13 & 0x3f) >> 3)) >>
                ((ulonglong)(uVar13 & 0x3f) & 7);
      }
      else {
        if (param_4 != 1) {
          return uVar20;
        }
        if (*(longlong *)(param_1 + 0x140) == 0) {
          return uVar20;
        }
        bVar7 = *(byte *)(param_1 + 0x250 + (ulonglong)(uVar13 >> 6) * 8 +
                         ((longlong)(ulonglong)(uVar13 & 0x3f) >> 3)) >>
                ((ulonglong)(uVar13 & 0x3f) & 7);
      }
      if ((bVar7 & 1) == 0) {
        FUN_180091978(param_1,uVar9,param_3,param_4);
      }
    }
  }
  else if ((param_4 == 1) && (*(longlong *)(param_1 + 0x80) != 0)) {
    uVar14 = (ulonglong)(uVar13 & 0x3f);
    if ((*(byte *)(param_1 + 0x250 + (ulonglong)(uVar13 >> 6) * 8 + ((longlong)uVar14 >> 3)) >>
         (uVar14 & 7) & 1) == 0) {
      FUN_1800dfe48(*(longlong *)(param_1 + 0x50),param_2,param_1);
      if (*(char *)(param_1 + 0x248) == '\0') {
        puVar6 = FUN_1800ac794(param_1,local_a8);
        uVar11 = *(undefined4 *)((longlong)puVar6 + 4);
      }
      else {
        uVar9 = 0x54;
        if (*(int *)(param_1 + 0x2c) != 0x15) {
          uVar9 = 0x44;
        }
        uVar11 = *(undefined4 *)((ulonglong)uVar9 + *(longlong *)(param_1 + 8));
      }
      plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      (**(code **)(*plVar12 + 0x1c8))
                (plVar12,*(undefined8 *)(param_1 + 0x78),uVar13,*(undefined8 *)(param_1 + 0x80),
                 uVar13,uVar11);
      pbVar3 = (byte *)(param_1 + 0x250 + (ulonglong)(uVar13 >> 6) * 8 + ((longlong)uVar14 >> 3));
      *pbVar3 = *pbVar3 | '\x01' << (uVar14 & 7);
      LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x50) + 0x620));
    }
  }
  return uVar20;
}

