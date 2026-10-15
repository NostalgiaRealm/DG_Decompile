/*
 * FUN_10033760 at 10033760
 * undefined1 __thiscall FUN_10033760(void * this, int param_1)
 * Address ranges: 10033760-10033af4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10033760(void *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  byte local_a;
  undefined1 local_9;
  
  local_9 = 1;
  local_14 = (1 << ((byte)*(undefined4 *)((int)this + 0xde38) & 0x1f)) - 1U &
             *(uint *)((int)this + 0xd974);
  uVar3 = 0;
  if (local_14 != 0) {
    for (; (local_14 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  if (local_14 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = uVar3 & 0xff;
    pbVar4 = (byte *)((int)&local_14 + ((int)uVar3 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar3 & 7));
  }
  if (uVar13 == 0xffffffff) {
    cVar6 = *(char *)((int)this + 0xde60);
  }
  else {
    do {
      uVar12 = (uint)*(byte *)((int)this + uVar13 * 8 + 0x3d3);
      uVar3 = *(uint *)((int)this + uVar13 * 8 + 0x3d4);
      if (uVar3 < uVar12) {
        fVar14 = (float)uVar12;
      }
      else {
        fVar14 = (float)((double)(int)uVar3 + (double)(&DAT_100b5ce0)[-((int)uVar3 >> 0x1f)]);
      }
      *(float *)((int)this + uVar13 * 0x34 + 0xbc) = fVar14;
      local_a = *(byte *)((int)this + uVar13 * 8 + 0x3d0);
      bVar1 = *(byte *)((int)this + uVar13 * 8 + 0x3d1);
      bVar2 = *(byte *)((int)this + uVar13 * 8 + 0x3d2);
      if (local_a != 2) {
        fVar14 = 3.4028235e+38;
      }
      local_10 = 0;
      if (local_a != 2) {
        local_10 = (uint)local_a;
      }
      *(float *)((int)this + uVar13 * 0x34 + 0xc0) = fVar14;
      if ((bVar1 == 2) || (bVar2 == 2)) {
        local_1c = (uint)bVar1;
        *(undefined4 *)((int)this + uVar13 * 0x34 + 0x90) = 0x55;
        *(float *)((int)this + uVar13 * 0x34 + 0x260) = fVar14;
        if ((bVar1 != 2) && (bVar2 != 2)) goto LAB_1003389a;
        uVar7 = 0xd5;
      }
      else {
        *(float *)((int)this + uVar13 * 0x34 + 0x260) = fVar14;
        *(undefined4 *)((int)this + uVar13 * 0x34 + 0x90) =
             *(undefined4 *)(&DAT_100b0198 + (((uint)bVar2 * 2 | (uint)bVar1) * 2 | local_10) * 4);
LAB_1003389a:
        uVar7 = *(undefined4 *)
                 (&DAT_100b0178 + (((uint)bVar2 * 2 | (uint)bVar1) * 2 | local_10) * 4);
      }
      *(undefined4 *)((int)this + uVar13 * 0x34 + 0x230) = uVar7;
      cVar6 = *(char *)((int)this + uVar13 * 4 + 0x5860);
      if ((cVar6 == '\x05') || (cVar6 == '\x06')) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      iVar8 = 0x230;
      if (!bVar5) {
        iVar8 = 0x90;
      }
      puVar9 = (uint *)((int)this + iVar8 + uVar13 * 0x34);
      local_6c = *puVar9;
      uStack_68 = puVar9[1];
      uStack_64 = puVar9[2];
      uStack_60 = puVar9[3];
      local_5c = puVar9[4];
      uStack_58 = puVar9[5];
      uStack_54 = puVar9[6];
      uStack_50 = puVar9[7];
      local_4c = puVar9[8];
      uStack_48 = puVar9[9];
      uStack_44 = puVar9[10];
      uStack_40 = puVar9[0xb];
      local_3c = puVar9[0xc];
      local_10 = FUN_1009bde9((void *)(*(int *)((int)this + 0xd9b8) + 0x1674),&local_6c);
      uVar3 = *(uint *)((int)this + uVar13 * 4 + 0xdb48);
      if (uVar3 != local_10) {
        if (uVar3 != 0xffffffff) {
          uVar12 = FUN_10007d2a((void *)(*(int *)((int)this + 0xd9b8) + 0x1674),uVar3,0);
          if (uVar12 != *(uint *)(*(int *)((int)this + 0xd9b8) + 0x167c)) {
            iVar8 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1678);
            iVar10 = uVar12 * 0x10;
            if (((*(uint *)(iVar10 + iVar8) == uVar3) && (*(int *)(iVar10 + 4 + iVar8) == 0)) &&
               (piVar11 = (int *)(iVar10 + 0xc + iVar8), piVar11 != (int *)0x0)) {
              *(undefined1 *)(*piVar11 + 0x20) = 0;
            }
          }
        }
        *(uint *)((int)this + uVar13 * 4 + 0xdb48) = local_10;
      }
      iVar8 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x15e4);
      piVar11 = *(int **)(*(int *)(iVar8 + 0x34) + (local_10 >> 0x10) * 8);
      (**(code **)(*piVar11 + 0x24))(piVar11,&local_18);
      local_18 = local_18 + (local_10 & 0xffff) * *(int *)(iVar8 + 0x18);
      *(int *)((int)this + uVar13 * 4 + 0xdbac) = local_18;
      pbVar4 = (byte *)((int)this + ((int)uVar13 >> 3) + 0xd974);
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar13 & 7));
      uVar3 = 0;
      if (local_14 != 0) {
        for (; (local_14 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      *(undefined1 *)((int)this + 0xde60) = 1;
      if (local_14 == 0) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = uVar3 & 0xff;
        pbVar4 = (byte *)((int)&local_14 + ((int)uVar3 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar3 & 7));
      }
    } while (uVar13 != 0xffffffff);
    cVar6 = '\x01';
  }
  iVar8 = *(int *)((int)this + 0xdde8);
  if (iVar8 == 0) {
    iVar8 = *(int *)((int)this + 0xde10);
  }
  if ((cVar6 == '\0') && ((char)param_1 == '\0')) {
    return 1;
  }
  iVar8 = *(int *)((int)this + 0xde38) + iVar8;
  if (iVar8 == 0) {
    *(undefined1 *)((int)this + 0xde60) = 0;
    return local_9;
  }
  iVar10 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
  cVar6 = FUN_1009fbdb(*(void **)((int)this + 0xd9cc),iVar8,
                       *(uint *)(*(int *)(*(int *)((int)this + 0xd9b8) + 0x1300) + 0xc),
                       *(uint *)(iVar10 + 0x938),*(uint *)(iVar10 + 0x93c),&local_38);
  if (cVar6 == '\0') {
    *(undefined1 *)((int)this + 0xde62) = 1;
    *(undefined1 *)((int)this + 0xde60) = 0;
    return 0;
  }
  param_1 = *(int *)((int)this + 0xde38);
  if (param_1 != 0) {
    (**(code **)(*(int *)**(undefined4 **)((int)this + 0xd9bc) + 0x5c))
              ((int *)**(undefined4 **)((int)this + 0xd9bc),1,local_30,&param_1,param_1,
               (int)this + 0xdbac,&DAT_100b2268,1);
    *(int *)((int)this + 0xdb28) = local_38;
    *(undefined4 *)((int)this + 0xdb2c) = local_34;
  }
  iVar8 = *(int *)((int)this + 0xdc8c);
  *(int *)((int)this + 0xdc8c) = local_2c;
  *(undefined1 *)((int)this + 0xde5a) = 1;
  *(byte *)((int)this + 0xde61) = *(byte *)((int)this + 0xde61) | local_2c != iVar8;
  *(undefined1 *)((int)this + 0xde62) = 1;
  *(undefined1 *)((int)this + 0xde60) = 0;
  return local_9;
}

