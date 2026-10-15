/*
 * FUN_18010c490 at 18010c490
 * undefined FUN_18010c490(void)
 * Address ranges: 18010c490-18010c66b;18010c6b4-18010c70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010c490(longlong param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  uint local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  uVar12 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
  local_60 = param_2;
  lVar13 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
  uVar12 = (uint)lVar13;
  bVar4 = true;
  if ((1 - (uVar12 >> 5) & 0xff) != 0) {
    local_5c = param_4;
    local_58 = param_3;
    *(byte *)((longlong)&local_60 + (longlong)((int)uVar12 >> 3)) =
         *(byte *)((longlong)&local_60 + (longlong)((int)uVar12 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
    while (bVar4) {
      lVar14 = param_1 + 0x66c8;
      lVar15 = *(longlong *)(lVar14 + lVar13 * 8);
      if (lVar15 != 0) {
        if (*(longlong *)(lVar15 + 0x68) == 0) {
          auVar16 = (*(code *)puVar5)(0x180224000,*(undefined8 *)(lVar15 + 0x78),
                                      *(int *)(lVar15 + 0x20) + 0x1000);
          lVar7 = (*extraout_x11)(auVar16._0_8_,auVar16._8_8_,1);
          *(longlong *)(lVar15 + 0x68) = lVar7;
          if (lVar7 != 0) {
            lVar15 = param_1 + 0x6748;
            lVar9 = *(longlong *)(lVar14 + lVar13 * 8);
            lVar7 = param_1 + 0x6788;
            uVar8 = (*(code *)puVar5)(0x180225000);
            (*extraout_x11_00)(uVar8,lVar13,*(undefined8 *)(lVar9 + 0x68),
                               *(undefined4 *)(lVar7 + lVar13 * 4),
                               *(undefined4 *)(lVar15 + lVar13 * 4));
          }
        }
        lVar14 = *(longlong *)(lVar14 + lVar13 * 8);
        bVar4 = false;
        if (*(longlong *)(lVar14 + 0x68) != 0) {
          iVar2 = *(int *)(param_1 + 0x6748 + lVar13 * 4);
          iVar6 = *(int *)(param_1 + 0x6788 + lVar13 * 4);
          uVar12 = iVar6 + iVar2 * local_58;
          if ((uVar12 < *(uint *)(lVar14 + 0x20)) &&
             (uVar3 = iVar6 + iVar2 * (local_58 + local_5c), uVar3 <= *(uint *)(lVar14 + 0x20))) {
            uVar1 = *(uint *)(lVar14 + 0x70);
            if ((uVar12 < uVar1) && (uVar3 <= uVar1)) {
              uVar10 = *(uint *)(lVar14 + 0x74);
LAB_18010c604:
              local_54 = 1;
              uVar11 = 0;
            }
            else {
              uVar10 = *(uint *)(lVar14 + 0x74);
              if ((uVar10 <= uVar12) && (uVar10 < uVar3)) goto LAB_18010c604;
              local_54 = 0;
              uVar11 = 1;
            }
            if (uVar1 == uVar10) {
              local_54 = 0;
            }
            local_50[0] = 0;
            if (uVar1 == uVar10) {
              uVar11 = 1;
            }
            auVar16 = (*(code *)puVar5)(0x180224000,*(longlong *)(lVar14 + 0x68),uVar11);
            iVar6 = (*extraout_x11_01)(auVar16._0_8_,auVar16._8_8_,1,local_50);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(local_50[0] + (ulonglong)uVar12,
                                  *(longlong *)(lVar14 + 8) + (ulonglong)uVar12,iVar2 * local_5c);
            }
          }
        }
      }
      uVar12 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
      uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      lVar13 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
      uVar12 = (uint)lVar13;
      if ((1 - (uVar12 >> 5) & 0xff) == 0) {
        return;
      }
      *(byte *)((longlong)&local_60 + (longlong)((int)uVar12 >> 3)) =
           *(byte *)((longlong)&local_60 + (longlong)((int)uVar12 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
    }
  }
  return;
}

