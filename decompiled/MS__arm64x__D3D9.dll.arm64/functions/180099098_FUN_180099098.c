/*
 * FUN_180099098 at 180099098
 * undefined FUN_180099098(void)
 * Address ranges: 180099098-18009947f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099098(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  iVar8 = func_0x000180222c00(lVar2,*(undefined8 *)(lVar3 + 0x10),0x400);
  if (iVar8 != 0) {
    if ((*(int *)(lVar3 + 0x2c) == 0) && (*(char *)(lVar3 + 0x24d) != '\0')) {
      if ((*(longlong *)(lVar3 + 0x1b8) == 0) || (*(longlong *)(lVar3 + 0x208) == 0)) {
        FUN_1800961f0(lVar3);
      }
      if (*(int *)(lVar3 + 0x34) != 0) {
        uVar15 = 0;
        do {
          uVar17 = 0;
          if (*(int *)(lVar3 + 0x30) != 0) {
            do {
              uVar7 = uVar17 + *(int *)(lVar3 + 0x3c) * uVar15;
              uVar16 = (ulonglong)uVar7;
              uVar13 = uVar16 << 5;
              iVar8 = (*__imp_USER32_dll_IsRectEmpty)(*(longlong *)(lVar3 + 0x84) + (uVar13 | 0x10))
              ;
              if (iVar8 == 0) {
                iVar8 = uVar17 + *(int *)(lVar3 + 0x3c) * uVar15;
                if (*(int *)(lVar3 + 0x2c) == 0) {
                  FUN_18008db78(*(undefined8 *)(lVar3 + 0x130),2,*(undefined8 *)(lVar3 + 0x10));
                }
                uVar4 = *(uint *)(lVar3 + 0x2c);
                uVar18 = 0x16;
                if (uVar4 != 0) {
                  if (*(char *)(lVar3 + 0x24c) == '\0') {
                    uVar18 = *(uint *)(&DAT_180231550 + (ulonglong)uVar4 * 4);
                  }
                  else {
                    uVar18 = 6;
                  }
                  uVar18 = uVar18 & 0xf |
                           (*(uint *)(&DAT_180231770 + (ulonglong)uVar4 * 4) & 7 | 0xf8000020) << 4;
                }
                uVar9 = FUN_1800987e0(lVar3,0,0);
                uVar5 = *(undefined4 *)(lVar3 + 0x23c);
                fVar19 = (float)(uint)(1 << (ulonglong)(uVar17 & 0x1f));
                uVar6 = *(undefined4 *)(lVar3 + 0x1ec);
                uVar10 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 0x1930),
                                       auStack_78,uVar9,0);
                uVar11 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 0x1938),
                                       auStack_70,*(undefined4 *)(lVar3 + 0x224),iVar8);
                uVar12 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 0x1938),
                                       auStack_68,*(undefined4 *)(lVar3 + 0x1d4),iVar8);
                FUN_18008e010(0,0,(float)*(uint *)(lVar3 + 0x24) / fVar19,
                              (float)*(uint *)(lVar3 + 0x28) / fVar19,0,0,
                              (float)*(uint *)(lVar3 + 0x198) / fVar19,
                              (float)*(uint *)(lVar3 + 0x19c) / fVar19,
                              *(undefined8 *)(lVar3 + 0x130),*(undefined4 *)(lVar3 + 0x2c),
                              *(undefined4 *)(lVar3 + 0x2c),uVar17,iVar8,uVar17,uVar15,iVar8,
                              *(undefined8 *)(lVar3 + 0x1b8),*(undefined8 *)(lVar3 + 0x208),
                              *(undefined8 *)(lVar3 + 0x74),0,0,uVar12,uVar11,uVar10,&DAT_180231350,
                              &DAT_180231350,uVar6,uVar5,0,0,uVar18,1);
                (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(lVar3 + 0x84) + (uVar13 | 0x10));
                uVar18 = *(uint *)(lVar3 + 0x28) >> (ulonglong)(uVar17 & 0x1f);
                uVar4 = *(uint *)(lVar3 + 0x24) >> (ulonglong)(uVar17 & 0x1f);
                if (uVar18 == 0) {
                  uVar18 = 1;
                }
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                (*__imp_USER32_dll_SetRect)(auStack_88,0,0,uVar4,uVar18);
                (*__imp_USER32_dll_UnionRect)
                          (*(longlong *)(lVar3 + 0x1c8) + (uVar13 | 0x10),
                           *(longlong *)(lVar3 + 0x1c8) + (uVar13 | 0x10),auStack_88);
                (*__imp_USER32_dll_UnionRect)
                          (*(longlong *)(lVar3 + 0x218) + (uVar13 | 0x10),
                           *(longlong *)(lVar3 + 0x218) + (uVar13 | 0x10),auStack_88);
                uVar13 = (ulonglong)(uVar7 >> 6);
                uVar14 = (ulonglong)(uVar7 >> 3) & 7;
                lVar1 = lVar3 + 0x250 + uVar13 * 8;
                *(byte *)(lVar1 + uVar14) =
                     *(byte *)(lVar1 + uVar14) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
                uVar14 = (ulonglong)(uVar7 >> 3) & 7;
                lVar1 = lVar3 + 0x280 + uVar13 * 8;
                *(byte *)(lVar1 + uVar14) =
                     *(byte *)(lVar1 + uVar14) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
                uVar14 = (ulonglong)(uVar7 >> 3) & 7;
                lVar1 = lVar3 + 0x260 + uVar13 * 8;
                *(byte *)(lVar1 + uVar14) =
                     *(byte *)(lVar1 + uVar14) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
              }
              else {
                uVar13 = (ulonglong)(uVar7 >> 6);
              }
              lVar1 = lVar3 + (uVar13 + 0x4e) * 8;
              uVar13 = (ulonglong)(uVar7 >> 3) & 7;
              uVar17 = uVar17 + 1;
              *(byte *)(lVar1 + uVar13) = *(byte *)(lVar1 + uVar13) | (byte)(1 << (uVar16 & 7));
            } while (uVar17 < *(uint *)(lVar3 + 0x30));
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(lVar3 + 0x34));
      }
    }
    if (lVar2 == 0) {
      func_0x000180222c50(*(undefined8 *)(lVar3 + 0x10),0,0x400);
    }
    else {
      thunk_FUN_180001218(*(undefined8 *)(lVar3 + 0x10),lVar2,0x400);
    }
    *(undefined1 *)(lVar3 + 0x191) = 1;
    FUN_180094100(lVar3,0,0);
  }
  return;
}

