/*
 * FUN_100dadb0 at 100dadb0
 * undefined FUN_100dadb0(void)
 * Address ranges: 100dadb0-100db283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_100dadb0(int param_1)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint local_540;
  uint *local_53c;
  uint *local_538;
  code *local_534;
  uint local_530 [16];
  undefined1 auStack_4f0 [596];
  undefined1 auStack_29c [596];
  undefined4 local_48;
  
  if (*(char *)(param_1 + 0xc2ee) == '\0') {
    bVar14 = *(byte *)(param_1 + 0xc2e9);
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc28c);
    bVar14 = 0;
    if (iVar6 != 0) {
      uVar8 = iVar6 + 0x14;
      local_538 = (uint *)(param_1 + 0xc2d8);
      *local_538 = uVar8;
      local_540 = uVar8;
      FUN_101325a0(param_1 + 0x44,uVar8,0x254);
      if (*(char *)(iVar6 + 0x27b) == '\0') {
        uVar10 = *(uint *)(iVar6 + 0x268);
        if (*(uint *)(iVar6 + 0x268) == 0) {
          uVar10 = uVar8;
        }
        *(uint *)(param_1 + 0xc2dc) = uVar10;
        FUN_101325a0(param_1 + 0x44,uVar8,0x254);
        bVar9 = 1 < *(int *)(param_1 + 0x48) - 3U;
      }
      else {
        *(uint *)(param_1 + 0xc2dc) = uVar8;
        if ((*(int *)(param_1 + 0x48) == 4) ||
           ((*(int *)(param_1 + 0x48) == 3 && (*(int *)(param_1 + 0xc288) == 0)))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
      }
      uVar8 = local_540;
      if ((*(char *)(param_1 + 0x669f) == '\0') && (*(char *)(iVar6 + 0x27a) != '\0')) {
        bVar14 = 0;
      }
      else {
        bVar14 = 1;
      }
      bVar14 = bVar9 & bVar14;
      if (bVar14 != 0) {
        *(undefined1 *)(param_1 + 0xc2ec) = 0;
        local_53c = (uint *)(param_1 + 0x6654);
        *local_53c = 0xffffffff;
        if ((*(int *)(param_1 + 0xc288) == 0) || (*(int *)(local_540 + 4) == 0)) {
          *(undefined4 *)(param_1 + 0xc2e0) = 0;
          if (*(char *)(iVar6 + 0x27b) == '\0') {
            bVar14 = *(byte *)(iVar6 + 0x278);
          }
        }
        else {
          iVar6 = FUN_100e5650(param_1 + 0x6718,*(int *)(param_1 + 0xc288));
          puVar4 = local_53c;
          if (iVar6 != 0) {
            local_53c = (uint *)(iVar6 + 4);
            local_534 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
            uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            uVar8 = (*extraout_w11)(uVar7,uVar8);
            *puVar4 = uVar8;
            if (uVar8 == 0xffffffff) {
              *puVar4 = 0;
              uVar8 = *local_538;
              if (uVar8 != 0) {
                for (uVar10 = 0; uVar10 < 0x10; uVar10 = uVar10 + 1) {
                  pcVar1 = (char *)(*(int *)(iVar6 + 8) + uVar10);
                  if ((pcVar1[0x10] != '\0') && (cVar2 = *pcVar1, cVar2 != -1)) {
                    uVar12 = 0;
                    if (*(uint *)(uVar8 + 8) != 0) {
                      do {
                        uVar13 = (uint)*(byte *)(uVar8 + 0x214 + uVar12);
                        if (*(char *)(uVar8 + 0x19 + uVar13 * 8) == cVar2) {
                          *puVar4 = 1 << (ulonglong)
                                         ((int)*(char *)(uVar8 + uVar13 * 8 + 0x14) & 0x1f) |
                                    *puVar4;
                          break;
                        }
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < *(uint *)(uVar8 + 8));
                    }
                  }
                }
              }
            }
            local_530[2] = 0;
            local_530[3] = 0;
            local_530[0] = 0;
            local_530[1] = 0;
            local_530[6] = 0;
            local_530[7] = 0;
            local_530[4] = 0;
            local_530[5] = 0;
            local_530[10] = 0;
            local_530[0xb] = 0;
            local_530[8] = 0;
            local_530[9] = 0;
            local_530[0xe] = 0;
            local_530[0xf] = 0;
            local_530[0xc] = 0;
            local_530[0xd] = 0;
            if (*(char *)(param_1 + 0x669f) == '\0') {
              local_540 = *puVar4;
              uVar8 = (local_540 & 0xaaaaaaaa) >> 1 | (local_540 & 0x55555555) << 1;
              uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
              lVar11 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
              uVar8 = (uint)lVar11;
              if ((1 - (uVar8 >> 5) & 0xff) != 0) {
                pbVar3 = (byte *)((int)&local_540 + ((int)uVar8 >> 3));
                *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
                while( true ) {
                  uVar8 = *(uint *)(param_1 + 0xc290 + (int)lVar11 * 4);
                  if ((int)uVar8 < 0) {
                    local_530[(int)lVar11] = uVar8 & 0x3fffffff;
                  }
                  uVar8 = (local_540 & 0xaaaaaaaa) >> 1 | (local_540 & 0x55555555) << 1;
                  uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
                  uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
                  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
                  lVar11 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
                  uVar8 = (uint)lVar11;
                  if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
                  pbVar3 = (byte *)((int)&local_540 + ((int)uVar8 >> 3));
                  *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
                }
              }
              uVar8 = *(uint *)(param_1 + 0xc290) & 0x3fffffff;
            }
            else {
              uVar8 = 1;
              if (*(char *)(*(int *)(iVar6 + 0x85c) + 1) == '\x03') {
                local_540 = *puVar4;
                uVar10 = (local_540 & 0xaaaaaaaa) >> 1 | (local_540 & 0x55555555) << 1;
                uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
                uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
                uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
                lVar11 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
                uVar10 = (uint)lVar11;
                if ((1 - (uVar10 >> 5) & 0xff) != 0) {
                  pbVar3 = (byte *)((int)&local_540 + ((int)uVar10 >> 3));
                  *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
                  while ((*(uint *)(param_1 + 0xc290 + (int)lVar11 * 4) & 0x3fffffff) == 1) {
                    uVar10 = (local_540 & 0xaaaaaaaa) >> 1 | (local_540 & 0x55555555) << 1;
                    uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
                    uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
                    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
                    lVar11 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
                    uVar10 = (uint)lVar11;
                    if ((1 - (uVar10 >> 5) & 0xff) == 0) goto LAB_100db1b8;
                    pbVar3 = (byte *)((int)&local_540 + ((int)uVar10 >> 3));
                    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
                  }
                  *(undefined1 *)(param_1 + 0xc2ec) = 1;
                }
              }
            }
LAB_100db1b8:
            FUN_101325a0(auStack_4f0,*(undefined4 *)(param_1 + 0xc2d8),0x254);
            FUN_101325a0(auStack_29c,*(undefined4 *)(param_1 + 0xc2dc),0x254);
            puVar4 = local_53c;
            local_48 = *(undefined4 *)(param_1 + 0x6654);
            uVar7 = (*local_534)();
            bVar5 = (*extraout_w11_00)(uVar7,auStack_4f0,local_530,uVar8);
            bVar14 = bVar5 & bVar14;
            *(uint *)(param_1 + 0xc2e0) = *puVar4;
          }
        }
      }
    }
    *(byte *)(param_1 + 0xc2e9) = bVar14;
    *(undefined1 *)(param_1 + 0xc2ee) = 0;
  }
  return bVar14;
}

