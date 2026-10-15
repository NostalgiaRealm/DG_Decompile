/*
 * FUN_10014d09 at 10014d09
 * undefined4 __thiscall FUN_10014d09(void * this, uint param_1)
 * Address ranges: 10014d09-10015124
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10014d09(void *this,uint param_1)

{
  byte *pbVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
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
  
  local_a4 = this;
  if (((*(char *)((int)this + 0x220) == '\0') && (param_1 != 0)) &&
     (param_1 <= *(uint *)((int)this + 0x214))) {
    iVar7 = *(int *)(*(int *)((int)this + 0x210) + -4 + param_1 * 4);
    local_98 = iVar7;
    if (iVar7 != 0) {
      local_b8 = *(uint *)(iVar7 + 0x934c);
      local_b4 = 0;
      while( true ) {
        uVar6 = 0;
        if (local_b8 != 0) {
          for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        if (local_b8 != 0) goto LAB_10014e2b;
        local_b4 = local_b4 + 0x20;
        if (0xe7 < local_b4) break;
        local_b8 = *(uint *)(iVar7 + 0x934c + (local_b4 >> 5) * 4);
      }
      goto LAB_10014e3f;
    }
  }
  return 0x8876086c;
LAB_10014e2b:
  while( true ) {
    pbVar1 = (byte *)((int)&local_b8 + ((int)uVar6 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
    iVar4 = uVar6 + local_b4;
    if (iVar4 == -1) break;
    local_ac = iVar4 / 0x1d;
    iVar4 = iVar4 % 0x1d;
    iVar3 = local_ac * 0x1d + iVar4;
    local_a8 = *(uint **)(iVar7 + 0x2c0 + iVar3 * 4);
    *(uint **)((int)this + iVar3 * 4 + 0x544) = local_a8;
    if (((iVar4 == 1) || (iVar4 == 2)) || ((iVar4 == 4 || (iVar4 == 5)))) {
      *(uint *)((int)this + 0xa04) = *(uint *)((int)this + 0xa04) | 1 << (local_ac & 0x1f);
    }
    else {
      FUN_10013c31(this,local_ac,iVar4,(uint)local_a8);
    }
    uVar6 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_b8 == 0) {
      do {
        local_b4 = local_b4 + 0x20;
        if (0xe7 < local_b4) goto LAB_10014e3f;
        local_b8 = ((uint *)(iVar7 + 0x934c))[local_b4 >> 5];
        uVar6 = 0;
        if (local_b8 != 0) {
          for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      } while (local_b8 == 0);
    }
  }
LAB_10014e3f:
  local_b8 = *(uint *)(iVar7 + 0x936c);
  local_b4 = 0;
  while( true ) {
    uVar6 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    iVar4 = iVar7;
    if (local_b8 != 0) break;
    local_b4 = local_b4 + 0x20;
    if (0x109 < local_b4) goto LAB_10014ee1;
    local_b8 = *(uint *)(iVar7 + 0x936c + (local_b4 >> 5) * 4);
  }
  pbVar1 = (byte *)((int)&local_b8 + ((int)uVar6 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
  uVar6 = local_b4 + uVar6;
  if (uVar6 != 0xffffffff) {
    do {
      FUN_10015650(this,uVar6,(undefined4 *)(uVar6 * 0x40 + iVar7 + 0x660));
      uVar6 = 0;
      if (local_b8 != 0) {
        for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (local_b8 == 0) {
        do {
          local_b4 = local_b4 + 0x20;
          iVar4 = local_98;
          if (0x109 < local_b4) goto LAB_10014ee1;
          local_b8 = ((uint *)(iVar7 + 0x936c))[local_b4 >> 5];
          uVar6 = 0;
          if (local_b8 != 0) {
            for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
        } while (local_b8 == 0);
      }
      pbVar1 = (byte *)((int)&local_b8 + ((int)uVar6 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
      uVar6 = uVar6 + local_b4;
      iVar4 = local_98;
    } while (uVar6 != 0xffffffff);
  }
LAB_10014ee1:
  pvVar2 = local_a4;
  if (*(char *)(iVar4 + 0x9399) != '\0') {
    puVar8 = (undefined4 *)(iVar4 + 0x48e0);
    puVar9 = (undefined4 *)((int)this + 0x104);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    (**(code **)(**(int **)((int)local_a4 + 0x14) + 0x5c))((undefined4 *)((int)this + 0x104));
    this = pvVar2;
    iVar4 = local_98;
  }
  local_ac = 0;
  if (*(int *)(iVar4 + 0x49a4) != 0) {
    if (*(int *)(iVar4 + 0x49a4) == 0) goto LAB_10014ff8;
    do {
      local_94 = (uint *)((local_ac << 7 | 8) + *(int *)(iVar4 + 0x49a0));
      if (local_94 != (uint *)0x0) {
        uStack_a0 = *local_94;
        local_a8 = local_94 + 1;
        local_9c = uStack_a0;
        if (*(char *)((int)local_94 + 0x71) != '\0') {
          FUN_10015dea((void *)((int)this + 0x148),&uStack_a0,local_a8);
          pfVar5 = FUN_100168b4(afStack_90,(int)local_a8);
          FUN_10015d82((void *)((int)this + 0x158),&uStack_a0,pfVar5);
        }
        cStack_ad = (char)local_94[0x1c];
        uVar6 = FUN_10007b6a((void *)((int)this + 0x174),(int *)&uStack_a0);
        if (uVar6 == 0xffffffff) {
          if (cStack_ad != '\0') {
            FUN_10014232(this,local_9c);
          }
        }
        else if (cStack_ad == '\0') {
          FUN_10014296(this,local_9c);
        }
        else if (*(char *)((int)local_94 + 0x71) != '\0') {
          FUN_1001435d(this,local_9c,local_a8);
        }
      }
LAB_10014ff8:
      local_ac = local_ac + 1;
    } while (local_ac < *(uint *)(iVar4 + 0x49a4));
  }
  pvVar2 = local_a4;
  if (*(char *)(iVar4 + 0x9398) != '\0') {
    puVar8 = (undefined4 *)(iVar4 + 0x4924);
    puVar9 = (undefined4 *)((int)this + 0x2c);
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    (**(code **)(**(int **)((int)local_a4 + 0x14) + 0x3c))((undefined4 *)((int)this + 0x2c));
    this = pvVar2;
    iVar4 = local_98;
  }
  local_b8 = *(uint *)(iVar4 + 0x9394);
  local_b4 = 0;
  while( true ) {
    uVar6 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_b8 != 0) break;
    local_b4 = local_b4 + 0x20;
    if (5 < local_b4) {
      return 0;
    }
    local_b8 = *(uint *)(iVar4 + 0x9394 + (local_b4 >> 5) * 4);
  }
  pbVar1 = (byte *)((int)&local_b8 + ((int)uVar6 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
  local_a4 = (void *)(local_b4 + uVar6);
  do {
    if (local_a4 == (void *)0xffffffff) {
      return 0;
    }
    iVar7 = (int)local_a4 * 0x10;
    *(undefined4 *)((int)this + iVar7 + 0x22c) = *(undefined4 *)(iVar4 + 0x493c + iVar7);
    *(undefined4 *)((int)this + iVar7 + 0x230) = *(undefined4 *)(iVar4 + 0x4940 + iVar7);
    *(undefined4 *)((int)this + iVar7 + 0x234) = *(undefined4 *)(iVar4 + 0x4944 + iVar7);
    *(undefined4 *)((int)this + iVar7 + 0x238) = *(undefined4 *)(iVar4 + 0x4948 + iVar7);
    (**(code **)(**(int **)((int)this + 0x14) + 0x58))(local_a4,iVar7 + 0x22c + (int)this);
    uVar6 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_b8 == 0) {
      do {
        local_b4 = local_b4 + 0x20;
        if (5 < local_b4) {
          return 0;
        }
        local_b8 = ((uint *)(iVar4 + 0x9394))[local_b4 >> 5];
        uVar6 = 0;
        if (local_b8 != 0) {
          for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      } while (local_b8 == 0);
    }
    pbVar1 = (byte *)((int)&local_b8 + ((int)uVar6 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
    local_a4 = (void *)(local_b4 + uVar6);
  } while( true );
}

