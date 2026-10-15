/*
 * FUN_1801b0418 at 1801b0418
 * undefined FUN_1801b0418(void)
 * Address ranges: 1801b0418-1801b079f;1801b07a4-1801b07e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b0418(longlong *param_1)

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
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  iVar8 = FUN_180222c00(lVar2,*(undefined8 *)(lVar3 + 0x10),0x400);
  if (iVar8 != 0) {
    if ((*(int *)(lVar3 + 0x2c) == 0) && (*(char *)(lVar3 + 0x24d) != '\0')) {
      if ((*(longlong *)(lVar3 + 0x1b8) == 0) || (*(longlong *)(lVar3 + 0x208) == 0)) {
        FUN_1801ad4b8(lVar3);
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
              iVar8 = thunk_FUN_180223d24(*(longlong *)(lVar3 + 0x84) + (uVar13 | 0x10));
              if (iVar8 == 0) {
                iVar8 = uVar17 + *(int *)(lVar3 + 0x3c) * uVar15;
                if (*(int *)(lVar3 + 0x2c) == 0) {
                  FUN_1801a4380(*(undefined8 *)(lVar3 + 0x130),2,*(undefined8 *)(lVar3 + 0x10));
                }
                uVar4 = *(uint *)(lVar3 + 0x2c);
                uVar18 = 0x16;
                if (uVar4 != 0) {
                  if (*(char *)(lVar3 + 0x24c) == '\0') {
                    uVar18 = *(uint *)(&DAT_18022da80 + (ulonglong)uVar4 * 4);
                  }
                  else {
                    uVar18 = 6;
                  }
                  uVar18 = uVar18 & 0xf |
                           (*(uint *)(&DAT_18022dca0 + (ulonglong)uVar4 * 4) & 7 | 0xf8000020) << 4;
                }
                uVar9 = FUN_1801afae0(lVar3,0,0);
                fVar19 = (float)(uint)(1 << (ulonglong)(uVar17 & 0x1f));
                uVar5 = *(undefined4 *)(lVar3 + 0x23c);
                uVar6 = *(undefined4 *)(lVar3 + 0x1ec);
                uVar10 = FUN_18020d168(*(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 0x1930),
                                       auStack_60,uVar9,0);
                uVar11 = FUN_18020d168(*(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 0x1938),
                                       auStack_58,*(undefined4 *)(lVar3 + 0x224),iVar8);
                uVar12 = FUN_18020d168(*(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 0x1938),
                                       auStack_50,*(undefined4 *)(lVar3 + 0x1d4),iVar8);
                FUN_1801a4848(0,0,(float)*(uint *)(lVar3 + 0x24) / fVar19,
                              (float)*(uint *)(lVar3 + 0x28) / fVar19,0,0,
                              (float)*(uint *)(lVar3 + 0x198) / fVar19,
                              (float)*(uint *)(lVar3 + 0x19c) / fVar19,
                              *(undefined8 *)(lVar3 + 0x130),*(undefined4 *)(lVar3 + 0x2c),
                              *(undefined4 *)(lVar3 + 0x2c),uVar17,iVar8,uVar17,uVar15,iVar8,
                              *(undefined8 *)(lVar3 + 0x1b8),*(undefined8 *)(lVar3 + 0x208),
                              *(undefined8 *)(lVar3 + 0x74),0,0,uVar12,uVar11,uVar10,&DAT_18022cfd8,
                              &DAT_18022cfd8,uVar6,uVar5,0,0,uVar18,1);
                thunk_FUN_180223bf8(*(longlong *)(lVar3 + 0x84) + (uVar13 | 0x10));
                uVar18 = *(uint *)(lVar3 + 0x28) >> (ulonglong)(uVar17 & 0x1f);
                uVar4 = *(uint *)(lVar3 + 0x24) >> (ulonglong)(uVar17 & 0x1f);
                if (uVar18 == 0) {
                  uVar18 = 1;
                }
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                thunk_FUN_180223c20(auStack_70,0,0,uVar4,uVar18);
                thunk_FUN_180223c70(*(longlong *)(lVar3 + 0x1c8) + (uVar13 | 0x10),
                                    *(longlong *)(lVar3 + 0x1c8) + (uVar13 | 0x10),auStack_70);
                thunk_FUN_180223c70(*(longlong *)(lVar3 + 0x218) + (uVar13 | 0x10),
                                    *(longlong *)(lVar3 + 0x218) + (uVar13 | 0x10),auStack_70);
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
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(*(undefined8 *)(lVar3 + 0x10),lVar2,0x400);
    }
    FUN_180222c50(*(undefined8 *)(lVar3 + 0x10),0,0x400);
    *(undefined1 *)(lVar3 + 0x191) = 1;
    FUN_1801ab078(lVar3,0,0);
  }
  return;
}

