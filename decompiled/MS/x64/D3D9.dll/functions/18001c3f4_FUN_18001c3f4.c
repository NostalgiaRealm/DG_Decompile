/*
 * FUN_18001c3f4 at 18001c3f4
 * undefined8 __fastcall FUN_18001c3f4(longlong param_1, uint param_2, undefined8 param_3, uint param_4)
 * Address ranges: 18001c3f4-18001c8ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001c3f4(longlong param_1,uint param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  uint local_res20 [2];
  ulonglong local_d0;
  uint local_c8;
  float local_b8 [32];
  
  if ((((*(char *)(param_1 + 0x40c) != '\0') || (param_2 == 0)) ||
      (*(uint *)(param_1 + 0x400) < param_2)) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8),
     lVar3 == 0)) {
    return 0x8876086c;
  }
  local_d0 = *(ulonglong *)(lVar3 + 0xac88);
  local_c8 = 0;
LAB_18001c48e:
  uVar19 = 0;
  if (local_d0 != 0) {
    for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
    }
  }
  local_res20[0] = param_4;
  if (local_d0 == 0) {
    local_c8 = local_c8 + 0x40;
    if (local_c8 < 0x108) goto code_r0x00018001c480;
  }
  else {
    pbVar4 = (byte *)((longlong)&local_d0 + ((longlong)(uVar19 & 0xffffffff) >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar19 & 7));
    iVar11 = (int)uVar19 + local_c8;
    while (uVar17 = local_c8, iVar11 != -1) {
      uVar2 = iVar11 / 0x21;
      uVar12 = iVar11 % 0x21;
      lVar16 = (ulonglong)uVar2 * 0x21 + (ulonglong)uVar12;
      uVar18 = *(uint *)(lVar3 + 0x358 + lVar16 * 4);
      *(uint *)(param_1 + 0x7c0 + lVar16 * 4) = uVar18;
      if (((uVar12 == 3) || (uVar12 == 0)) || (5 < uVar12)) {
        FUN_18001b55c(param_1,uVar2,uVar12,(ulonglong)uVar18);
      }
      else {
        *(uint *)(param_1 + 0xd14) = *(uint *)(param_1 + 0xd14) | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar19 = 0;
      if (local_d0 != 0) {
        for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
        }
      }
      if (local_d0 == 0) {
        do {
          uVar17 = uVar17 + 0x40;
          local_c8 = uVar17;
          if (0x107 < uVar17) goto LAB_18001c549;
          local_d0 = ((ulonglong *)(lVar3 + 0xac88))[uVar17 >> 6];
          uVar19 = 0;
          if (local_d0 != 0) {
            for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
            }
          }
        } while (local_d0 == 0);
      }
      pbVar4 = (byte *)((longlong)&local_d0 + ((longlong)(uVar19 & 0xffffffff) >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar19 & 7));
      iVar11 = (int)uVar19 + local_c8;
    }
  }
LAB_18001c549:
  local_d0 = *(ulonglong *)(lVar3 + 0xacb0);
  local_c8 = 0;
  while( true ) {
    uVar19 = 0;
    if (local_d0 != 0) {
      for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
      }
    }
    if (local_d0 != 0) break;
    local_c8 = local_c8 + 0x40;
    if (0x109 < local_c8) goto LAB_18001c62e;
    local_d0 = *(ulonglong *)(lVar3 + 0xacb0 + (ulonglong)(local_c8 >> 6) * 8);
  }
  pbVar4 = (byte *)((longlong)&local_d0 + ((longlong)(uVar19 & 0xffffffff) >> 3));
  *pbVar4 = *pbVar4 & ~('\x01' << (uVar19 & 7));
  uVar17 = local_c8 + (int)uVar19;
  while (uVar18 = local_c8, uVar17 != 0xffffffff) {
    lVar16 = *(longlong *)(param_1 + 0xe10);
    lVar13 = (longlong)(int)uVar17 * 0x40;
    puVar20 = (undefined8 *)(lVar3 + 0x778 + lVar13);
    uVar8 = puVar20[1];
    *(undefined8 *)(lVar16 + lVar13) = *puVar20;
    ((undefined8 *)(lVar16 + lVar13))[1] = uVar8;
    puVar1 = (undefined8 *)(lVar3 + 0x788 + lVar13);
    uVar8 = puVar1[1];
    puVar20 = (undefined8 *)(lVar16 + 0x10 + lVar13);
    *puVar20 = *puVar1;
    puVar20[1] = uVar8;
    puVar1 = (undefined8 *)(lVar3 + 0x798 + lVar13);
    uVar8 = puVar1[1];
    puVar20 = (undefined8 *)(lVar16 + 0x20 + lVar13);
    *puVar20 = *puVar1;
    puVar20[1] = uVar8;
    puVar1 = (undefined8 *)(lVar3 + 0x7a8 + lVar13);
    uVar8 = puVar1[1];
    puVar20 = (undefined8 *)(lVar16 + 0x30 + lVar13);
    *puVar20 = *puVar1;
    puVar20[1] = uVar8;
    FUN_18001ce18(param_1,uVar17);
    uVar19 = 0;
    if (local_d0 != 0) {
      for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
      }
    }
    if (local_d0 == 0) {
      do {
        uVar18 = uVar18 + 0x40;
        local_c8 = uVar18;
        if (0x109 < uVar18) goto LAB_18001c62e;
        local_d0 = ((ulonglong *)(lVar3 + 0xacb0))[uVar18 >> 6];
        uVar19 = 0;
        if (local_d0 != 0) {
          for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
          }
        }
      } while (local_d0 == 0);
    }
    pbVar4 = (byte *)((longlong)&local_d0 + ((longlong)(uVar19 & 0xffffffff) >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar19 & 7));
    uVar17 = local_c8 + (int)uVar19;
  }
LAB_18001c62e:
  if (*(char *)(lVar3 + 0xace9) != '\0') {
    uVar8 = *(undefined8 *)(lVar3 + 0x4a00);
    *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(lVar3 + 0x49f8);
    *(undefined8 *)(param_1 + 0x2dc) = uVar8;
    uVar8 = *(undefined8 *)(lVar3 + 0x4a10);
    *(undefined8 *)(param_1 + 0x2e4) = *(undefined8 *)(lVar3 + 0x4a08);
    *(undefined8 *)(param_1 + 0x2ec) = uVar8;
    uVar5 = *(undefined4 *)(lVar3 + 0x4a1c);
    uVar6 = *(undefined4 *)(lVar3 + 0x4a20);
    uVar7 = *(undefined4 *)(lVar3 + 0x4a24);
    *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(lVar3 + 0x4a18);
    *(undefined4 *)(param_1 + 0x2f8) = uVar5;
    *(undefined4 *)(param_1 + 0x2fc) = uVar6;
    *(undefined4 *)(param_1 + 0x300) = uVar7;
    uVar5 = *(undefined4 *)(lVar3 + 0x4a2c);
    uVar6 = *(undefined4 *)(lVar3 + 0x4a30);
    uVar7 = *(undefined4 *)(lVar3 + 0x4a34);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(lVar3 + 0x4a28);
    *(undefined4 *)(param_1 + 0x308) = uVar5;
    *(undefined4 *)(param_1 + 0x30c) = uVar6;
    *(undefined4 *)(param_1 + 0x310) = uVar7;
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(lVar3 + 19000);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb8))();
  }
  if (*(int *)(lVar3 + 0x4ac8) == 0) goto LAB_18001c766;
  uVar17 = 0;
  if (*(int *)(lVar3 + 0x4ac8) == 0) goto LAB_18001c74d;
LAB_18001c6a0:
  plVar21 = (longlong *)(param_1 + 0x318);
  lVar16 = *(longlong *)(lVar3 + 0x4ac0);
  uVar19 = (ulonglong)uVar17 << 7;
  puVar14 = (uint *)((uVar19 | 8) + lVar16);
  if (puVar14 != (uint *)0x0) {
    uVar18 = *puVar14;
    puVar20 = (undefined8 *)((uVar19 | 0xc) + lVar16);
    local_res20[0] = uVar18;
    if (*(char *)(lVar16 + (uVar19 | 0x79)) != '\0') {
      FUN_18001d790(plVar21,local_res20,puVar20);
      pfVar10 = FUN_18001e730(plVar21,local_b8,(longlong)puVar20);
      FUN_18001d6a0((longlong *)(param_1 + 0x330),local_res20,(undefined8 *)pfVar10);
    }
    uVar2 = *(uint *)(param_1 + 0x360);
    if (uVar2 != 0) {
      uVar15 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x358) + uVar15 * 4) == uVar18) {
          cVar9 = *(char *)((uVar19 | 0x78) + lVar16);
          if ((int)uVar15 == -1) goto LAB_18001c73e;
          if (cVar9 == '\0') {
            FUN_18001bc98(param_1,uVar18);
            goto LAB_18001c74d;
          }
          if (*(char *)(lVar16 + (uVar19 | 0x79)) == '\0') goto LAB_18001c74d;
          uVar19 = 0;
          goto LAB_18001c7d6;
        }
        uVar12 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar12;
      } while (uVar12 < uVar2);
    }
    cVar9 = *(char *)((uVar19 | 0x78) + lVar16);
LAB_18001c73e:
    if (cVar9 != '\0') {
      FUN_18001bbd0(param_1,uVar18);
    }
  }
  goto LAB_18001c74d;
code_r0x00018001c480:
  local_d0 = *(ulonglong *)(lVar3 + 0xac88 + (ulonglong)(local_c8 >> 6) * 8);
  goto LAB_18001c48e;
  while (uVar19 = (ulonglong)(iVar11 + 1U), iVar11 + 1U < uVar2) {
LAB_18001c7d6:
    iVar11 = (int)uVar19;
    if (*(uint *)(*(longlong *)(param_1 + 0x358) + uVar19 * 4) == uVar18) {
      if ((iVar11 != -1) && (iVar11 < 8)) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0xc0))
                  (*(longlong **)(param_1 + 0x28),uVar19,puVar20);
      }
      break;
    }
  }
LAB_18001c74d:
  uVar17 = uVar17 + 1;
  if (*(uint *)(lVar3 + 0x4ac8) <= uVar17) {
LAB_18001c766:
    if (*(char *)(lVar3 + 0xace8) != '\0') {
      uVar5 = *(undefined4 *)(lVar3 + 0x4a40);
      uVar6 = *(undefined4 *)(lVar3 + 0x4a44);
      uVar7 = *(undefined4 *)(lVar3 + 0x4a48);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar3 + 0x4a3c);
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
      *(undefined4 *)(param_1 + 0x60) = uVar6;
      *(undefined4 *)(param_1 + 100) = uVar7;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar3 + 0x4a4c);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))();
    }
    local_d0 = *(ulonglong *)(lVar3 + 0xace0);
    local_c8 = 0;
    while( true ) {
      uVar19 = 0;
      if (local_d0 != 0) {
        for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
        }
      }
      if (local_d0 != 0) break;
      local_c8 = local_c8 + 0x40;
      if (5 < local_c8) {
        return 0;
      }
      local_d0 = *(ulonglong *)(lVar3 + 0xace0 + (ulonglong)(local_c8 >> 6) * 8);
    }
    pbVar4 = (byte *)((longlong)&local_d0 + ((longlong)(uVar19 & 0xffffffff) >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar19 & 7));
    iVar11 = local_c8 + (int)uVar19;
    do {
      uVar17 = local_c8;
      if (iVar11 == -1) {
        return 0;
      }
      lVar16 = 0;
      do {
        *(undefined4 *)((longlong)iVar11 * 0x10 + param_1 + 0x418 + lVar16 * 4) =
             *(undefined4 *)((longlong)iVar11 * 0x10 + lVar3 + 0x4a54 + lVar16 * 4);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 4);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))();
      uVar19 = 0;
      if (local_d0 != 0) {
        for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
        }
      }
      if (local_d0 == 0) {
        do {
          uVar17 = uVar17 + 0x40;
          local_c8 = uVar17;
          if (5 < uVar17) {
            return 0;
          }
          local_d0 = ((ulonglong *)(lVar3 + 0xace0))[uVar17 >> 6];
          uVar19 = 0;
          if (local_d0 != 0) {
            for (; (local_d0 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
            }
          }
        } while (local_d0 == 0);
      }
      pbVar4 = (byte *)((longlong)&local_d0 + ((longlong)(uVar19 & 0xffffffff) >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar19 & 7));
      iVar11 = local_c8 + (int)uVar19;
    } while( true );
  }
  goto LAB_18001c6a0;
}

