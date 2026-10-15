/*
 * FUN_180006ce0 at 180006ce0
 * undefined FUN_180006ce0(void)
 * Address ranges: 180006ce0-180006f03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006ce0(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint local_60;
  int local_5c;
  longlong local_58;
  
  uVar11 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  local_60 = param_2;
  lVar12 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
  uVar11 = (uint)lVar12;
  bVar4 = true;
  if ((1 - (uVar11 >> 5) & 0xff) != 0) {
    local_5c = param_3;
    do {
      iVar1 = (int)lVar12 >> 3;
      *(byte *)((longlong)&local_60 + (longlong)iVar1) =
           *(byte *)((longlong)&local_60 + (longlong)iVar1) &
           ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
      if (!bVar4) {
        return;
      }
      lVar14 = param_1 + 0x66c8;
      lVar13 = *(longlong *)(lVar14 + lVar12 * 8);
      if (lVar13 != 0) {
        if (*(longlong *)(lVar13 + 0x68) == 0) {
          lVar7 = (**(code **)(**(longlong **)(lVar13 + 0x78) + 0x20))
                            (*(longlong **)(lVar13 + 0x78),*(int *)(lVar13 + 0x20) + 0x1000,1);
          *(longlong *)(lVar13 + 0x68) = lVar7;
          if (lVar7 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
                      (*(longlong **)(param_1 + 0x28),lVar12,
                       *(undefined8 *)(*(longlong *)(lVar14 + lVar12 * 8) + 0x68),
                       *(undefined4 *)(param_1 + 0x6788 + lVar12 * 4),
                       *(undefined4 *)(param_1 + 0x6748 + lVar12 * 4));
          }
        }
        lVar14 = *(longlong *)(lVar14 + lVar12 * 8);
        bVar4 = false;
        plVar8 = *(longlong **)(lVar14 + 0x68);
        if (plVar8 != (longlong *)0x0) {
          iVar1 = *(int *)(param_1 + 0x6748 + lVar12 * 4);
          iVar6 = *(int *)(param_1 + 0x6788 + lVar12 * 4);
          uVar11 = iVar6 + iVar1 * local_5c;
          if ((uVar11 < *(uint *)(lVar14 + 0x20)) &&
             (uVar3 = iVar6 + iVar1 * (local_5c + param_4), uVar3 <= *(uint *)(lVar14 + 0x20))) {
            uVar2 = *(uint *)(lVar14 + 0x70);
            if ((uVar11 < uVar2) && (uVar3 <= uVar2)) {
              uVar9 = *(uint *)(lVar14 + 0x74);
LAB_180006e30:
              bVar5 = true;
              uVar10 = 0;
            }
            else {
              uVar9 = *(uint *)(lVar14 + 0x74);
              if ((uVar9 <= uVar11) && (uVar9 < uVar3)) goto LAB_180006e30;
              bVar5 = false;
              uVar10 = 1;
            }
            if (uVar2 == uVar9) {
              bVar5 = false;
            }
            local_58 = 0;
            if (uVar2 == uVar9) {
              uVar10 = 1;
            }
            iVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,uVar10,1,&local_58);
            if (iVar6 == 0) {
              thunk_FUN_180001218(local_58 + (ulonglong)uVar11,
                                  *(longlong *)(lVar14 + 8) + (ulonglong)uVar11,iVar1 * param_4);
              (**(code **)(**(longlong **)(lVar14 + 0x68) + 0x20))();
              bVar4 = true;
              if (bVar5) {
                if (uVar11 < *(uint *)(lVar14 + 0x70)) {
                  *(uint *)(lVar14 + 0x70) = uVar11;
                }
                else {
                  *(uint *)(lVar14 + 0x74) = uVar3;
                }
              }
              else {
                *(uint *)(lVar14 + 0x70) = uVar11;
                *(uint *)(lVar14 + 0x74) = uVar3;
              }
            }
          }
        }
      }
      uVar11 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      lVar12 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
      uVar11 = (uint)lVar12;
    } while ((1 - (uVar11 >> 5) & 0xff) != 0);
  }
  return;
}

