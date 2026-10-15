/*
 * FUN_100930d5 at 100930d5
 * int __thiscall FUN_100930d5(void * this, uint param_1)
 * Address ranges: 100930d5-1009383e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100930d5(void *this,uint param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  void *this_00;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int *piVar14;
  uint *puVar15;
  bool bVar16;
  ushort in_FPUControlWord;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  int *local_10;
  void *local_c;
  char *local_8;
  
  uVar9 = param_1;
  local_c = this;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
  local_14 = &local_20;
  local_8 = (char *)CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_20 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_20 = (uint)in_FPUControlWord;
    local_8 = (char *)(in_FPUControlWord & 0xf0ff | 0x23f);
  }
  local_24 = FUN_1000520a(this,uVar9);
  if (-1 < local_24) {
    local_28 = 0;
    iVar3 = *(int *)(*(int *)((int)this + 0x3b4) + -4 + uVar9 * 4);
    local_2c = *(uint *)(iVar3 + 0xac24);
    uVar9 = 0;
    if (local_2c != 0) {
      for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    if (local_2c == 0) {
      local_28 = 0;
      do {
        local_28 = local_28 + 0x20;
        if (0xdf < local_28) goto LAB_10093564;
        local_2c = *(uint *)(iVar3 + 0xac24 + (local_28 >> 5) * 4);
        uVar9 = 0;
        if (local_2c != 0) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      } while (local_2c == 0);
    }
LAB_10093196:
    pbVar5 = (byte *)((int)&local_2c + ((int)uVar9 >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar9 & 7));
    iVar8 = uVar9 + local_28;
    while (uVar6 = local_28, iVar8 != -1) {
      FUN_100925c3(this,iVar8 / 0xe,iVar8 % 0xe,
                   *(uint *)(iVar3 + 0x4abc + ((iVar8 / 0xe) * 0xe + iVar8 % 0xe) * 4));
      uVar9 = 0;
      bVar16 = local_2c != 0;
      if (bVar16) {
        for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      while( true ) {
        if (bVar16) goto LAB_10093196;
        local_28 = uVar6 + 0x20;
        if (0xdf < local_28) break;
        local_2c = ((uint *)(iVar3 + 0xac24))[local_28 >> 5];
        uVar9 = 0;
        bVar16 = local_2c != 0;
        uVar6 = local_28;
        if (bVar16) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      }
LAB_10093564:
      iVar8 = -1;
    }
    local_28 = 0;
    local_2c = *(uint *)(iVar3 + 0xac40);
    uVar9 = 0;
    if (local_2c != 0) {
      for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    if (local_2c == 0) {
      local_28 = 0;
      do {
        local_28 = local_28 + 0x20;
        if (0x45 < local_28) goto LAB_100935b9;
        local_2c = *(uint *)(iVar3 + 0xac40 + (local_28 >> 5) * 4);
        uVar9 = 0;
        if (local_2c != 0) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      } while (local_2c == 0);
    }
LAB_100931ec:
    pbVar5 = (byte *)((int)&local_2c + ((int)uVar9 >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar9 & 7));
    iVar8 = uVar9 + local_28;
    while (uVar6 = local_28, iVar8 != -1) {
      FUN_100925c3(this,iVar8 / 0xe + 0x100,iVar8 % 0xe,
                   *(uint *)(iVar3 + 0x4abc + ((iVar8 / 0xe) * 0xe + iVar8 % 0xe) * 4));
      uVar9 = 0;
      bVar16 = local_2c != 0;
      if (bVar16) {
        for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      while( true ) {
        if (bVar16) goto LAB_100931ec;
        local_28 = uVar6 + 0x20;
        if (0x45 < local_28) break;
        local_2c = ((uint *)(iVar3 + 0xac40))[local_28 >> 5];
        uVar9 = 0;
        bVar16 = local_2c != 0;
        uVar6 = local_28;
        if (bVar16) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      }
LAB_100935b9:
      iVar8 = -1;
    }
    local_28 = 0;
    local_2c = *(uint *)(iVar3 + 0xac50);
    uVar9 = 0;
    if (local_2c != 0) {
      for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    if (local_2c == 0) {
      local_28 = 0;
      do {
        local_28 = local_28 + 0x20;
        if (4 < local_28) goto LAB_10093630;
        local_2c = *(uint *)(iVar3 + 0xac50 + (local_28 >> 5) * 4);
        uVar9 = 0;
        if (local_2c != 0) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      } while (local_2c == 0);
    }
LAB_1009323f:
    pbVar5 = (byte *)((int)&local_2c + ((int)uVar9 >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar9 & 7));
    uVar9 = uVar9 + local_28;
    while (uVar6 = local_28, uVar9 != 0xffffffff) {
      piVar4 = *(int **)(iVar3 + 0x4fa0 + uVar9 * 4);
      local_8 = (char *)0x0;
      local_10 = (int *)0x0;
      piVar7 = local_10;
      if ((piVar4 == (int *)0x0) ||
         ((iVar8 = piVar4[6], piVar14 = piVar4, iVar8 != 3 &&
          ((piVar7 = piVar4, iVar8 == 4 || (piVar7 = local_10, iVar8 != 5)))))) {
        local_10 = piVar7;
        piVar14 = (int *)0x0;
      }
      FUN_1009245a(this,uVar9,(int)piVar4,piVar14,local_10);
      uVar9 = 0;
      bVar16 = local_2c != 0;
      if (bVar16) {
        for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      while( true ) {
        if (bVar16) goto LAB_1009323f;
        local_28 = uVar6 + 0x20;
        if (4 < local_28) break;
        local_2c = ((uint *)(iVar3 + 0xac50))[local_28 >> 5];
        uVar9 = 0;
        bVar16 = local_2c != 0;
        uVar6 = local_28;
        if (bVar16) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      }
LAB_10093630:
      uVar9 = 0xffffffff;
    }
    local_28 = 0;
    local_2c = *(uint *)(iVar3 + 0xac4c);
    uVar9 = 0;
    if (local_2c != 0) {
      for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    if (local_2c == 0) {
      local_28 = 0;
      do {
        local_28 = local_28 + 0x20;
        if (0xf < local_28) goto LAB_10093673;
        local_2c = *(uint *)(iVar3 + 0xac4c + (local_28 >> 5) * 4);
        uVar9 = 0;
        if (local_2c != 0) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      } while (local_2c == 0);
    }
LAB_10093292:
    pbVar5 = (byte *)((int)&local_2c + ((int)uVar9 >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar9 & 7));
    iVar8 = local_28 + uVar9;
    while (iVar8 != -1) {
      *(undefined4 *)((int)this + iVar8 * 4 + 0xc290) = *(undefined4 *)(iVar3 + 0x4f54 + iVar8 * 4);
      uVar9 = 0;
      bVar16 = local_2c != 0;
      if (bVar16) {
        for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      while( true ) {
        if (bVar16) goto LAB_10093292;
        local_28 = local_28 + 0x20;
        if (0xf < local_28) break;
        local_2c = ((uint *)(iVar3 + 0xac4c))[local_28 >> 5];
        uVar9 = 0;
        bVar16 = local_2c != 0;
        if (bVar16) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      }
LAB_10093673:
      iVar8 = -1;
    }
    local_28 = 0;
    local_2c = *(uint *)(iVar3 + 0xaba8);
    uVar9 = 0;
    if (local_2c != 0) {
      for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    if (local_2c == 0) {
      local_28 = 0;
      do {
        local_28 = local_28 + 0x20;
        if (0xd1 < local_28) goto LAB_100936b7;
        local_2c = *(uint *)(iVar3 + 0xaba8 + (local_28 >> 5) * 4);
        uVar9 = 0;
        if (local_2c != 0) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      } while (local_2c == 0);
    }
LAB_100932e9:
    pbVar5 = (byte *)((int)&local_2c + ((int)uVar9 >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar9 & 7));
    iVar8 = uVar9 + local_28;
    while (uVar6 = local_28, iVar8 != -1) {
      FUN_100922dc(this,iVar8,*(float *)(iVar3 + 8 + iVar8 * 4));
      uVar9 = 0;
      bVar16 = local_2c != 0;
      if (bVar16) {
        for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      while( true ) {
        if (bVar16) goto LAB_100932e9;
        local_28 = uVar6 + 0x20;
        if (0xd1 < local_28) break;
        local_2c = ((uint *)(iVar3 + 0xaba8))[local_28 >> 5];
        uVar9 = 0;
        bVar16 = local_2c != 0;
        uVar6 = local_28;
        if (bVar16) {
          for (; (local_2c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
      }
LAB_100936b7:
      iVar8 = -1;
    }
    if (*(char *)(iVar3 + 0xac22) != '\0') {
      *(undefined4 *)((int)this + 0x6d80) = *(undefined4 *)(iVar3 + 0x4fb8);
      *(undefined4 *)((int)this + 0x6d84) = *(undefined4 *)(iVar3 + 0x4fbc);
      *(undefined4 *)((int)this + 0x6d88) = *(undefined4 *)(iVar3 + 0x4fc0);
      *(undefined4 *)((int)this + 0x6d8c) = *(undefined4 *)(iVar3 + 0x4fc4);
      *(undefined1 *)((int)local_c + 0xc2f0) = 1;
      this = local_c;
    }
    if (*(char *)(iVar3 + 0xac21) != '\0') {
      FUN_10095e1a((int)this);
    }
    if (*(char *)(iVar3 + 0xac20) != '\0') {
      FUN_10095e5b(this,*(int *)(iVar3 + 0x4f9c));
    }
    if (*(char *)(iVar3 + 0xac1d) != '\0') {
      puVar15 = *(uint **)(iVar3 + 0x4f98);
      local_14 = puVar15;
      iVar8 = FUN_1009c1d2((void *)((int)this + 0x672c),(uint *)&local_14);
      FUN_100968e7(this,(int)puVar15,iVar8);
    }
    iVar8 = 0;
    if (*(short *)(iVar3 + 0xa118) != -1) {
      local_14 = (uint *)(iVar3 + 0x6118);
      do {
        uVar9 = (uint)*(ushort *)(iVar3 + 0xa118 + iVar8 * 4);
        local_10 = *(int **)((int)this + 0xc288);
        iVar10 = *(ushort *)(iVar3 + 0xa11a + iVar8 * 4) - uVar9;
        puVar15 = local_14 + uVar9 * 4;
        iVar11 = FUN_1009c1d2((void *)((int)this + 0x672c),(uint *)&local_10);
        FUN_10096233(this,iVar11,uVar9,puVar15,iVar10);
        iVar8 = iVar8 + 1;
      } while (*(short *)(iVar3 + 0xa118 + iVar8 * 4) != -1);
    }
    iVar8 = 0;
    sVar1 = *(short *)(iVar3 + 0x526c);
    while (sVar1 != -1) {
      uVar9 = (uint)*(ushort *)(iVar3 + 0x526c + iVar8 * 4);
      local_14 = *(uint **)((int)this + 0xc288);
      iVar10 = *(ushort *)(iVar3 + 0x526e + iVar8 * 4) - uVar9;
      puVar12 = (undefined4 *)(uVar9 * 0x10 + iVar3 + 0x5008);
      iVar11 = FUN_1009c1d2((void *)((int)this + 0x672c),(uint *)&local_14);
      FUN_1009637c(this,iVar11,uVar9,puVar12,iVar10);
      iVar8 = iVar8 + 1;
      sVar1 = *(short *)(iVar3 + 0x526c + iVar8 * 4);
    }
    iVar8 = 0;
    sVar1 = *(short *)(iVar3 + 0x5248);
    while (sVar1 != -1) {
      uVar9 = (uint)*(ushort *)(iVar3 + 0x5248 + iVar8 * 4);
      local_14 = *(uint **)((int)this + 0xc288);
      iVar10 = *(ushort *)(iVar3 + 0x524a + iVar8 * 4) - uVar9;
      puVar12 = (undefined4 *)(iVar3 + 0x4fc8 + uVar9 * 4);
      iVar11 = FUN_1009c1d2((void *)((int)this + 0x672c),(uint *)&local_14);
      FUN_100964ab(this,iVar11,uVar9,puVar12,iVar10);
      iVar8 = iVar8 + 1;
      sVar1 = *(short *)(iVar3 + 0x5248 + iVar8 * 4);
    }
    if (*(char *)(iVar3 + 0xac1c) != '\0') {
      puVar15 = *(uint **)(iVar3 + 0x4f94);
      local_14 = puVar15;
      iVar8 = FUN_1009c076((void *)((int)this + 0x6764),(uint *)&local_14);
      FUN_10095e97(this,(int)puVar15,iVar8);
    }
    pcVar13 = (char *)((int)this + 0x11);
    iVar8 = 0;
    puVar15 = (uint *)((int)this + 0x6764);
    local_14 = puVar15;
    local_8 = pcVar13;
    if (*(short *)(iVar3 + 0xa91c) != -1) {
      do {
        this = local_c;
        local_18 = (uint)*(ushort *)(iVar3 + 0xa91e + iVar8 * 4);
        uVar2 = *(ushort *)(iVar3 + 0xa91c + iVar8 * 4);
        if (*pcVar13 == '\0') {
          local_10 = *(int **)((int)local_c + 0xc284);
          local_10 = (int *)FUN_1009c076(puVar15,(uint *)&local_10);
          uVar2 = *(ushort *)(iVar3 + 0xa91c + iVar8 * 4);
        }
        else {
          local_10 = (int *)0x0;
        }
        uVar9 = (uint)uVar2;
        FUN_100965aa(this,(int)local_10,uVar9,(undefined4 *)(uVar9 * 0x10 + iVar3 + 0x5318),
                     local_18 - uVar9);
        iVar8 = iVar8 + 1;
        puVar15 = (uint *)((int)this + 0x6764);
        pcVar13 = (char *)((int)this + 0x11);
      } while (*(short *)(iVar3 + 0xa91c + iVar8 * 4) != -1);
      pcVar13 = (char *)((int)this + 0x11);
      puVar15 = (uint *)((int)this + 0x6764);
    }
    iVar8 = 0;
    sVar1 = *(short *)(iVar3 + 0x52b4);
    this_00 = local_c;
    while (local_c = this_00, sVar1 != -1) {
      local_1c = (uint)*(ushort *)(iVar3 + 0x52b6 + iVar8 * 4);
      uVar2 = *(ushort *)(iVar3 + 0x52b4 + iVar8 * 4);
      if (*pcVar13 == '\0') {
        local_18 = *(uint *)((int)this_00 + 0xc284);
        local_10 = (int *)FUN_1009c076(puVar15,&local_18);
        uVar2 = *(ushort *)(iVar3 + 0x52b4 + iVar8 * 4);
      }
      else {
        local_10 = (int *)0x0;
      }
      uVar9 = (uint)uVar2;
      FUN_100966ca(this_00,(int)local_10,uVar9,(undefined4 *)(uVar9 * 0x10 + iVar3 + 0x5148),
                   local_1c - uVar9);
      iVar8 = iVar8 + 1;
      pcVar13 = local_8;
      puVar15 = local_14;
      this = this_00;
      this_00 = local_c;
      sVar1 = *(short *)(iVar3 + 0x52b4 + iVar8 * 4);
    }
    iVar8 = 0;
    sVar1 = *(short *)(iVar3 + 0x5290);
    while (sVar1 != -1) {
      uVar9 = (uint)*(ushort *)(iVar3 + 0x5290 + iVar8 * 4);
      local_1c = *(uint *)((int)this + 0xc284);
      iVar10 = *(ushort *)(iVar3 + 0x5292 + iVar8 * 4) - uVar9;
      puVar12 = (undefined4 *)(iVar3 + 0x5108 + uVar9 * 4);
      iVar11 = FUN_1009c076((void *)((int)this + 0x6764),&local_1c);
      FUN_100967ea(this,iVar11,uVar9,puVar12,iVar10);
      iVar8 = iVar8 + 1;
      sVar1 = *(short *)(iVar3 + 0x5290 + iVar8 * 4);
    }
  }
  local_14 = &local_20;
  FUN_10003e89((char *)((int)&param_1 + 3));
  return local_24;
}

