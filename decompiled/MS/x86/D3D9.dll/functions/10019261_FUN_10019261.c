/*
 * FUN_10019261 at 10019261
 * undefined4 __thiscall FUN_10019261(void * this, uint param_1)
 * Address ranges: 10019261-100195cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10019261(void *this,uint param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint local_24;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  void *local_14;
  void *local_10;
  uint local_c;
  void *local_8;
  
  local_8 = this;
  if ((((*(char *)((int)this + 0x3c4) != '\0') || (param_1 == 0)) ||
      (*(uint *)((int)this + 0x3b8) < param_1)) ||
     (iVar1 = *(int *)(*(int *)((int)this + 0x3b4) + -4 + param_1 * 4), iVar1 == 0)) {
    return 0x8876086c;
  }
  local_24 = *(uint *)(iVar1 + 0xaba8);
  local_20 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 != 0) break;
    local_20 = local_20 + 0x20;
    if (0xd1 < local_20) goto LAB_10019331;
    local_24 = *(uint *)(iVar1 + 0xaba8 + (local_20 >> 5) * 4);
  }
  pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
  iVar3 = uVar5 + local_20;
  while (iVar3 != -1) {
    *(undefined4 *)(iVar1 + 8 + iVar3 * 4) = *(undefined4 *)((int)this + iVar3 * 4 + 0x430);
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 == 0) {
      do {
        local_20 = local_20 + 0x20;
        if (0xd1 < local_20) goto LAB_10019331;
        local_24 = ((uint *)(iVar1 + 0xaba8))[local_20 >> 5];
        uVar5 = 0;
        if (local_24 != 0) {
          for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_24 == 0);
    }
    pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    iVar3 = local_20 + uVar5;
  }
LAB_10019331:
  local_24 = *(uint *)(iVar1 + 0xabc4);
  local_20 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 != 0) goto LAB_100193aa;
    local_20 = local_20 + 0x20;
    if (0x107 < local_20) break;
    local_24 = *(uint *)(iVar1 + 0xabc4 + (local_20 >> 5) * 4);
  }
LAB_100193b9:
  local_24 = *(uint *)(iVar1 + 0xabe8);
  local_20 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 != 0) break;
    local_20 = local_20 + 0x20;
    if (0x109 < local_20) goto LAB_1001944c;
    local_24 = *(uint *)(iVar1 + 0xabe8 + (local_20 >> 5) * 4);
  }
  pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
  iVar3 = local_20 + uVar5;
  while (iVar3 != -1) {
    puVar8 = (undefined4 *)(*(int *)((int)this + 0xd80) + iVar3 * 0x40);
    puVar9 = (undefined4 *)(iVar1 + 0x770 + iVar3 * 0x40);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 == 0) {
      do {
        local_20 = local_20 + 0x20;
        if (0x109 < local_20) goto LAB_1001944c;
        local_24 = ((uint *)(iVar1 + 0xabe8))[local_20 >> 5];
        uVar5 = 0;
        if (local_24 != 0) {
          for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_24 == 0);
    }
    pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    iVar3 = uVar5 + local_20;
  }
LAB_1001944c:
  if (*(char *)(iVar1 + 0xac15) != '\0') {
    puVar8 = (undefined4 *)((int)this + 0x2a8);
    puVar9 = (undefined4 *)(iVar1 + 0x49f0);
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  local_c = 0;
  if (*(int *)(iVar1 + 0x4ab4) != 0) {
    local_10 = (void *)((int)this + 0x2ec);
    local_14 = (void *)((int)this + 0x318);
    uVar5 = 0;
    if (*(int *)(iVar1 + 0x4ab4) == 0) goto LAB_100194e2;
    do {
      uVar5 = local_c;
      puVar7 = (uint *)((local_c << 7 | 8) + *(int *)(iVar1 + 0x4ab0));
      if (puVar7 != (uint *)0x0) {
        local_1c = puVar7 + 1;
        param_1 = *puVar7;
        local_18 = (uint *)FUN_10009dee(local_10,&param_1);
        if (local_18 != (uint *)0x0) {
          uVar4 = FUN_100086bd(local_14,(int *)&param_1);
          *(bool *)(puVar7 + 0x1c) = uVar4 != 0xffffffff;
          if (*(char *)((int)puVar7 + 0x71) != '\0') {
            puVar7 = local_18;
            for (iVar3 = 0x1b; uVar5 = local_c, iVar3 != 0; iVar3 = iVar3 + -1) {
              *local_1c = *puVar7;
              puVar7 = puVar7 + 1;
              local_1c = local_1c + 1;
            }
          }
        }
      }
LAB_100194e2:
      local_c = uVar5 + 1;
    } while (uVar5 + 1 < *(uint *)(iVar1 + 0x4ab4));
  }
  if (*(char *)(iVar1 + 0xac14) != '\0') {
    puVar8 = (undefined4 *)((int)local_8 + 0x2c);
    puVar9 = (undefined4 *)(iVar1 + 0x4a34);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  local_24 = *(uint *)(iVar1 + 0xac10);
  local_20 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 != 0) break;
    local_20 = local_20 + 0x20;
    if (5 < local_20) {
      return 0;
    }
    local_24 = *(uint *)(iVar1 + 0xac10 + (local_20 >> 5) * 4);
  }
  pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
  iVar3 = local_20 + uVar5;
  do {
    if (iVar3 == -1) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x4a4c + iVar3 * 0x10) =
         *(undefined4 *)((int)local_8 + iVar3 * 0x10 + 0x3d0);
    *(undefined4 *)(iVar1 + 0x4a50 + iVar3 * 0x10) =
         *(undefined4 *)((int)local_8 + iVar3 * 0x10 + 0x3d4);
    *(undefined4 *)(iVar1 + 0x4a54 + iVar3 * 0x10) =
         *(undefined4 *)((int)local_8 + iVar3 * 0x10 + 0x3d8);
    *(undefined4 *)(iVar1 + 0x4a58 + iVar3 * 0x10) =
         *(undefined4 *)((int)local_8 + iVar3 * 0x10 + 0x3dc);
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 == 0) {
      do {
        local_20 = local_20 + 0x20;
        if (5 < local_20) {
          return 0;
        }
        local_24 = ((uint *)(iVar1 + 0xac10))[local_20 >> 5];
        uVar5 = 0;
        if (local_24 != 0) {
          for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_24 == 0);
    }
    pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    iVar3 = local_20 + uVar5;
  } while( true );
LAB_100193aa:
  while( true ) {
    pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    iVar3 = uVar5 + local_20;
    if (iVar3 == -1) break;
    iVar3 = (iVar3 / 0x21) * 0x21 + iVar3 % 0x21;
    *(undefined4 *)(iVar1 + 0x350 + iVar3 * 4) = *(undefined4 *)((int)local_8 + iVar3 * 4 + 0x778);
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    this = local_8;
    if (local_24 == 0) {
      do {
        local_20 = local_20 + 0x20;
        if (0x107 < local_20) goto LAB_100193b9;
        local_24 = ((uint *)(iVar1 + 0xabc4))[local_20 >> 5];
        uVar5 = 0;
        if (local_24 != 0) {
          for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_24 == 0);
    }
  }
  goto LAB_100193b9;
}

