/*
 * FUN_10018e45 at 10018e45
 * undefined4 __thiscall FUN_10018e45(void * this, uint param_1)
 * Address ranges: 10018e45-10019260
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10018e45(void *this,uint param_1)

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
  if (((*(char *)((int)this + 0x3c4) == '\0') && (param_1 != 0)) &&
     (param_1 <= *(uint *)((int)this + 0x3b8))) {
    iVar7 = *(int *)(*(int *)((int)this + 0x3b4) + -4 + param_1 * 4);
    local_98 = iVar7;
    if (iVar7 != 0) {
      local_b8 = *(uint *)(iVar7 + 0xabc4);
      local_b4 = 0;
      while( true ) {
        uVar6 = 0;
        if (local_b8 != 0) {
          for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        if (local_b8 != 0) goto LAB_10018f67;
        local_b4 = local_b4 + 0x20;
        if (0x107 < local_b4) break;
        local_b8 = *(uint *)(iVar7 + 0xabc4 + (local_b4 >> 5) * 4);
      }
      goto LAB_10018f7b;
    }
  }
  return 0x8876086c;
LAB_10018f67:
  while( true ) {
    pbVar1 = (byte *)((int)&local_b8 + ((int)uVar6 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
    iVar4 = uVar6 + local_b4;
    if (iVar4 == -1) break;
    local_ac = iVar4 / 0x21;
    iVar4 = iVar4 % 0x21;
    iVar3 = local_ac * 0x21 + iVar4;
    local_a8 = *(uint **)(iVar7 + 0x350 + iVar3 * 4);
    *(uint **)((int)this + iVar3 * 4 + 0x778) = local_a8;
    if (((iVar4 == 1) || (iVar4 == 2)) || ((iVar4 == 4 || (iVar4 == 5)))) {
      *(uint *)((int)this + 0xcc8) = *(uint *)((int)this + 0xcc8) | 1 << (local_ac & 0x1f);
    }
    else {
      FUN_10017cb4(this,local_ac,iVar4,(uint)local_a8);
    }
    uVar6 = 0;
    if (local_b8 != 0) {
      for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_b8 == 0) {
      do {
        local_b4 = local_b4 + 0x20;
        if (0x107 < local_b4) goto LAB_10018f7b;
        local_b8 = ((uint *)(iVar7 + 0xabc4))[local_b4 >> 5];
        uVar6 = 0;
        if (local_b8 != 0) {
          for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      } while (local_b8 == 0);
    }
  }
LAB_10018f7b:
  local_b8 = *(uint *)(iVar7 + 0xabe8);
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
    if (0x109 < local_b4) goto LAB_1001901d;
    local_b8 = *(uint *)(iVar7 + 0xabe8 + (local_b4 >> 5) * 4);
  }
  pbVar1 = (byte *)((int)&local_b8 + ((int)uVar6 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
  uVar6 = local_b4 + uVar6;
  if (uVar6 != 0xffffffff) {
    do {
      FUN_10019784(this,uVar6,(undefined4 *)(uVar6 * 0x40 + iVar7 + 0x770));
      uVar6 = 0;
      if (local_b8 != 0) {
        for (; (local_b8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (local_b8 == 0) {
        do {
          local_b4 = local_b4 + 0x20;
          iVar4 = local_98;
          if (0x109 < local_b4) goto LAB_1001901d;
          local_b8 = ((uint *)(iVar7 + 0xabe8))[local_b4 >> 5];
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
LAB_1001901d:
  pvVar2 = local_a4;
  if (*(char *)(iVar4 + 0xac15) != '\0') {
    puVar8 = (undefined4 *)(iVar4 + 0x49f0);
    puVar9 = (undefined4 *)((int)this + 0x2a8);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    (**(code **)(**(int **)((int)local_a4 + 0x14) + 0x5c))((undefined4 *)((int)this + 0x2a8));
    this = pvVar2;
    iVar4 = local_98;
  }
  local_ac = 0;
  if (*(int *)(iVar4 + 0x4ab4) != 0) {
    if (*(int *)(iVar4 + 0x4ab4) == 0) goto LAB_10019134;
    do {
      local_94 = (uint *)((local_ac << 7 | 8) + *(int *)(iVar4 + 0x4ab0));
      if (local_94 != (uint *)0x0) {
        uStack_a0 = *local_94;
        local_a8 = local_94 + 1;
        local_9c = uStack_a0;
        if (*(char *)((int)local_94 + 0x71) != '\0') {
          FUN_10019e48((void *)((int)this + 0x2ec),&uStack_a0,local_a8);
          pfVar5 = FUN_1001a8f4(afStack_90,(int)local_a8);
          FUN_10019de0((void *)((int)this + 0x2fc),&uStack_a0,pfVar5);
        }
        cStack_ad = (char)local_94[0x1c];
        uVar6 = FUN_100086bd((void *)((int)this + 0x318),(int *)&uStack_a0);
        if (uVar6 == 0xffffffff) {
          if (cStack_ad != '\0') {
            FUN_100183af(this,local_9c);
          }
        }
        else if (cStack_ad == '\0') {
          FUN_10018413(this,local_9c);
        }
        else if (*(char *)((int)local_94 + 0x71) != '\0') {
          FUN_100184da(this,local_9c,local_a8);
        }
      }
LAB_10019134:
      local_ac = local_ac + 1;
    } while (local_ac < *(uint *)(iVar4 + 0x4ab4));
  }
  pvVar2 = local_a4;
  if (*(char *)(iVar4 + 0xac14) != '\0') {
    puVar8 = (undefined4 *)(iVar4 + 0x4a34);
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
  local_b8 = *(uint *)(iVar4 + 0xac10);
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
    local_b8 = *(uint *)(iVar4 + 0xac10 + (local_b4 >> 5) * 4);
  }
  pbVar1 = (byte *)((int)&local_b8 + ((int)uVar6 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
  local_a4 = (void *)(local_b4 + uVar6);
  do {
    if (local_a4 == (void *)0xffffffff) {
      return 0;
    }
    iVar7 = (int)local_a4 * 0x10;
    *(undefined4 *)((int)this + iVar7 + 0x3d0) = *(undefined4 *)(iVar4 + 0x4a4c + iVar7);
    *(undefined4 *)((int)this + iVar7 + 0x3d4) = *(undefined4 *)(iVar4 + 0x4a50 + iVar7);
    *(undefined4 *)((int)this + iVar7 + 0x3d8) = *(undefined4 *)(iVar4 + 0x4a54 + iVar7);
    *(undefined4 *)((int)this + iVar7 + 0x3dc) = *(undefined4 *)(iVar4 + 0x4a58 + iVar7);
    (**(code **)(**(int **)((int)this + 0x14) + 0x58))(local_a4,iVar7 + 0x3d0 + (int)this);
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
        local_b8 = ((uint *)(iVar4 + 0xac10))[local_b4 >> 5];
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

