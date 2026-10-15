/*
 * FUN_10092cd9 at 10092cd9
 * int __thiscall FUN_10092cd9(void * this, uint param_1, int param_2)
 * Address ranges: 10092cd9-100930d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10092cd9(void *this,uint param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  byte *pbVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  ushort in_FPUControlWord;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  void *local_8;
  
  iVar5 = param_2;
  local_8 = this;
  FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
  local_10 = &local_14;
  local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_c = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  local_10 = (uint *)FUN_10004f6a(this,param_1);
  if (-1 < (int)local_10) {
    local_18 = 0;
    local_1c = *(uint *)(iVar5 + 0xac24);
    uVar7 = 0;
    if (local_1c != 0) {
      for (; (local_1c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    if (local_1c == 0) {
      local_18 = 0;
      do {
        local_18 = local_18 + 0x20;
        if (0xdf < local_18) goto LAB_10092f7e;
        local_1c = *(uint *)(iVar5 + 0xac24 + (local_18 >> 5) * 4);
        uVar7 = 0;
        if (local_1c != 0) {
          for (; (local_1c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      } while (local_1c == 0);
    }
LAB_10092d94:
    pbVar3 = (byte *)((int)&local_1c + ((int)uVar7 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar7 & 7));
    iVar6 = uVar7 + local_18;
    while (iVar6 != -1) {
      iVar6 = (iVar6 / 0xe) * 0xe + iVar6 % 0xe;
      *(undefined4 *)(iVar5 + 0x4abc + iVar6 * 4) = *(undefined4 *)((int)this + iVar6 * 4 + 0x68e8);
      uVar7 = 0;
      bVar11 = local_1c != 0;
      if (bVar11) {
        for (; (local_1c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      while( true ) {
        if (bVar11) goto LAB_10092d94;
        local_18 = local_18 + 0x20;
        if (0xdf < local_18) break;
        local_1c = ((uint *)(iVar5 + 0xac24))[local_18 >> 5];
        uVar7 = 0;
        bVar11 = local_1c != 0;
        if (bVar11) {
          for (; (local_1c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      }
LAB_10092f7e:
      iVar6 = -1;
    }
    local_18 = 0;
    local_1c = *(uint *)(iVar5 + 0xac4c);
    uVar7 = 0;
    if (local_1c != 0) {
      for (; (local_1c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    if (local_1c == 0) {
      local_18 = 0;
      do {
        local_18 = local_18 + 0x20;
        if (0xf < local_18) goto LAB_10092fc1;
        local_1c = *(uint *)(iVar5 + 0xac4c + (local_18 >> 5) * 4);
        uVar7 = 0;
        if (local_1c != 0) {
          for (; (local_1c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      } while (local_1c == 0);
    }
LAB_10092de7:
    pbVar3 = (byte *)((int)&local_1c + ((int)uVar7 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar7 & 7));
    iVar6 = local_18 + uVar7;
    while (iVar6 != -1) {
      *(undefined4 *)(iVar5 + 0x4f54 + iVar6 * 4) = *(undefined4 *)((int)this + iVar6 * 4 + 0xc290);
      uVar7 = 0;
      bVar11 = local_1c != 0;
      if (bVar11) {
        for (; (local_1c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      while( true ) {
        if (bVar11) goto LAB_10092de7;
        local_18 = local_18 + 0x20;
        if (0xf < local_18) break;
        local_1c = ((uint *)(iVar5 + 0xac4c))[local_18 >> 5];
        uVar7 = 0;
        bVar11 = local_1c != 0;
        if (bVar11) {
          for (; (local_1c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      }
LAB_10092fc1:
      iVar6 = -1;
    }
    if (*(char *)(iVar5 + 0xac22) != '\0') {
      *(undefined4 *)(iVar5 + 0x4fb8) = *(undefined4 *)((int)this + 0x6d80);
      *(undefined4 *)(iVar5 + 0x4fbc) = *(undefined4 *)((int)this + 0x6d84);
      *(undefined4 *)(iVar5 + 0x4fc0) = *(undefined4 *)((int)this + 0x6d88);
      *(undefined4 *)(iVar5 + 0x4fc4) = *(undefined4 *)((int)this + 0x6d8c);
      this = local_8;
    }
    if (*(char *)(iVar5 + 0xac21) != '\0') {
      *(undefined4 *)(iVar5 + 0x4fb4) = *(undefined4 *)((int)this + 0xc2d0);
    }
    if (*(char *)(iVar5 + 0xac20) != '\0') {
      if (*(int *)((int)this + 0xc28c) != 0) {
        LOCK();
        piVar1 = (int *)(*(int *)((int)this + 0xc28c) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (*(undefined4 **)(iVar5 + 0x4f9c) != (undefined4 *)0x0) {
        FUN_1009e598(*(undefined4 **)(iVar5 + 0x4f9c));
      }
      *(undefined4 *)(iVar5 + 0x4f9c) = *(undefined4 *)((int)this + 0xc28c);
    }
    if (*(char *)(iVar5 + 0xac1d) != '\0') {
      if (*(int *)((int)this + 0xc288) != 0) {
        LOCK();
        piVar1 = (int *)(*(int *)((int)this + 0xc288) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (*(undefined4 **)(iVar5 + 0x4f98) != (undefined4 *)0x0) {
        FUN_1009e840(*(undefined4 **)(iVar5 + 0x4f98));
      }
      *(undefined4 *)(iVar5 + 0x4f98) = *(undefined4 *)((int)this + 0xc288);
    }
    pvVar4 = local_8;
    iVar6 = 0;
    sVar2 = *(short *)(iVar5 + 0x5248);
    while (sVar2 != -1) {
      uVar7 = (uint)*(ushort *)(iVar5 + 0x5248 + iVar6 * 4);
      iVar8 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      puVar9 = (undefined4 *)((int)this + uVar7 * 4 + 0x67a8);
      puVar10 = (undefined4 *)(iVar5 + (uVar7 + 0x13f2) * 4);
      for (iVar8 = *(ushort *)(iVar5 + 0x524a + iVar8) - uVar7; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      this = local_8;
      sVar2 = *(short *)(iVar5 + 0x5248 + iVar6 * 4);
    }
    param_1 = 0;
    sVar2 = *(short *)(iVar5 + 0x526c);
    while (sVar2 != -1) {
      uVar7 = (uint)*(ushort *)(iVar5 + 0x526c + param_1 * 4);
      iVar8 = uVar7 * 0x10;
      puVar9 = (undefined4 *)((int)local_8 + iVar8 + 0x67e8);
      puVar10 = (undefined4 *)(iVar5 + 0x5008 + iVar8);
      for (iVar6 = (*(ushort *)(iVar5 + 0x526e + param_1 * 4) - uVar7) * 4; iVar6 != 0;
          iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_1 = param_1 + 1;
      sVar2 = *(short *)(iVar5 + 0x526c + param_1 * 4);
    }
    if (*(char *)(iVar5 + 0xac1c) != '\0') {
      if (*(int *)((int)local_8 + 0xc284) != 0) {
        LOCK();
        piVar1 = (int *)(*(int *)((int)local_8 + 0xc284) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (*(undefined4 **)(iVar5 + 0x4f94) != (undefined4 *)0x0) {
        FUN_1009c9c5(*(undefined4 **)(iVar5 + 0x4f94));
      }
      *(undefined4 *)(iVar5 + 0x4f94) = *(undefined4 *)((int)pvVar4 + 0xc284);
    }
    iVar6 = 0;
    sVar2 = *(short *)(iVar5 + 0x5290);
    while (sVar2 != -1) {
      uVar7 = (uint)*(ushort *)(iVar5 + 0x5290 + iVar6 * 4);
      puVar9 = (undefined4 *)((int)pvVar4 + uVar7 * 4 + 0x6828);
      puVar10 = (undefined4 *)(iVar5 + 0x5108 + uVar7 * 4);
      for (iVar8 = *(ushort *)(iVar5 + 0x5292 + iVar6 * 4) - uVar7; iVar8 != 0; iVar8 = iVar8 + -1)
      {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar6 = iVar6 + 1;
      pvVar4 = local_8;
      sVar2 = *(short *)(iVar5 + 0x5290 + iVar6 * 4);
    }
    param_1 = 0;
    sVar2 = *(short *)(iVar5 + 0x52b4);
    while (sVar2 != -1) {
      uVar7 = (uint)*(ushort *)(iVar5 + 0x52b4 + param_1 * 4);
      iVar8 = uVar7 * 0x10;
      puVar9 = (undefined4 *)((int)local_8 + iVar8 + 0x6868);
      puVar10 = (undefined4 *)(iVar5 + 0x5148 + iVar8);
      for (iVar6 = (*(ushort *)(iVar5 + 0x52b6 + param_1 * 4) - uVar7) * 4; iVar6 != 0;
          iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_1 = param_1 + 1;
      sVar2 = *(short *)(iVar5 + 0x52b4 + param_1 * 4);
    }
    (**(code **)(**(int **)((int)local_8 + 0x14) + 0x78))(iVar5,*(undefined4 *)(iVar5 + 4));
  }
  FUN_10003e89((char *)((int)&param_2 + 3));
  return (int)local_10;
}

