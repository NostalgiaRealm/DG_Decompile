/*
 * FUN_18000e670 at 18000e670
 * undefined FUN_18000e670(void)
 * Address ranges: 18000e670-18000e943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18000e670(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong extraout_x10;
  longlong extraout_x11;
  undefined4 extraout_w12;
  ulonglong extraout_x13;
  longlong extraout_x14;
  longlong extraout_x15;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  bVar11 = 0;
  if (((*(int *)(param_1 + 0x74) == *(int *)(param_2 + 0x74)) && (*(int *)(param_1 + 0x7c) == 0)) &&
     (*(int *)(param_2 + 0x7c) == 2)) {
    uVar9 = (uint)*(ushort *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
      uVar9 = 1;
    }
    uVar10 = (uint)*(ushort *)(param_2 + 0x3c);
    if ((*(uint *)(param_2 + 0x70) & 0x400) != 0) {
      uVar10 = 1;
    }
    uVar12 = uVar10 - uVar9;
    if (uVar10 < uVar9) {
      uVar12 = 0;
    }
    uVar17 = uVar9 - uVar10;
    if (uVar10 >= uVar9) {
      uVar17 = 0;
    }
    uVar4 = *(uint *)(param_2 + 0x68) >> (ulonglong)(uVar12 & 0x1f);
    uVar2 = *(uint *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    uVar14 = *(uint *)(param_2 + 0x6c) >> (ulonglong)(uVar12 & 0x1f);
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    uVar13 = uVar2 >> (ulonglong)(uVar17 & 0x1f);
    uVar18 = uVar3 >> (ulonglong)(uVar17 & 0x1f);
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    if (uVar18 == 0) {
      uVar18 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if ((uVar4 != uVar13 || uVar14 != uVar18) && ((uVar12 != 0 || (uVar17 != 0)))) {
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      uVar17 = 0;
      uVar12 = 0;
      uVar13 = uVar2;
      uVar18 = 1;
      if (uVar3 != 0) {
        uVar18 = uVar3;
      }
    }
    if (uVar10 < uVar9) {
      uVar9 = uVar10;
    }
    uVar10 = (1 << (ulonglong)(uVar12 & 0x1f)) - 1;
    bVar11 = 1;
    uVar16 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        if (bVar11 == 0) {
          return 0;
        }
        piVar1 = (int *)(*(longlong *)(param_2 + 0x48) + uVar16 * 0x10);
        iVar6 = piVar1[3] >> (uVar12 & 0x1f);
        if ((piVar1[3] & uVar10) != 0) {
          iVar6 = iVar6 + 1;
        }
        iVar15 = piVar1[2] >> (uVar12 & 0x1f);
        if ((piVar1[2] & uVar10) != 0) {
          iVar15 = iVar15 + 1;
        }
        (*__imp_USER32_dll_SetRect)
                  (&local_70,*piVar1 >> (uVar12 & 0x1f),piVar1[1] >> (uVar12 & 0x1f),iVar15,iVar6);
        local_60 = 0;
        local_58 = uVar13;
        uStack_54 = uVar18;
        iVar6 = (*__imp_USER32_dll_IntersectRect)(&local_70,&local_70,&local_60);
        iVar15 = (int)uVar16;
        if (iVar6 != 0) {
          uVar14 = 0;
          if (uVar9 != 0) {
            do {
              FUN_18000bc70(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) +
                             (ulonglong)(uVar14 + uVar17 + iVar15 * 0x10) * 8),
                            *(undefined8 *)
                             (*(longlong *)(param_2 + 0x40) +
                             (ulonglong)(uVar14 + uVar12 + iVar15 * 0x10) * 8));
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar9);
          }
          func_0x0001801071f0(*(undefined4 *)
                               (*(longlong *)
                                 (*(longlong *)(param_2 + 0x40) +
                                 (ulonglong)(iVar15 * 0x10 + uVar12) * 8) + 0x48));
          uVar7 = func_0x000180107140(extraout_x13 & 0xffffffff);
          bVar5 = FUN_180024160(*(undefined8 *)(extraout_x10 + 0x70),
                                *(undefined8 *)(extraout_x11 + 0x70),*(undefined8 *)(param_1 + 0x50)
                                ,uVar16,uVar16,uVar12,uVar17,uVar9,
                                *(undefined4 *)(extraout_x15 + 0x70),
                                *(undefined4 *)(extraout_x14 + 0x70),&local_70,local_70,uStack_68,
                                uVar7,extraout_w12,1);
          uVar14 = 0;
          bVar11 = bVar5 & bVar11;
          if (uVar9 != 0) {
            do {
              lVar8 = *(longlong *)
                       (*(longlong *)(param_1 + 0x40) +
                       (ulonglong)(uVar14 + iVar15 * 0x10 + uVar17) * 8);
              if (*(longlong *)(*(longlong *)(lVar8 + 8) + 0x70) != 0) {
                FUN_180005df8(*(undefined8 *)(lVar8 + 0x28));
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar9);
          }
        }
        (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_2 + 0x48) + uVar16 * 0x10);
        uVar16 = (ulonglong)(iVar15 + 1U);
      } while (iVar15 + 1U < *(uint *)(param_1 + 0x80));
    }
  }
  return bVar11;
}

