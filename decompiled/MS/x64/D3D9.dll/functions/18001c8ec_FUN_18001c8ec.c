/*
 * FUN_18001c8ec at 18001c8ec
 * undefined8 __fastcall FUN_18001c8ec(longlong param_1, uint param_2)
 * Address ranges: 18001c8ec-18001ce16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001c8ec(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong local_50;
  uint local_48;
  
  if ((((*(char *)(param_1 + 0x40c) != '\0') || (param_2 == 0)) ||
      (*(uint *)(param_1 + 0x400) < param_2)) ||
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8),
     lVar4 == 0)) {
    return 0x8876086c;
  }
  local_50 = *(ulonglong *)(lVar4 + 0xac68);
  local_48 = 0;
  while( true ) {
    uVar10 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xd1 < local_48) goto LAB_18001c9e0;
    local_50 = *(ulonglong *)(lVar4 + 0xac68 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar6 = (byte *)((longlong)&local_50 + ((longlong)(uVar10 & 0xffffffff) >> 3));
  *pbVar6 = *pbVar6 & ~('\x01' << (uVar10 & 7));
  iVar8 = (int)uVar10 + local_48;
  while (iVar8 != -1) {
    *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 4) =
         *(undefined4 *)(param_1 + 0x478 + (longlong)iVar8 * 4);
    uVar10 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        local_48 = local_48 + 0x40;
        if (0xd1 < local_48) goto LAB_18001c9e0;
        local_50 = ((ulonglong *)(lVar4 + 0xac68))[local_48 >> 6];
        uVar10 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar6 = (byte *)((longlong)&local_50 + ((longlong)(uVar10 & 0xffffffff) >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar10 & 7));
    iVar8 = local_48 + (int)uVar10;
  }
LAB_18001c9e0:
  local_50 = *(ulonglong *)(lVar4 + 0xac88);
  local_48 = 0;
  while( true ) {
    uVar10 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0x107 < local_48) goto LAB_18001caad;
    local_50 = *(ulonglong *)(lVar4 + 0xac88 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar6 = (byte *)((longlong)&local_50 + ((longlong)(uVar10 & 0xffffffff) >> 3));
  *pbVar6 = *pbVar6 & ~('\x01' << (uVar10 & 7));
  iVar8 = (int)uVar10 + local_48;
  while (iVar8 != -1) {
    lVar11 = (ulonglong)(uint)(iVar8 / 0x21) * 0x21 + (ulonglong)(uint)(iVar8 % 0x21);
    uVar10 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    *(undefined4 *)(lVar4 + 0x358 + lVar11 * 4) = *(undefined4 *)(param_1 + 0x7c0 + lVar11 * 4);
    if (local_50 == 0) {
      do {
        local_48 = local_48 + 0x40;
        if (0x107 < local_48) goto LAB_18001caad;
        local_50 = ((ulonglong *)(lVar4 + 0xac88))[local_48 >> 6];
        uVar10 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar6 = (byte *)((longlong)&local_50 + ((longlong)(uVar10 & 0xffffffff) >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar10 & 7));
    iVar8 = local_48 + (int)uVar10;
  }
LAB_18001caad:
  local_50 = *(ulonglong *)(lVar4 + 0xacb0);
  local_48 = 0;
  while( true ) {
    uVar10 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0x109 < local_48) goto LAB_18001cb8b;
    local_50 = *(ulonglong *)(lVar4 + 0xacb0 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar6 = (byte *)((longlong)&local_50 + ((longlong)(uVar10 & 0xffffffff) >> 3));
  *pbVar6 = *pbVar6 & ~('\x01' << (uVar10 & 7));
  iVar8 = local_48 + (int)uVar10;
  while (iVar8 != -1) {
    lVar11 = *(longlong *)(param_1 + 0xe10);
    lVar9 = (longlong)iVar8 * 0x40;
    uVar7 = ((undefined8 *)(lVar11 + lVar9))[1];
    puVar20 = (undefined8 *)(lVar4 + 0x778 + lVar9);
    *puVar20 = *(undefined8 *)(lVar11 + lVar9);
    puVar20[1] = uVar7;
    puVar20 = (undefined8 *)(lVar11 + 0x10 + lVar9);
    uVar7 = puVar20[1];
    puVar1 = (undefined8 *)(lVar4 + 0x788 + lVar9);
    *puVar1 = *puVar20;
    puVar1[1] = uVar7;
    puVar20 = (undefined8 *)(lVar11 + 0x20 + lVar9);
    uVar7 = puVar20[1];
    puVar1 = (undefined8 *)(lVar4 + 0x798 + lVar9);
    *puVar1 = *puVar20;
    puVar1[1] = uVar7;
    puVar20 = (undefined8 *)(lVar11 + 0x30 + lVar9);
    uVar7 = puVar20[1];
    puVar1 = (undefined8 *)(lVar4 + 0x7a8 + lVar9);
    *puVar1 = *puVar20;
    puVar1[1] = uVar7;
    uVar10 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        local_48 = local_48 + 0x40;
        if (0x109 < local_48) goto LAB_18001cb8b;
        local_50 = ((ulonglong *)(lVar4 + 0xacb0))[local_48 >> 6];
        uVar10 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar6 = (byte *)((longlong)&local_50 + ((longlong)(uVar10 & 0xffffffff) >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar10 & 7));
    iVar8 = local_48 + (int)uVar10;
  }
LAB_18001cb8b:
  if (*(char *)(lVar4 + 0xace9) != '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0x2dc);
    *(undefined8 *)(lVar4 + 0x49f8) = *(undefined8 *)(param_1 + 0x2d4);
    *(undefined8 *)(lVar4 + 0x4a00) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x2ec);
    *(undefined8 *)(lVar4 + 0x4a08) = *(undefined8 *)(param_1 + 0x2e4);
    *(undefined8 *)(lVar4 + 0x4a10) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x2fc);
    *(undefined8 *)(lVar4 + 0x4a18) = *(undefined8 *)(param_1 + 0x2f4);
    *(undefined8 *)(lVar4 + 0x4a20) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x30c);
    *(undefined8 *)(lVar4 + 0x4a28) = *(undefined8 *)(param_1 + 0x304);
    *(undefined8 *)(lVar4 + 0x4a30) = uVar7;
    *(undefined4 *)(lVar4 + 19000) = *(undefined4 *)(param_1 + 0x314);
  }
  if (*(int *)(lVar4 + 0x4ac8) != 0) {
    uVar15 = 0;
    if (*(int *)(lVar4 + 0x4ac8) == 0) goto LAB_18001cd14;
    do {
      lVar11 = *(longlong *)(lVar4 + 0x4ac0);
      uVar10 = (ulonglong)uVar15 << 7;
      puVar18 = (uint *)((uVar10 | 8) + lVar11);
      if (puVar18 != (uint *)0x0) {
        uVar12 = *(uint *)(param_1 + 0x328);
        if (uVar12 != 0) {
          uVar3 = *puVar18;
          uVar21 = (ulonglong)uVar3;
          uVar16 = 0;
          lVar9 = *(longlong *)(param_1 + 800);
          uVar14 = (ulonglong)uVar12;
          do {
            uVar17 = (int)uVar14 + uVar16 >> 1;
            uVar13 = (ulonglong)uVar17;
            uVar5 = *(ulonglong *)(lVar9 + uVar13 * 0x78);
            uVar19 = uVar13;
            if (uVar5 <= uVar21) {
              if (uVar21 <= uVar5) break;
              uVar16 = uVar17 + 1;
              uVar13 = uVar14;
              uVar19 = (ulonglong)uVar16;
            }
            uVar17 = (uint)uVar13;
            uVar14 = uVar13;
            uVar13 = uVar19;
          } while (uVar17 != uVar16);
          if ((((uint)uVar13 != uVar12) && (*(ulonglong *)(uVar13 * 0x78 + lVar9) == uVar21)) &&
             (puVar20 = (undefined8 *)(lVar9 + 0xc + uVar13 * 0x78), puVar20 != (undefined8 *)0x0))
          {
            if (*(uint *)(param_1 + 0x360) != 0) {
              uVar14 = 0;
              do {
                if (*(uint *)(*(longlong *)(param_1 + 0x358) + uVar14 * 4) == uVar3)
                goto LAB_18001ccb4;
                uVar12 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar12;
              } while (uVar12 < *(uint *)(param_1 + 0x360));
            }
            uVar14 = 0xffffffff;
LAB_18001ccb4:
            cVar2 = *(char *)((uVar10 | 0x79) + lVar11);
            *(bool *)((uVar10 | 0x78) + lVar11) = (int)uVar14 != -1;
            if (cVar2 != '\0') {
              uVar7 = puVar20[1];
              uVar10 = uVar10 | 0xc;
              *(undefined8 *)(uVar10 + lVar11) = *puVar20;
              ((undefined8 *)(uVar10 + lVar11))[1] = uVar7;
              uVar7 = puVar20[3];
              puVar1 = (undefined8 *)(uVar10 + 0x10 + lVar11);
              *puVar1 = puVar20[2];
              puVar1[1] = uVar7;
              uVar7 = puVar20[5];
              puVar1 = (undefined8 *)(uVar10 + 0x20 + lVar11);
              *puVar1 = puVar20[4];
              puVar1[1] = uVar7;
              uVar7 = puVar20[7];
              puVar1 = (undefined8 *)(uVar10 + 0x30 + lVar11);
              *puVar1 = puVar20[6];
              puVar1[1] = uVar7;
              uVar7 = puVar20[9];
              puVar1 = (undefined8 *)(uVar10 + 0x40 + lVar11);
              *puVar1 = puVar20[8];
              puVar1[1] = uVar7;
              uVar7 = puVar20[0xb];
              puVar1 = (undefined8 *)(uVar10 + 0x50 + lVar11);
              *puVar1 = puVar20[10];
              puVar1[1] = uVar7;
              uVar7 = *(undefined8 *)((longlong)puVar20 + 100);
              puVar1 = (undefined8 *)(uVar10 + 0x5c + lVar11);
              *puVar1 = *(undefined8 *)((longlong)puVar20 + 0x5c);
              puVar1[1] = uVar7;
            }
          }
        }
      }
LAB_18001cd14:
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(lVar4 + 0x4ac8));
  }
  if (*(char *)(lVar4 + 0xace8) != '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(lVar4 + 0x4a3c) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar4 + 0x4a44) = uVar7;
    *(undefined8 *)(lVar4 + 0x4a4c) = *(undefined8 *)(param_1 + 0x68);
  }
  local_50 = *(ulonglong *)(lVar4 + 0xace0);
  local_48 = 0;
  while( true ) {
    uVar10 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (5 < local_48) {
      return 0;
    }
    local_50 = *(ulonglong *)(lVar4 + 0xace0 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar6 = (byte *)((longlong)&local_50 + ((longlong)(uVar10 & 0xffffffff) >> 3));
  *pbVar6 = *pbVar6 & ~('\x01' << (uVar10 & 7));
  iVar8 = local_48 + (int)uVar10;
  do {
    if (iVar8 == -1) {
      return 0;
    }
    lVar11 = 0;
    do {
      *(undefined4 *)(lVar4 + (longlong)iVar8 * 0x10 + 0x4a54 + lVar11 * 4) =
           *(undefined4 *)(param_1 + (longlong)iVar8 * 0x10 + 0x418 + lVar11 * 4);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    uVar10 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        local_48 = local_48 + 0x40;
        if (5 < local_48) {
          return 0;
        }
        local_50 = ((ulonglong *)(lVar4 + 0xace0))[local_48 >> 6];
        uVar10 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar6 = (byte *)((longlong)&local_50 + ((longlong)(uVar10 & 0xffffffff) >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar10 & 7));
    iVar8 = local_48 + (int)uVar10;
  } while( true );
}

