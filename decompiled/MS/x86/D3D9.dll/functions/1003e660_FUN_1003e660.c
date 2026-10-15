/*
 * FUN_1003e660 at 1003e660
 * undefined4 __thiscall FUN_1003e660(void * this, uint param_1)
 * Address ranges: 1003e660-1003ec03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003e660(void *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined3 extraout_var;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
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
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  byte local_a;
  undefined1 local_9;
  
  local_9 = 1;
  local_18 = (1 << ((byte)*(undefined4 *)((int)this + 0xfd78) & 0x1f)) - 1U &
             *(uint *)((int)this + 0xf664);
  uVar11 = 0;
  if (local_18 != 0) {
    for (; (local_18 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
    }
  }
  if (local_18 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = uVar11 & 0xff;
    pbVar4 = (byte *)((int)&local_18 + ((int)uVar11 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar11 & 7));
  }
  local_10 = (int *)((int)this + 0xf6b8);
  if (uVar13 == 0xffffffff) {
    uVar11 = CONCAT31((int3)(uVar11 >> 8),*(undefined1 *)((int)this + 0xfda0));
  }
  else {
    do {
      uVar12 = (uint)*(byte *)((int)this + uVar13 * 8 + 0x713);
      uVar11 = *(uint *)((int)this + uVar13 * 8 + 0x714);
      if (uVar11 < uVar12) {
        fVar16 = (float)uVar12;
      }
      else {
        fVar16 = (float)((double)(int)uVar11 + (double)(&DAT_100d97a0)[-((int)uVar11 >> 0x1f)]);
      }
      *(float *)((int)this + uVar13 * 0x34 + 0xbc) = fVar16;
      local_a = *(byte *)((int)this + uVar13 * 8 + 0x710);
      bVar1 = *(byte *)((int)this + uVar13 * 8 + 0x711);
      bVar2 = *(byte *)((int)this + uVar13 * 8 + 0x712);
      if (local_a != 2) {
        fVar16 = 3.4028235e+38;
      }
      local_14 = 0;
      if (local_a != 2) {
        local_14 = (uint)local_a;
      }
      *(float *)((int)this + uVar13 * 0x34 + 0xc0) = fVar16;
      if ((bVar1 == 2) || (bVar2 == 2)) {
        local_20 = (uint)bVar1;
        *(undefined4 *)((int)this + uVar13 * 0x34 + 0x90) = 0x55;
        *(float *)((int)this + uVar13 * 0x34 + 0x400) = fVar16;
        if ((bVar1 != 2) && (bVar2 != 2)) goto LAB_1003e79a;
        uVar10 = 0xd5;
      }
      else {
        *(float *)((int)this + uVar13 * 0x34 + 0x400) = fVar16;
        *(undefined4 *)((int)this + uVar13 * 0x34 + 0x90) =
             *(undefined4 *)(&DAT_100d22e0 + (((uint)bVar2 * 2 | (uint)bVar1) * 2 | local_14) * 4);
LAB_1003e79a:
        uVar10 = *(undefined4 *)
                  (&DAT_100d22c0 + (((uint)bVar2 * 2 | (uint)bVar1) * 2 | local_14) * 4);
      }
      *(undefined4 *)((int)this + uVar13 * 0x34 + 0x3d0) = uVar10;
      cVar5 = *(char *)((int)this + uVar13 * 4 + 30000);
      if ((cVar5 == '\x05') || (cVar5 == '\x06')) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      iVar6 = 0x3d0;
      if (!bVar15) {
        iVar6 = 0x90;
      }
      puVar7 = (uint *)((int)this + iVar6 + uVar13 * 0x34);
      local_6c = *puVar7;
      uStack_68 = puVar7[1];
      uStack_64 = puVar7[2];
      uStack_60 = puVar7[3];
      local_5c = puVar7[4];
      uStack_58 = puVar7[5];
      uStack_54 = puVar7[6];
      uStack_50 = puVar7[7];
      local_4c = puVar7[8];
      uStack_48 = puVar7[9];
      uStack_44 = puVar7[10];
      uStack_40 = puVar7[0xb];
      local_3c = puVar7[0xc];
      local_14 = FUN_100be3c1((void *)(*(int *)((int)this + 0xf6b8) + 0x1674),&local_6c);
      uVar11 = *(uint *)((int)this + uVar13 * 4 + 0xf900);
      if (uVar11 != local_14) {
        if (uVar11 != 0xffffffff) {
          uVar12 = FUN_1000887d((void *)(*local_10 + 0x1674),uVar11,0);
          if (uVar12 != *(uint *)(*(int *)((int)this + 0xf6b8) + 0x167c)) {
            iVar6 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1678);
            iVar8 = uVar12 * 0x10;
            if (((*(uint *)(iVar8 + iVar6) == uVar11) && (*(int *)(iVar8 + 4 + iVar6) == 0)) &&
               (piVar9 = (int *)(iVar8 + 0xc + iVar6), piVar9 != (int *)0x0)) {
              *(undefined1 *)(*piVar9 + 0x20) = 0;
            }
          }
        }
        *(uint *)((int)this + uVar13 * 4 + 0xf900) = local_14;
      }
      iVar6 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x15e4);
      piVar9 = *(int **)(*(int *)(iVar6 + 0x34) + (local_14 >> 0x10) * 8);
      (**(code **)(*piVar9 + 0x24))(piVar9,&local_1c);
      local_1c = local_1c + (local_14 & 0xffff) * *(int *)(iVar6 + 0x18);
      *(int *)((int)this + uVar13 * 4 + 0xf9a4) = local_1c;
      pbVar4 = (byte *)((int)this + ((int)uVar13 >> 3) + 0xf664);
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar13 & 7));
      uVar11 = 0;
      if (local_18 != 0) {
        for (; (local_18 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      *(undefined1 *)((int)this + 0xfda0) = 1;
      if (local_18 == 0) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = uVar11 & 0xff;
        pbVar4 = (byte *)((int)&local_18 + ((int)uVar11 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar11 & 7));
      }
    } while (uVar13 != 0xffffffff);
    uVar11 = CONCAT31((int3)(uVar11 >> 8),1);
  }
  uVar13 = *(uint *)((int)this + 0xfd28);
  local_14 = uVar13;
  if (uVar13 == 0) {
    uVar13 = *(uint *)((int)this + 0xfd50);
    local_14 = uVar13;
  }
  local_18 = (1 << ((byte)uVar13 & 0x1f)) - 1U & *(uint *)((int)this + 0xf69c);
  uVar12 = 0;
  if (local_18 != 0) {
    for (; (local_18 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
    }
  }
  local_14 = uVar13;
  if (local_18 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = uVar12 & 0xff;
    pbVar4 = (byte *)((int)&local_18 + ((int)uVar12 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar12 & 7));
  }
  if (uVar14 == 0xffffffff) {
    if (((char)uVar11 == '\0') && ((char)param_1 == '\0')) goto LAB_1003ebf8;
  }
  else {
    do {
      uVar13 = (uint)*(byte *)((int)this + uVar14 * 8 + 0x7fb);
      uVar11 = *(uint *)((int)this + uVar14 * 8 + 0x7fc);
      if (uVar11 < uVar13) {
        fVar16 = (float)uVar13;
      }
      else {
        fVar16 = (float)((double)(int)uVar11 + (double)(&DAT_100d97a0)[-((int)uVar11 >> 0x1f)]);
      }
      iVar6 = uVar14 * 0x34;
      *(float *)((int)this + iVar6 + 0x84c) = fVar16;
      bVar1 = *(byte *)((int)this + uVar14 * 8 + 0x7f8);
      bVar2 = *(byte *)((int)this + uVar14 * 8 + 0x7f9);
      param_1 = CONCAT13(bVar1,(undefined3)param_1);
      bVar3 = *(byte *)((int)this + uVar14 * 8 + 0x7fa);
      *(undefined4 *)((int)this + iVar6 + 0x850) = 0x7f7fffff;
      if ((bVar2 == 2) || (bVar3 == 2)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)
                  (&DAT_100d22e0 + (((uint)bVar3 * 2 | (uint)bVar2) * 2 | (uint)bVar1) * 4);
      }
      *(undefined4 *)((int)this + iVar6 + 0x820) = uVar10;
      puVar7 = (uint *)(iVar6 + 0x820 + (int)this);
      local_6c = *puVar7;
      uStack_68 = puVar7[1];
      uStack_64 = puVar7[2];
      uStack_60 = puVar7[3];
      local_3c = *(uint *)(iVar6 + 0x850 + (int)this);
      puVar7 = (uint *)(iVar6 + 0x830 + (int)this);
      local_5c = *puVar7;
      uStack_58 = puVar7[1];
      uStack_54 = puVar7[2];
      uStack_50 = puVar7[3];
      puVar7 = (uint *)(iVar6 + 0x840 + (int)this);
      local_4c = *puVar7;
      uStack_48 = puVar7[1];
      uStack_44 = puVar7[2];
      uStack_40 = puVar7[3];
      param_1 = FUN_100be3c1((void *)(*local_10 + 0x1674),&local_6c);
      uVar11 = *(uint *)((int)this + uVar14 * 4 + 0xf9f4);
      if (uVar11 != param_1) {
        if (uVar11 != 0xffffffff) {
          uVar13 = FUN_1000887d((void *)(*local_10 + 0x1674),uVar11,0);
          if (uVar13 != *(uint *)(*local_10 + 0x167c)) {
            iVar6 = *(int *)(*local_10 + 0x1678);
            iVar8 = uVar13 * 0x10;
            if (((*(uint *)(iVar8 + iVar6) == uVar11) && (*(int *)(iVar8 + 4 + iVar6) == 0)) &&
               (piVar9 = (int *)(iVar8 + 0xc + iVar6), piVar9 != (int *)0x0)) {
              *(undefined1 *)(*piVar9 + 0x20) = 0;
            }
          }
        }
        *(uint *)((int)this + uVar14 * 4 + 0xf9f4) = param_1;
      }
      iVar6 = *(int *)(*local_10 + 0x15e4);
      piVar9 = *(int **)(*(int *)(iVar6 + 0x34) + (param_1 >> 0x10) * 8);
      (**(code **)(*piVar9 + 0x24))(piVar9,&local_1c);
      local_1c = local_1c + (param_1 & 0xffff) * *(int *)(iVar6 + 0x18);
      *(int *)((int)this + uVar14 * 4 + 0xfa1c) = local_1c;
      pbVar4 = (byte *)((int)this + ((int)uVar14 >> 3) + 0xf69c);
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar14 & 7));
      uVar11 = 0;
      if (local_18 != 0) {
        for (; (local_18 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      *(undefined1 *)((int)this + 0xfda0) = 1;
      if (local_18 == 0) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = uVar11 & 0xff;
        pbVar4 = (byte *)((int)&local_18 + ((int)uVar11 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar11 & 7));
      }
      uVar13 = local_14;
    } while (uVar14 != 0xffffffff);
  }
  iVar6 = *(int *)((int)this + 0xfd78) + uVar13;
  if (iVar6 != 0) {
    iVar8 = *(int *)(*local_10 + 0x1304);
    cVar5 = FUN_100c2028(*(void **)((int)this + 0xf6cc),iVar6,
                         *(uint *)(*(int *)(*local_10 + 0x1300) + 0xc),*(uint *)(iVar8 + 0x938),
                         *(uint *)(iVar8 + 0x93c),(int *)&local_38);
    uVar11 = CONCAT31(extraout_var,cVar5);
    if (cVar5 == '\0') {
      local_9 = 0;
    }
    else {
      param_1 = *(uint *)((int)this + 0xfd78);
      uVar12 = local_38;
      if (param_1 != 0) {
        uVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6bc) + 0x5c))
                           ((int *)**(undefined4 **)((int)this + 0xf6bc),1,&local_30,&param_1,
                            param_1,(int)this + 0xf9a4,&DAT_100d5800,1);
        *(uint *)((int)this + 0xf8c8) = local_38;
        *(int *)((int)this + 0xf8cc) = local_34;
        uVar12 = local_38;
      }
      local_38 = uVar11;
      if (uVar13 != 0) {
        uVar11 = *(int *)((int)this + 0xfd78) * local_28;
        local_38 = uVar12 + uVar11;
        local_34 = local_34 + (uint)CARRY4(uVar12,uVar11);
        local_30 = local_30 + uVar11;
        param_1 = uVar13;
        (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6bc) + 0x5c))
                  ((int *)**(undefined4 **)((int)this + 0xf6bc),1,&local_30,&param_1,uVar13,
                   (int)this + 0xfa1c,&DAT_100d5800,1);
        *(uint *)((int)this + 0xf8e0) = local_38;
        *(int *)((int)this + 0xf8e4) = local_34;
      }
      bVar15 = local_2c != *(int *)((int)this + 0xfbc4);
      *(int *)((int)this + 0xfbc4) = local_2c;
      uVar11 = CONCAT31((int3)(local_38 >> 8),bVar15);
      *(undefined1 *)((int)this + 0xfd9a) = 1;
      *(byte *)((int)this + 0xfda1) = *(byte *)((int)this + 0xfda1) | bVar15;
    }
    *(undefined1 *)((int)this + 0xfda2) = 1;
  }
  *(undefined1 *)((int)this + 0xfda0) = 0;
LAB_1003ebf8:
  return CONCAT31((int3)(uVar11 >> 8),local_9);
}

