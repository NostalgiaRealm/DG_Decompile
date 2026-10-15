/*
 * FUN_1001e800 at 1001e800
 * undefined1 __thiscall FUN_1001e800(void * this, int param_1)
 * Address ranges: 1001e800-1001eb13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1001e800(void *this,int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_18;
  uint local_14;
  uint local_10;
  byte local_a;
  undefined1 local_9;
  
  local_9 = 1;
  local_14 = (1 << ((byte)*(undefined4 *)((int)this + 0x21b0) & 0x1f)) - 1U &
             *(uint *)((int)this + 0x1d34);
  uVar5 = 0;
  if (local_14 != 0) {
    for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  if (local_14 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = uVar5 & 0xff;
    pbVar6 = (byte *)((int)&local_14 + ((int)uVar5 >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar5 & 7));
  }
  if (uVar13 == 0xffffffff) {
    cVar7 = *(char *)((int)this + 0x21d6);
  }
  else {
    do {
      uVar11 = (uint)*(byte *)((int)this + uVar13 * 8 + 0x223);
      uVar5 = *(uint *)((int)this + uVar13 * 8 + 0x224);
      if (uVar5 < uVar11) {
        fVar15 = (float)uVar11;
      }
      else {
        fVar15 = (float)((double)(int)uVar5 + (double)(&DAT_100601f0)[-((int)uVar5 >> 0x1f)]);
      }
      iVar14 = uVar13 * 0x34;
      *(float *)((int)this + iVar14 + 0xac) = fVar15;
      bVar3 = *(byte *)((int)this + uVar13 * 8 + 0x220);
      local_a = *(byte *)((int)this + uVar13 * 8 + 0x221);
      bVar4 = *(byte *)((int)this + uVar13 * 8 + 0x222);
      if (bVar3 != 2) {
        fVar15 = 3.4028235e+38;
      }
      *(float *)((int)this + iVar14 + 0xb0) = fVar15;
      bVar12 = 0;
      if (bVar3 != 2) {
        bVar12 = bVar3;
      }
      if ((local_a == 2) || (bVar4 == 2)) {
        uVar8 = 0x55;
      }
      else {
        uVar8 = *(undefined4 *)
                 (&DAT_1005daa8 + (((uint)bVar4 * 2 | (uint)local_a) * 2 | (uint)bVar12) * 4);
      }
      *(undefined4 *)((int)this + iVar14 + 0x80) = uVar8;
      puVar1 = (uint *)(iVar14 + 0x80 + (int)this);
      local_64 = *puVar1;
      uStack_60 = puVar1[1];
      uStack_5c = puVar1[2];
      uStack_58 = puVar1[3];
      local_34 = *(undefined4 *)(iVar14 + 0xb0 + (int)this);
      puVar2 = (undefined4 *)(iVar14 + 0x90 + (int)this);
      local_54 = *puVar2;
      uStack_50 = puVar2[1];
      uStack_4c = puVar2[2];
      uStack_48 = puVar2[3];
      puVar2 = (undefined4 *)(iVar14 + 0xa0 + (int)this);
      local_44 = *puVar2;
      uStack_40 = puVar2[1];
      uStack_3c = puVar2[2];
      uStack_38 = puVar2[3];
      local_10 = FUN_1005384b((void *)(*(int *)((int)this + 0x1d54) + 0x1674),&local_64);
      uVar5 = *(uint *)((int)this + uVar13 * 4 + 0x1ed0);
      if (uVar5 != local_10) {
        if (uVar5 != 0xffffffff) {
          uVar11 = FUN_10027520((void *)(*(int *)((int)this + 0x1d54) + 0x1674),uVar5,0);
          if (uVar11 != *(uint *)(*(int *)((int)this + 0x1d54) + 0x167c)) {
            iVar14 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1678);
            iVar9 = uVar11 * 0x10;
            if (((*(uint *)(iVar9 + iVar14) == uVar5) && (*(int *)(iVar9 + 4 + iVar14) == 0)) &&
               (piVar10 = (int *)(iVar9 + 0xc + iVar14), piVar10 != (int *)0x0)) {
              *(undefined1 *)(*piVar10 + 0x20) = 0;
            }
          }
        }
        *(uint *)((int)this + uVar13 * 4 + 0x1ed0) = local_10;
      }
      iVar14 = *(int *)(*(int *)((int)this + 0x1d54) + 0x15e4);
      piVar10 = *(int **)(*(int *)(iVar14 + 0x34) + (local_10 >> 0x10) * 8);
      (**(code **)(*piVar10 + 0x24))(piVar10,&local_18);
      local_18 = local_18 + (local_10 & 0xffff) * *(int *)(iVar14 + 0x18);
      *(int *)((int)this + uVar13 * 4 + 0x1f34) = local_18;
      pbVar6 = (byte *)((int)this + ((int)uVar13 >> 3) + 0x1d34);
      *pbVar6 = *pbVar6 & ~('\x01' << (uVar13 & 7));
      uVar5 = 0;
      if (local_14 != 0) {
        for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      *(undefined1 *)((int)this + 0x21d6) = 1;
      if (local_14 == 0) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = uVar5 & 0xff;
        pbVar6 = (byte *)((int)&local_14 + ((int)uVar5 >> 3));
        *pbVar6 = *pbVar6 & ~('\x01' << (uVar5 & 7));
      }
    } while (uVar13 != 0xffffffff);
    cVar7 = '\x01';
  }
  iVar14 = *(int *)((int)this + 0x2160);
  if (iVar14 == 0) {
    iVar14 = *(int *)((int)this + 0x2188);
  }
  if ((cVar7 == '\0') && ((char)param_1 == '\0')) {
    return 1;
  }
  iVar14 = *(int *)((int)this + 0x21b0) + iVar14;
  if (iVar14 == 0) {
    *(undefined1 *)((int)this + 0x21d6) = 0;
    return local_9;
  }
  iVar9 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
  cVar7 = FUN_10054e48(*(void **)((int)this + 0x1d68),iVar14,
                       *(uint *)(*(int *)(*(int *)((int)this + 0x1d54) + 0x1300) + 0xc),
                       *(uint *)(iVar9 + 0x938),*(uint *)(iVar9 + 0x93c),&local_30);
  if (cVar7 == '\0') {
    *(undefined1 *)((int)this + 0x21d8) = 1;
    *(undefined1 *)((int)this + 0x21d6) = 0;
    return 0;
  }
  param_1 = *(int *)((int)this + 0x21b0);
  if (param_1 != 0) {
    (**(code **)(*(int *)**(undefined4 **)((int)this + 0x1d58) + 0x5c))
              ((int *)**(undefined4 **)((int)this + 0x1d58),1,local_28,&param_1,param_1,
               (int)this + 0x1f34,&DAT_1005ec08,1);
    *(int *)((int)this + 0x1eb8) = local_30;
    *(undefined4 *)((int)this + 0x1ebc) = local_2c;
  }
  *(undefined4 *)((int)this + 0x2018) = local_24;
  *(undefined1 *)((int)this + 0x21d2) = 1;
  *(undefined1 *)((int)this + 0x21d8) = 1;
  *(undefined1 *)((int)this + 0x21d6) = 0;
  return local_9;
}

