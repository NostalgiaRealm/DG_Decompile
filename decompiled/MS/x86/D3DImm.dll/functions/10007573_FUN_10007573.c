/*
 * FUN_10007573 at 10007573
 * undefined4 __thiscall FUN_10007573(void * this, uint param_1)
 * Address ranges: 10007573-100078da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10007573(void *this,uint param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint local_24;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  void *local_14;
  void *local_10;
  uint local_c;
  void *local_8;
  
  uVar6 = 0x88760835;
  local_8 = this;
  if ((((*(char *)((int)this + 0x224) != '\0') || (uVar6 = 0x88760834, param_1 == 0)) ||
      (*(uint *)((int)this + 0x218) < param_1)) ||
     (iVar1 = *(int *)(*(int *)((int)this + 0x214) + -4 + param_1 * 4), iVar1 == 0)) {
    return uVar6;
  }
  local_24 = *(uint *)(iVar1 + 0xa1c);
  local_20 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 != 0) break;
    local_20 = local_20 + 0x20;
    if (0x98 < local_20) goto LAB_10007644;
    local_24 = *(uint *)(iVar1 + 0xa1c + (local_20 >> 5) * 4);
  }
  pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
  iVar3 = uVar5 + local_20;
  while (iVar3 != -1) {
    *(undefined4 *)(iVar1 + 8 + iVar3 * 4) = *(undefined4 *)((int)this + iVar3 * 4 + 0x290);
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 == 0) {
      do {
        local_20 = local_20 + 0x20;
        if (0x98 < local_20) goto LAB_10007644;
        local_24 = ((uint *)(iVar1 + 0xa1c))[local_20 >> 5];
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
LAB_10007644:
  local_24 = *(uint *)(iVar1 + 0xa30);
  local_20 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 != 0) goto LAB_100076bd;
    local_20 = local_20 + 0x20;
    if (199 < local_20) break;
    local_24 = *(uint *)(iVar1 + 0xa30 + (local_20 >> 5) * 4);
  }
LAB_100076cc:
  local_24 = *(uint *)(iVar1 + 0xa4c);
  local_20 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 != 0) break;
    local_20 = local_20 + 0x20;
    if (0xd < local_20) goto LAB_1000775a;
    local_24 = *(uint *)(iVar1 + 0xa4c + (local_20 >> 5) * 4);
  }
  pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
  iVar3 = local_20 + uVar5;
  while (iVar3 != -1) {
    puVar9 = (undefined4 *)(*(int *)((int)this + 0x9cc) + iVar3 * 0x40);
    puVar10 = (undefined4 *)(iVar1 + 0x58c + iVar3 * 0x40);
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_24 == 0) {
      do {
        local_20 = local_20 + 0x20;
        if (0xd < local_20) goto LAB_1000775a;
        local_24 = ((uint *)(iVar1 + 0xa4c))[local_20 >> 5];
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
LAB_1000775a:
  if (*(char *)(iVar1 + 0xa59) != '\0') {
    puVar9 = (undefined4 *)((int)this + 0x104);
    puVar10 = (undefined4 *)(iVar1 + 0x90c);
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  local_c = 0;
  if (*(int *)(iVar1 + 0x9d4) != 0) {
    local_10 = (void *)((int)this + 0x14c);
    local_14 = (void *)((int)this + 0x178);
    uVar5 = 0;
    if (*(int *)(iVar1 + 0x9d4) == 0) goto LAB_100077f0;
    do {
      uVar5 = local_c;
      puVar8 = (uint *)((local_c << 7 | 8) + *(int *)(iVar1 + 0x9d0));
      if (puVar8 != (uint *)0x0) {
        local_1c = puVar8 + 1;
        param_1 = *puVar8;
        local_18 = (uint *)FUN_10008271(local_10,&param_1);
        if (local_18 != (uint *)0x0) {
          uVar4 = FUN_100081c6(local_14,(int *)&param_1);
          *(bool *)(puVar8 + 0x1c) = uVar4 != 0xffffffff;
          if (*(char *)((int)puVar8 + 0x71) != '\0') {
            puVar8 = local_18;
            for (iVar3 = 0x1b; uVar5 = local_c, iVar3 != 0; iVar3 = iVar3 + -1) {
              *local_1c = *puVar8;
              puVar8 = puVar8 + 1;
              local_1c = local_1c + 1;
            }
          }
        }
      }
LAB_100077f0:
      local_c = uVar5 + 1;
    } while (uVar5 + 1 < *(uint *)(iVar1 + 0x9d4));
  }
  if (*(char *)(iVar1 + 0xa58) != '\0') {
    puVar9 = (undefined4 *)((int)local_8 + 0x2c);
    puVar10 = (undefined4 *)(iVar1 + 0x954);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  local_24 = *(uint *)(iVar1 + 0xa54);
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
    local_24 = *(uint *)(iVar1 + 0xa54 + (local_20 >> 5) * 4);
  }
  pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
  iVar3 = local_20 + uVar5;
  do {
    if (iVar3 == -1) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x96c + iVar3 * 0x10) =
         *(undefined4 *)((int)local_8 + iVar3 * 0x10 + 0x230);
    *(undefined4 *)(iVar1 + 0x970 + iVar3 * 0x10) =
         *(undefined4 *)((int)local_8 + iVar3 * 0x10 + 0x234);
    *(undefined4 *)(iVar1 + 0x974 + iVar3 * 0x10) =
         *(undefined4 *)((int)local_8 + iVar3 * 0x10 + 0x238);
    *(undefined4 *)(iVar1 + 0x978 + iVar3 * 0x10) =
         *(undefined4 *)((int)local_8 + iVar3 * 0x10 + 0x23c);
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
        local_24 = ((uint *)(iVar1 + 0xa54))[local_20 >> 5];
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
LAB_100076bd:
  while( true ) {
    pbVar2 = (byte *)((int)&local_24 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    iVar3 = uVar5 + local_20;
    if (iVar3 == -1) break;
    iVar3 = (iVar3 / 0x19) * 0x19 + iVar3 % 0x19;
    *(undefined4 *)(iVar1 + 0x26c + iVar3 * 4) = *(undefined4 *)((int)local_8 + iVar3 * 4 + 0x4f4);
    uVar5 = 0;
    if (local_24 != 0) {
      for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    this = local_8;
    if (local_24 == 0) {
      do {
        local_20 = local_20 + 0x20;
        if (199 < local_20) goto LAB_100076cc;
        local_24 = ((uint *)(iVar1 + 0xa30))[local_20 >> 5];
        uVar5 = 0;
        if (local_24 != 0) {
          for (; (local_24 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_24 == 0);
    }
  }
  goto LAB_100076cc;
}

