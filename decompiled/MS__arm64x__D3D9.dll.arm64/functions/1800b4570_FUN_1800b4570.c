/*
 * FUN_1800b4570 at 1800b4570
 * undefined FUN_1800b4570(void)
 * Address ranges: 1800b4570-1800b4953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800b4570(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  uint local_550 [4];
  uint local_540 [16];
  undefined1 auStack_500 [596];
  undefined1 auStack_2ac [596];
  undefined4 local_58;
  
  if (*(char *)(param_1 + 0xc50a) == '\0') {
    bVar12 = *(byte *)(param_1 + 0xc505);
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0xc498);
    bVar12 = 0;
    if (lVar11 != 0) {
      lVar8 = lVar11 + 0x20;
      *(longlong *)(param_1 + 0xc4e8) = lVar8;
      thunk_FUN_180001218(param_1 + 0x70,lVar8,0x254);
      if (*(char *)(lVar11 + 0x293) == '\0') {
        lVar10 = *(longlong *)(lVar11 + 0x278);
        if (*(longlong *)(lVar11 + 0x278) == 0) {
          lVar10 = lVar8;
        }
        *(longlong *)(param_1 + 0xc4f0) = lVar10;
        thunk_FUN_180001218(param_1 + 0x70,lVar8,0x254);
        bVar5 = 1 < *(int *)(param_1 + 0x74) - 3U;
      }
      else {
        *(longlong *)(param_1 + 0xc4f0) = lVar8;
        if ((*(int *)(param_1 + 0x74) == 4) ||
           ((*(int *)(param_1 + 0x74) == 3 && (*(longlong *)(param_1 + 0xc490) == 0)))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
      }
      if ((*(char *)(param_1 + 0x681b) == '\0') && (*(char *)(lVar11 + 0x292) != '\0')) {
        bVar12 = 0;
      }
      else {
        bVar12 = 1;
      }
      bVar12 = bVar5 & bVar12;
      if (bVar12 != 0) {
        *(undefined1 *)(param_1 + 0xc508) = 0;
        *(undefined4 *)(param_1 + 0x67cc) = 0xffffffff;
        if ((*(longlong *)(param_1 + 0xc490) == 0) || (*(int *)(lVar11 + 0x24) == 0)) {
          *(undefined8 *)(param_1 + 0xc4f8) = 0;
          if (*(char *)(lVar11 + 0x293) == '\0') {
            bVar12 = *(byte *)(lVar11 + 0x290);
          }
        }
        else {
          lVar11 = FUN_1800c0a50(param_1 + 0x68b8);
          if (lVar11 != 0) {
            iVar4 = (**(code **)(**(longlong **)(lVar11 + 8) + 8))(*(longlong **)(lVar11 + 8),lVar8)
            ;
            *(int *)(param_1 + 0x67cc) = iVar4;
            if (iVar4 == -1) {
              lVar8 = *(longlong *)(param_1 + 0xc4e8);
              *(undefined4 *)(param_1 + 0x67cc) = 0;
              if (lVar8 != 0) {
                for (uVar7 = 0; uVar7 < 0x10; uVar7 = uVar7 + 1) {
                  pcVar1 = (char *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)uVar7);
                  if ((pcVar1[0x10] != '\0') && (cVar2 = *pcVar1, cVar2 != -1)) {
                    uVar9 = 0;
                    if (*(uint *)(lVar8 + 8) != 0) {
                      do {
                        lVar10 = (ulonglong)*(byte *)(lVar8 + 0x214 + uVar9) * 8;
                        if (*(char *)(lVar8 + 0x19 + lVar10) == cVar2) {
                          *(uint *)(param_1 + 0x67cc) =
                               1 << (ulonglong)((int)*(char *)(lVar10 + lVar8 + 0x14) & 0x1f) |
                               *(uint *)(param_1 + 0x67cc);
                          break;
                        }
                        uVar6 = (int)uVar9 + 1;
                        uVar9 = (ulonglong)uVar6;
                      } while (uVar6 < *(uint *)(lVar8 + 8));
                    }
                  }
                }
              }
            }
            local_540[2] = 0;
            local_540[3] = 0;
            local_540[0] = 0;
            local_540[1] = 0;
            local_540[6] = 0;
            local_540[7] = 0;
            local_540[4] = 0;
            local_540[5] = 0;
            local_540[10] = 0;
            local_540[0xb] = 0;
            local_540[8] = 0;
            local_540[9] = 0;
            local_540[0xe] = 0;
            local_540[0xf] = 0;
            local_540[0xc] = 0;
            local_540[0xd] = 0;
            if (*(char *)(param_1 + 0x681b) == '\0') {
              local_550[0] = *(uint *)(param_1 + 0x67cc);
              uVar7 = (local_550[0] & 0xaaaaaaaa) >> 1 | (local_550[0] & 0x55555555) << 1;
              uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
              uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
              lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
              uVar7 = (uint)lVar8;
              if ((1 - (uVar7 >> 5) & 0xff) == 0) {
                lVar8 = 0xffffffff;
              }
              else {
                *(byte *)((longlong)local_550 + (longlong)((int)uVar7 >> 3)) =
                     *(byte *)((longlong)local_550 + (longlong)((int)uVar7 >> 3)) &
                     ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
              }
              if ((int)lVar8 != -1) {
                while( true ) {
                  uVar7 = *(uint *)(param_1 + 0xc4a0 + (longlong)(int)lVar8 * 4);
                  if ((int)uVar7 < 0) {
                    local_540[(int)lVar8] = uVar7 & 0x3fffffff;
                  }
                  uVar7 = (local_550[0] & 0xaaaaaaaa) >> 1 | (local_550[0] & 0x55555555) << 1;
                  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
                  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
                  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
                  lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
                  uVar7 = (uint)lVar8;
                  if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
                  *(byte *)((longlong)local_550 + (longlong)((int)uVar7 >> 3)) =
                       *(byte *)((longlong)local_550 + (longlong)((int)uVar7 >> 3)) &
                       ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
                }
              }
              uVar7 = *(uint *)(param_1 + 0xc4a0) & 0x3fffffff;
            }
            else {
              uVar7 = 1;
              if (*(char *)(*(longlong *)(lVar11 + 0x868) + 1) == '\x03') {
                local_550[0] = *(uint *)(param_1 + 0x67cc);
                uVar6 = (local_550[0] & 0xaaaaaaaa) >> 1 | (local_550[0] & 0x55555555) << 1;
                uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
                uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
                uVar6 = (uint)lVar8;
                if ((1 - (uVar6 >> 5) & 0xff) != 0) {
                  *(byte *)((longlong)local_550 + (longlong)((int)uVar6 >> 3)) =
                       *(byte *)((longlong)local_550 + (longlong)((int)uVar6 >> 3)) &
                       ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
                  while ((*(uint *)(param_1 + 0xc4a0 + lVar8 * 4) & 0x3fffffff) == 1) {
                    uVar6 = (local_550[0] & 0xaaaaaaaa) >> 1 | (local_550[0] & 0x55555555) << 1;
                    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
                    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
                    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                    lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
                    uVar6 = (uint)lVar8;
                    if ((1 - (uVar6 >> 5) & 0xff) == 0) goto LAB_1800b48b8;
                    *(byte *)((longlong)local_550 + (longlong)((int)uVar6 >> 3)) =
                         *(byte *)((longlong)local_550 + (longlong)((int)uVar6 >> 3)) &
                         ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
                  }
                  *(undefined1 *)(param_1 + 0xc508) = 1;
                }
              }
            }
LAB_1800b48b8:
            thunk_FUN_180001218(auStack_500,*(undefined8 *)(param_1 + 0xc4e8),0x254);
            thunk_FUN_180001218(auStack_2ac,*(undefined8 *)(param_1 + 0xc4f0),0x254);
            local_58 = *(undefined4 *)(param_1 + 0x67cc);
            bVar3 = (**(code **)(**(longlong **)(lVar11 + 8) + 0x10))
                              (*(longlong **)(lVar11 + 8),auStack_500,local_540,uVar7);
            bVar12 = bVar3 & bVar12;
            *(undefined8 *)(param_1 + 0xc4f8) = *(undefined8 *)(lVar11 + 8);
          }
        }
      }
    }
    *(byte *)(param_1 + 0xc505) = bVar12;
    *(undefined1 *)(param_1 + 0xc50a) = 0;
  }
  return bVar12;
}

