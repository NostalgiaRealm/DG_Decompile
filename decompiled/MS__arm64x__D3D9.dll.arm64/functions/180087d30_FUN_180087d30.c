/*
 * FUN_180087d30 at 180087d30
 * undefined FUN_180087d30(void)
 * Address ranges: 180087d30-1800883cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180087d30(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  undefined1 auStack_80 [16];
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    FUN_180083d70(param_1,param_2,param_3);
  }
  else {
    uVar6 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
    uVar17 = (ulonglong)uVar6;
    if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (iVar7 = (*__imp_USER32_dll_IsRectEmpty)
                          (*(longlong *)(param_1 + 0x1b0) + uVar17 * 0x28 + 0x18), iVar7 == 0)) {
      lVar11 = *(longlong *)(param_1 + 0x1b0) + uVar17 * 0x28;
      iVar7 = *(int *)(lVar11 + 0x18);
      iVar2 = *(int *)(lVar11 + 0x1c);
      iVar1 = *(int *)(lVar11 + 0x20);
      iVar3 = *(int *)(lVar11 + 0x24);
      cVar5 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x84);
      uVar16 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      uVar18 = (ulonglong)uVar16;
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_180082250(*(longlong *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
      }
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x2c);
      if (*(char *)(param_1 + 0x248) == '\0') {
        uVar13 = *(uint *)(&DAT_180231770 + uVar9 * 4);
      }
      else {
        uVar13 = 1;
      }
      uVar4 = 0xf8000400;
      if ((&DAT_180231518)[uVar9] != '\0') {
        uVar4 = 0xf8000000;
      }
      uVar10 = 0x18;
      if (cVar5 == '\0') {
        uVar10 = 0;
      }
      lVar11 = *(longlong *)(param_1 + 0x1a0);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(param_1 + 0x198);
      }
      FUN_1800825d8(*(float *)(param_1 + 0x240) * (float)iVar7,
                    *(float *)(param_1 + 0x244) * (float)iVar2,
                    *(float *)(param_1 + 0x240) * (float)iVar1,
                    *(float *)(param_1 + 0x244) * (float)iVar3,(float)iVar7,(float)iVar2,
                    (float)iVar1,(float)iVar3,*(undefined8 *)(param_1 + 0x110),uVar9,uVar9,param_2,
                    param_3,param_2,param_3,*(undefined8 *)(param_1 + 0x78),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar18 * 0x28),0,lVar11,
                    *(undefined8 *)(param_1 + 0x1a8),0,0,0,cVar5,
                    *(uint *)(&DAT_180231550 + uVar9 * 4) & 0xf | (uVar4 | uVar10 | uVar13 & 7) << 4
                    ,1);
      lVar11 = param_1 + (ulonglong)(uVar16 >> 6) * 8;
      uVar9 = (ulonglong)(uVar16 >> 3) & 7;
      *(byte *)(lVar11 + 0x270 + uVar9) =
           *(byte *)(lVar11 + 0x270 + uVar9) & ((byte)(1 << (uVar18 & 7)) ^ 0xff);
      uVar9 = (ulonglong)(uVar16 >> 3) & 7;
      *(byte *)(lVar11 + 0x250 + uVar9) =
           *(byte *)(lVar11 + 0x250 + uVar9) & ((byte)(1 << (uVar18 & 7)) ^ 0xff);
      uVar9 = (ulonglong)(uVar16 >> 3) & 7;
      *(byte *)(lVar11 + 0xf0 + uVar9) =
           *(byte *)(lVar11 + 0xf0 + uVar9) | (byte)(1 << (uVar18 & 7));
      uVar9 = (ulonglong)(uVar16 >> 3) & 7;
      *(byte *)(lVar11 + 0x260 + uVar9) =
           *(byte *)(lVar11 + 0x260 + uVar9) & ((byte)(1 << (uVar18 & 7)) ^ 0xff);
      (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x1b0) + uVar18 * 0x28 + 0x18);
    }
    iVar7 = (*__imp_USER32_dll_IsRectEmpty)(*(longlong *)(param_1 + 0x90) + uVar17 * 0x28 + 0x18);
    if (iVar7 == 0) {
      if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
        FUN_1800e5470(*(undefined8 *)(param_1 + 0x50),extraout_x1,param_1);
        lVar11 = *(longlong *)(param_1 + 0x1f0) + uVar17 * 0x28;
        (*__imp_USER32_dll_UnionRect)
                  (lVar11 + 0x18,lVar11 + 0x18,*(longlong *)(param_1 + 0x90) + uVar17 * 0x28 + 0x18)
        ;
        if (*(int *)(param_1 + 0x44) - 3U < 3) {
          iVar7 = *(int *)(param_1 + 0x178);
          if (iVar7 == 1) {
            uVar14 = 0xf;
          }
          else if (iVar7 == 2) {
            uVar14 = 0x10;
          }
          else if (iVar7 == 4) {
            uVar14 = 0x11;
          }
          else if (iVar7 == 8) {
            uVar14 = 0x12;
          }
          else if (iVar7 == 0x10) {
            uVar14 = 0x13;
          }
          else {
            uVar14 = 0xffffffff;
          }
          lVar11 = *(longlong *)(param_1 + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(param_1 + 0x78);
          }
          FUN_1800825d8(0,0,(float)*(uint *)(param_1 + 0x24),(float)*(uint *)(param_1 + 0x28),0,0,
                        (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),
                        *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                        *(undefined4 *)(param_1 + 0x2c),param_2,param_3,param_2,param_3,0,0,0,lVar11
                        ,*(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_1 + 0x1d8),
                        *(undefined8 *)
                         (*(longlong *)(param_1 + 0x1f0) +
                          (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x28 + 8),0,
                        uVar14,1);
          plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
          (**(code **)(*plVar8 + 0x178))
                    (plVar8,*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1d8));
        }
        else {
          if (*(longlong *)(param_1 + 0x80) != 0) {
            plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
            lVar11 = 0x44;
            if (*(int *)(param_1 + 0x2c) == 0x15) {
              lVar11 = 0x54;
            }
            (**(code **)(*plVar8 + 0x1c8))
                      (plVar8,*(undefined8 *)(param_1 + 0x78),uVar17,*(longlong *)(param_1 + 0x80),
                       uVar17,*(undefined4 *)(*(longlong *)(param_1 + 8) + lVar11));
          }
          lVar11 = param_1 + ((ulonglong)(uVar6 >> 6) + 0x4a) * 8;
          uVar18 = (ulonglong)(uVar6 >> 3) & 7;
          *(byte *)(lVar11 + uVar18) = *(byte *)(lVar11 + uVar18) | (byte)(1 << (uVar17 & 7));
          uVar18 = (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3);
          if (*(int *)(param_1 + 0x2c) == 0) {
            FUN_180082250(*(undefined8 *)(param_1 + 0x110),2,*(undefined8 *)(param_1 + 0x10));
          }
          uVar13 = *(uint *)(param_1 + 0x2c);
          uVar16 = 0x16;
          if (uVar13 != 0) {
            if (*(char *)(param_1 + 0x248) == '\0') {
              uVar16 = *(uint *)(&DAT_180231550 + (ulonglong)uVar13 * 4);
            }
            else {
              uVar16 = 6;
            }
            uVar16 = uVar16 & 0xf |
                     (*(uint *)(&DAT_180231770 + (ulonglong)uVar13 * 4) & 7 | 0xf8000020) << 4;
          }
          lVar11 = *(longlong *)(param_1 + 0x140);
          if (lVar11 == 0) {
            lVar11 = FUN_180086520(param_1,0);
          }
          fVar19 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
          if (*(longlong *)(param_1 + 0x1d8) == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + uVar18 * 0x28);
          }
          lVar12 = *(longlong *)(param_1 + 0x80);
          if (lVar12 == 0) {
            lVar12 = *(longlong *)(param_1 + 0x78);
          }
          FUN_1800825d8(0,0,(float)*(uint *)(param_1 + 0x24) / fVar19,
                        (float)*(uint *)(param_1 + 0x28) / fVar19,0,0,
                        (float)*(uint *)(param_1 + 0x170) / fVar19,
                        (float)*(uint *)(param_1 + 0x174) / fVar19,*(undefined8 *)(param_1 + 0x110),
                        *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,
                        param_3,param_2,param_3,*(undefined8 *)(param_1 + 0x198),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + uVar18 * 0x28),uVar15,
                        lVar12,lVar11,0,0,0,0,uVar16,1);
        }
        FUN_180083b10(param_1,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x198),
                      param_2,param_3,*(longlong *)(param_1 + 0x1f0) + uVar17 * 0x28 + 0x18);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0x50) + 0x620);
      }
      (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x90) + uVar17 * 0x28 + 0x18);
      uVar18 = (ulonglong)(uVar6 >> 6);
    }
    else {
      uVar18 = (ulonglong)(uVar6 >> 6);
      if ((*(byte *)(param_1 + (uVar18 + 0x4c) * 8 + ((ulonglong)(uVar6 >> 3) & 7)) >> (uVar17 & 7)
          & 1) == 0) {
        uVar16 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
        uVar13 = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
        if (uVar16 == 0) {
          uVar16 = 1;
        }
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        (*__imp_USER32_dll_SetRect)(auStack_80,0,0,uVar13,uVar16);
        if (*(longlong *)(param_1 + 0x198) != 0) {
          FUN_180083b10(param_1,*(undefined8 *)(param_1 + 0x1d8),*(longlong *)(param_1 + 0x198),
                        param_2,param_3,auStack_80);
        }
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          FUN_180083b10(param_1,*(longlong *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x198),
                        param_2,param_3,*(longlong *)(param_1 + 0x1f0) + uVar17 * 0x28 + 0x18);
        }
      }
    }
    uVar9 = (ulonglong)(uVar6 >> 3) & 7;
    lVar11 = param_1 + uVar18 * 8 + 0x260;
    *(byte *)(lVar11 + uVar9) = *(byte *)(lVar11 + uVar9) | (byte)(1 << (uVar17 & 7));
  }
  return;
}

