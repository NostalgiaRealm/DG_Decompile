/*
 * FUN_1000715b at 1000715b
 * undefined4 __thiscall FUN_1000715b(void * this, uint param_1)
 * Address ranges: 1000715b-10007572
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000715b(void *this,uint param_1)

{
  byte *pbVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint local_b8;
  uint local_b4;
  char cStack_ad;
  uint local_ac;
  uint *local_a8;
  void *local_a4;
  uint uStack_a0;
  uint local_9c;
  int local_98;
  uint *local_94;
  float afStack_90 [35];
  
  uVar6 = 0x88760835;
  local_a4 = this;
  if (((*(char *)((int)this + 0x224) == '\0') && (uVar6 = 0x88760834, param_1 != 0)) &&
     (param_1 <= *(uint *)((int)this + 0x218))) {
    iVar8 = *(int *)(*(int *)((int)this + 0x214) + -4 + param_1 * 4);
    local_98 = iVar8;
    if (iVar8 != 0) {
      local_b8 = *(uint *)(iVar8 + 0xa30);
      local_b4 = 0;
      while( true ) {
        uVar7 = 0;
        if (local_b8 != 0) {
          for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        if (local_b8 != 0) goto LAB_1000727e;
        local_b4 = local_b4 + 0x20;
        if (199 < local_b4) break;
        local_b8 = *(uint *)(iVar8 + 0xa30 + (local_b4 >> 5) * 4);
      }
      goto LAB_10007292;
    }
  }
  return uVar6;
LAB_1000727e:
  while( true ) {
    pbVar1 = (byte *)((int)&local_b8 + ((int)uVar7 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar7 & 7));
    iVar4 = uVar7 + local_b4;
    if (iVar4 == -1) break;
    local_ac = iVar4 / 0x19;
    iVar4 = iVar4 % 0x19;
    iVar3 = local_ac * 0x19 + iVar4;
    local_a8 = *(uint **)(iVar8 + 0x26c + iVar3 * 4);
    *(uint **)((int)this + iVar3 * 4 + 0x4f4) = local_a8;
    if (((iVar4 == 1) || (iVar4 == 2)) || ((iVar4 == 4 || (iVar4 == 5)))) {
      *(uint *)((int)this + 0x934) = *(uint *)((int)this + 0x934) | 1 << (local_ac & 0x1f);
    }
    else {
      FUN_100060dd(this,local_ac,iVar4,(uint)local_a8);
    }
    uVar7 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    if (local_b8 == 0) {
      do {
        local_b4 = local_b4 + 0x20;
        if (199 < local_b4) goto LAB_10007292;
        local_b8 = ((uint *)(iVar8 + 0xa30))[local_b4 >> 5];
        uVar7 = 0;
        if (local_b8 != 0) {
          for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      } while (local_b8 == 0);
    }
  }
LAB_10007292:
  local_b8 = *(uint *)(iVar8 + 0xa4c);
  local_b4 = 0;
  while( true ) {
    uVar7 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    iVar4 = iVar8;
    if (local_b8 != 0) break;
    local_b4 = local_b4 + 0x20;
    if (0xd < local_b4) goto LAB_1000732f;
    local_b8 = *(uint *)(iVar8 + 0xa4c + (local_b4 >> 5) * 4);
  }
  pbVar1 = (byte *)((int)&local_b8 + ((int)uVar7 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (uVar7 & 7));
  uVar7 = local_b4 + uVar7;
  if (uVar7 != 0xffffffff) {
    do {
      FUN_10007a92(this,uVar7,(undefined4 *)(uVar7 * 0x40 + iVar8 + 0x58c));
      uVar7 = 0;
      if (local_b8 != 0) {
        for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      if (local_b8 == 0) {
        do {
          local_b4 = local_b4 + 0x20;
          iVar4 = local_98;
          if (0xd < local_b4) goto LAB_1000732f;
          local_b8 = ((uint *)(iVar8 + 0xa4c))[local_b4 >> 5];
          uVar7 = 0;
          if (local_b8 != 0) {
            for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
            }
          }
        } while (local_b8 == 0);
      }
      pbVar1 = (byte *)((int)&local_b8 + ((int)uVar7 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar7 & 7));
      uVar7 = uVar7 + local_b4;
      iVar4 = local_98;
    } while (uVar7 != 0xffffffff);
  }
LAB_1000732f:
  pvVar2 = local_a4;
  if (*(char *)(iVar4 + 0xa59) != '\0') {
    puVar9 = (undefined4 *)(iVar4 + 0x90c);
    puVar10 = (undefined4 *)((int)this + 0x104);
    for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    (**(code **)(**(int **)((int)local_a4 + 0x14) + 100))((undefined4 *)((int)this + 0x104));
    this = pvVar2;
    iVar4 = local_98;
  }
  local_ac = 0;
  if (*(int *)(iVar4 + 0x9d4) != 0) {
    if (*(int *)(iVar4 + 0x9d4) == 0) goto LAB_10007446;
    do {
      local_94 = (uint *)((local_ac << 7 | 8) + *(int *)(iVar4 + 0x9d0));
      if (local_94 != (uint *)0x0) {
        uStack_a0 = *local_94;
        local_a8 = local_94 + 1;
        local_9c = uStack_a0;
        if (*(char *)((int)local_94 + 0x71) != '\0') {
          FUN_100082ab((void *)((int)this + 0x14c),&uStack_a0,local_a8);
          pfVar5 = FUN_10008ec8(afStack_90,(int *)local_a8);
          FUN_100081ef((void *)((int)this + 0x15c),&uStack_a0,pfVar5);
        }
        cStack_ad = (char)local_94[0x1c];
        uVar7 = FUN_100081c6((void *)((int)this + 0x178),(int *)&uStack_a0);
        if (uVar7 == 0xffffffff) {
          if (cStack_ad != '\0') {
            FUN_10006691(this,local_9c);
          }
        }
        else if (cStack_ad == '\0') {
          FUN_100066f5(this,local_9c);
        }
        else if (*(char *)((int)local_94 + 0x71) != '\0') {
          FUN_100067bc(this,local_9c,local_a8);
        }
      }
LAB_10007446:
      local_ac = local_ac + 1;
    } while (local_ac < *(uint *)(iVar4 + 0x9d4));
  }
  pvVar2 = local_a4;
  if (*(char *)(iVar4 + 0xa58) != '\0') {
    puVar9 = (undefined4 *)(iVar4 + 0x954);
    puVar10 = (undefined4 *)((int)this + 0x2c);
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    (**(code **)(**(int **)((int)local_a4 + 0x14) + 0x44))((undefined4 *)((int)this + 0x2c));
    this = pvVar2;
    iVar4 = local_98;
  }
  local_b8 = *(uint *)(iVar4 + 0xa54);
  local_b4 = 0;
  while( true ) {
    uVar7 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    if (local_b8 != 0) break;
    local_b4 = local_b4 + 0x20;
    if (5 < local_b4) {
      return 0;
    }
    local_b8 = *(uint *)(iVar4 + 0xa54 + (local_b4 >> 5) * 4);
  }
  pbVar1 = (byte *)((int)&local_b8 + ((int)uVar7 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (uVar7 & 7));
  local_a4 = (void *)(local_b4 + uVar7);
  do {
    if (local_a4 == (void *)0xffffffff) {
      return 0;
    }
    iVar8 = (int)local_a4 * 0x10;
    *(undefined4 *)((int)this + iVar8 + 0x230) = *(undefined4 *)(iVar4 + 0x96c + iVar8);
    *(undefined4 *)((int)this + iVar8 + 0x234) = *(undefined4 *)(iVar4 + 0x970 + iVar8);
    *(undefined4 *)((int)this + iVar8 + 0x238) = *(undefined4 *)(iVar4 + 0x974 + iVar8);
    *(undefined4 *)((int)this + iVar8 + 0x23c) = *(undefined4 *)(iVar4 + 0x978 + iVar8);
    (**(code **)(**(int **)((int)this + 0x14) + 0x60))(local_a4,iVar8 + 0x230 + (int)this);
    uVar7 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    if (local_b8 == 0) {
      do {
        local_b4 = local_b4 + 0x20;
        if (5 < local_b4) {
          return 0;
        }
        local_b8 = ((uint *)(iVar4 + 0xa54))[local_b4 >> 5];
        uVar7 = 0;
        if (local_b8 != 0) {
          for (; (local_b8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      } while (local_b8 == 0);
    }
    pbVar1 = (byte *)((int)&local_b8 + ((int)uVar7 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar7 & 7));
    local_a4 = (void *)(local_b4 + uVar7);
  } while( true );
}

