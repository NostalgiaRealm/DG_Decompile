/*
 * FUN_180119ee8 at 180119ee8
 * undefined FUN_180119ee8(void)
 * Address ranges: 180119ee8-18011a1bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180119ee8(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong extraout_x10;
  longlong extraout_x11;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_60 [16];
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  bVar6 = 0;
  if (((*(int *)(param_1 + 0x74) == *(int *)(param_2 + 0x74)) && (*(int *)(param_1 + 0x7c) == 0)) &&
     (*(int *)(param_2 + 0x7c) == 2)) {
    uVar11 = (uint)*(ushort *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
      uVar11 = 1;
    }
    uVar12 = (uint)*(ushort *)(param_2 + 0x3c);
    if ((*(uint *)(param_2 + 0x70) & 0x400) != 0) {
      uVar12 = 1;
    }
    uVar13 = uVar12 - uVar11;
    if (uVar12 < uVar11) {
      uVar13 = 0;
    }
    uVar17 = uVar11 - uVar12;
    if (uVar12 >= uVar11) {
      uVar17 = 0;
    }
    uVar4 = *(uint *)(param_2 + 0x68) >> (ulonglong)(uVar13 & 0x1f);
    uVar2 = *(uint *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    uVar18 = *(uint *)(param_2 + 0x6c) >> (ulonglong)(uVar13 & 0x1f);
    if (uVar18 == 0) {
      uVar18 = 1;
    }
    uVar16 = uVar2 >> (ulonglong)(uVar17 & 0x1f);
    uVar10 = uVar3 >> (ulonglong)(uVar17 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if ((uVar4 != uVar16 || uVar18 != uVar10) && ((uVar13 != 0 || (uVar17 != 0)))) {
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      uVar17 = 0;
      uVar13 = 0;
      uVar16 = uVar2;
      uVar10 = 1;
      if (uVar3 != 0) {
        uVar10 = uVar3;
      }
    }
    if (uVar12 < uVar11) {
      uVar11 = uVar12;
    }
    bVar6 = 1;
    uVar12 = (1 << (ulonglong)(uVar13 & 0x1f)) - 1;
    uVar15 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      bVar6 = 1;
      do {
        if (bVar6 == 0) {
          return 0;
        }
        piVar1 = (int *)(*(longlong *)(param_2 + 0x48) + uVar15 * 0x10);
        iVar7 = piVar1[3] >> (uVar13 & 0x1f);
        if ((piVar1[3] & uVar12) != 0) {
          iVar7 = iVar7 + 1;
        }
        iVar14 = piVar1[2] >> (uVar13 & 0x1f);
        if ((piVar1[2] & uVar12) != 0) {
          iVar14 = iVar14 + 1;
        }
        thunk_FUN_180223c20(local_60,*piVar1 >> (uVar13 & 0x1f),piVar1[1] >> (uVar13 & 0x1f),iVar14,
                            iVar7);
        local_50 = 0;
        local_48 = uVar16;
        uStack_44 = uVar10;
        iVar7 = thunk_FUN_180223c34(local_60,local_60,&local_50);
        iVar14 = (int)uVar15;
        if (iVar7 != 0) {
          uVar18 = 0;
          if (uVar11 != 0) {
            do {
              FUN_180116f60(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) +
                             (ulonglong)(uVar18 + uVar17 + iVar14 * 0x10) * 8),
                            *(undefined8 *)
                             (*(longlong *)(param_2 + 0x40) +
                             (ulonglong)(uVar18 + uVar13 + iVar14 * 0x10) * 8));
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar11);
          }
          uVar9 = (ulonglong)
                  *(uint *)(*(longlong *)
                             (*(longlong *)(param_2 + 0x40) +
                             (ulonglong)(iVar14 * 0x10 + uVar13) * 8) + 0x48);
          FUN_1801071f0(uVar9);
          FUN_180107140(uVar9 & 0xffffffff);
          bVar5 = FUN_180130a80(*(undefined8 *)(extraout_x10 + 0x70),
                                *(undefined8 *)(extraout_x11 + 0x70),*(undefined8 *)(param_1 + 0x50)
                                ,uVar15,uVar15,uVar13);
          uVar18 = 0;
          bVar6 = bVar5 & bVar6;
          if (uVar11 != 0) {
            do {
              lVar8 = *(longlong *)
                       (*(longlong *)(param_1 + 0x40) +
                       (ulonglong)(uVar18 + iVar14 * 0x10 + uVar17) * 8);
              if (*(longlong *)(*(longlong *)(lVar8 + 8) + 0x70) != 0) {
                FUN_18010b470(*(undefined8 *)(lVar8 + 0x28));
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar11);
          }
        }
        thunk_FUN_180223bf8(*(longlong *)(param_2 + 0x48) + uVar15 * 0x10);
        uVar15 = (ulonglong)(iVar14 + 1U);
      } while (iVar14 + 1U < *(uint *)(param_1 + 0x80));
    }
  }
  return bVar6;
}

