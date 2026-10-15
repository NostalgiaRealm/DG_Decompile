/*
 * FUN_18009dff8 at 18009dff8
 * undefined4 __fastcall FUN_18009dff8(longlong * param_1, char param_2)
 * Address ranges: 18009dff8-18009e3e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18009dff8(longlong *param_1,char param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  uint xRight;
  longlong lVar7;
  char cVar8;
  uint yBottom;
  BOOL BVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong local_58;
  longlong local_50 [2];
  
  uVar1 = *(uint *)((longlong)param_1 + 0x34);
  uVar19 = 0;
  uVar15 = 0;
  lVar18 = 0x38;
  if (*(longlong *)((longlong)param_1 + 0x154) != 0) goto LAB_18009e102;
  uVar17 = (-(uint)((&DAT_1800feb38)[*(uint *)((longlong)param_1 + 0x2c)] != '\0') & 3) + 0x1c;
  if (uVar1 == 1) {
LAB_18009e084:
    uVar14 = uVar15;
  }
  else {
    lVar12 = lVar18;
    if ((int)param_1[7] == 0) {
      lVar12 = 0x30;
    }
    uVar14 = uVar17;
    if (*(uint *)((longlong)param_1 + lVar12) <= *(uint *)(param_1 + 6)) goto LAB_18009e084;
  }
  lVar12 = lVar18;
  if ((int)param_1[7] == 0) {
    lVar12 = 0x30;
  }
  FUN_18009a7d8(param_1 + 0x28,*(uint *)((longlong)param_1 + 0x24),*(uint *)(param_1 + 5),
                *(uint *)((longlong)param_1 + lVar12),uVar1,1,0x1b,uVar17,uVar14,
                *(undefined4 *)(&DAT_1800fe8f0 + (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 4)
                ,*(undefined4 *)
                  (&DAT_1800fe8f0 + (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 4),0x1c,0,
                '\x01','\x01',uVar1 != 1,'\0');
  FUN_18009be24((longlong)param_1);
LAB_18009e102:
  if ((param_2 != '\0') || (*(char *)((longlong)param_1 + 0x4d) == '\x01')) {
    FUN_18009ade0(param_1 + 0x28,uVar1 != 1,0);
  }
  uVar2 = *(undefined4 *)((longlong)param_1 + (ulonglong)(-(uint)(param_2 != '\0') & 0xc) + 0x16c);
  if (*(longlong *)((longlong)param_1 + 0x154) != 0) {
    uVar17 = 0;
    uVar14 = uVar19;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        uVar17 = 0;
        uVar15 = uVar14;
        if ((int)param_1[6] != 0) {
          uVar16 = 1 << ((byte)uVar19 & 0x1f);
          do {
            cVar8 = (**(code **)(*param_1 + 8))(param_1,uVar17,uVar19);
            uVar15 = uVar16 | uVar14;
            if (cVar8 == '\0') {
              uVar15 = uVar14;
            }
            lVar12 = 0x30;
            if ((int)param_1[7] != 0) {
              lVar12 = lVar18;
            }
            uVar14 = uVar19 * *(int *)((longlong)param_1 + lVar12) + uVar17;
            if (*(char *)((longlong)param_1 + 0x191) != '\0') {
              bVar5 = (byte)uVar17 & 0x1f;
              yBottom = *(uint *)(param_1 + 5) >> bVar5;
              bVar6 = (byte)uVar17 & 0x1f;
              if (*(uint *)(param_1 + 5) >> bVar5 == 0) {
                yBottom = 1;
              }
              xRight = *(uint *)((longlong)param_1 + 0x24) >> bVar6;
              if (*(uint *)((longlong)param_1 + 0x24) >> bVar6 == 0) {
                xRight = 1;
              }
              SetRect((LPRECT)(((ulonglong)uVar14 << 5 | 0x10) +
                              *(longlong *)((longlong)param_1 + 0x164)),0,0,xRight,yBottom);
            }
            uVar13 = (ulonglong)uVar14 * 0x20;
            BVar9 = IsRectEmpty((RECT *)((uVar13 | 0x10) + *(longlong *)((longlong)param_1 + 0x164))
                               );
            if (BVar9 == 0) {
              iVar3 = *(int *)((longlong)param_1 + 0x3c);
              plVar10 = FUN_1800e1d04(*(longlong *)(param_1[0xb] + 0x1930),&local_58,
                                      *(uint *)((longlong)param_1 + 0x8c),0);
              plVar4 = *(longlong **)((longlong)param_1 + 0x74);
              lVar7 = param_1[0x31];
              plVar11 = FUN_1800e1d04(*(longlong *)(param_1[0xb] + 0x1938),local_50,
                                      *(uint *)(param_1 + 0x2e),uVar14);
              lVar12 = *(longlong *)((longlong)param_1 + 0x164);
              FUN_180097778(param_1[0x26],*(uint *)((longlong)param_1 + 0x2c),uVar17,uVar19,
                            uVar19 * iVar3 + uVar17,uVar14,param_1[2],
                            *(uint *)(uVar13 + 0x10 + lVar12),*(uint *)(uVar13 + 0x14 + lVar12),
                            *(uint *)(uVar13 + 0x18 + lVar12),*(uint *)(uVar13 + 0x1c + lVar12),
                            *(undefined8 *)((longlong)param_1 + 0x154),plVar11,(int)lVar7,plVar4,
                            plVar10);
              SetRectEmpty((LPRECT)((uVar13 | 0x10) + *(longlong *)((longlong)param_1 + 0x164)));
              uVar15 = uVar16 | uVar15;
            }
            uVar17 = uVar17 + 1;
            uVar14 = uVar15;
          } while (uVar17 < *(uint *)(param_1 + 6));
        }
        uVar17 = *(uint *)((longlong)param_1 + 0x34);
        uVar19 = uVar19 + 1;
        uVar14 = uVar15;
      } while (uVar19 < uVar17);
    }
    *(undefined1 *)((longlong)param_1 + 0x191) = 0;
    if (*(char *)((longlong)param_1 + 0x4d) == '\x01') {
      FUN_18009ac8c((longlong)(param_1 + 0xc),(int)param_1[6],uVar17);
      *(undefined1 *)((longlong)param_1 + 0x4d) = 2;
    }
    if (uVar15 != 0) {
      if ((int)param_1[7] == 0) {
        lVar18 = 0x30;
      }
      FUN_18009c65c(param_1,(longlong)(param_1 + 0x28),uVar15,*(uint *)((longlong)param_1 + 0x16c),
                    (uint)(uVar1 != 1),*(int *)((longlong)param_1 + lVar18));
    }
  }
  return uVar2;
}

