/*
 * FUN_1003d614 at 1003d614
 * undefined __thiscall FUN_1003d614(void * this, int param_1, char param_2)
 * Address ranges: 1003d614-1003d847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d614(void *this,int param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *this_00;
  bool bVar13;
  int local_dc [51];
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  iVar8 = 0;
  local_c = *(uint *)(param_1 + 0x10);
  uVar2 = 0;
  bVar13 = local_c != 0;
  if (bVar13) {
    for (; (local_c >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  param_1 = 0;
  local_8 = 0;
  iVar7 = param_1;
  uVar12 = local_8;
  while (param_1 = iVar7, local_8 = uVar12, bVar13) {
    uVar12 = uVar2 & 0xff;
    pbVar4 = (byte *)((int)&local_c + ((int)uVar2 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar2 & 7));
    iVar6 = *(int *)((int)this + uVar12 * 4 + 0xdcf8);
    iVar3 = (int)uVar12 >> 3;
    puVar11 = (undefined4 *)0x0;
    iVar9 = iVar8;
    if (iVar6 != 0) {
      local_10 = *(undefined4 **)(*(int *)(iVar6 + 0x28) + *(int *)(iVar6 + 0x38) * 8);
      LOCK();
      local_10[0xc] = local_10[0xc] + 1;
      UNLOCK();
      iVar8 = *(int *)((int)this + uVar12 * 4 + 0xdcf8);
      puVar11 = local_10;
      if (*(int *)(iVar8 + 0x1c) == 1) {
        pbVar4 = (byte *)(iVar8 + 0x20 + iVar3);
        bVar10 = *pbVar4;
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar2 & 7));
        bVar5 = (**(code **)(local_10[0xe] + 8))(uVar12);
        *(uint *)((int)this + 0xddbc) =
             *(uint *)((int)this + 0xddbc) |
             (uint)(bVar5 | (bVar10 >> (uVar2 & 7) & 1) != 0) << ((byte)uVar2 & 0x1f);
        puVar11 = local_10;
        iVar9 = iVar7;
      }
    }
    pbVar4 = (byte *)((int)this + iVar3 + 0xddbc);
    bVar10 = *pbVar4;
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar2 & 7));
    iVar8 = iVar9;
    if ((bVar10 >> (uVar2 & 7) & 1) != 0) {
      iVar8 = iVar9 + 1;
      local_dc[iVar9 * 3] = (int)puVar11;
      local_dc[iVar9 * 3 + 1] = *(int *)((int)this + uVar12 * 4 + 0xdd3c);
      local_dc[iVar9 * 3 + 2] = *(int *)((int)this + uVar12 * 4 + 0xdd7c);
      *(byte *)((int)&local_8 + iVar3) = *(byte *)((int)&local_8 + iVar3) | '\x01' << (uVar2 & 7);
      param_1 = iVar8;
    }
    uVar2 = 0;
    bVar13 = local_c != 0;
    iVar7 = param_1;
    uVar12 = local_8;
    if (bVar13) {
      for (; (local_c >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
  }
  bVar10 = 0;
  if (param_2 != '\0') {
    iVar8 = *(int *)((int)this + 0xdd38);
    iVar6 = 0;
    bVar10 = *(byte *)((int)this + 0xddd0);
    if (iVar8 != 0) {
      iVar6 = *(int *)(*(int *)(iVar8 + 0x28) + *(int *)(iVar8 + 0x38) * 8);
      LOCK();
      *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
      UNLOCK();
      if (*(int *)(*(int *)((int)this + 0xdd38) + 0x1c) == 1) {
        puVar1 = (uint *)(*(int *)((int)this + 0xdd38) + 0x20);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 & 0xfffffffe;
        bVar5 = (**(code **)(*(int *)(iVar6 + 0x38) + 8))(0);
        bVar10 = bVar10 | bVar5 | (uVar2 & 1) != 0;
      }
    }
    if (bVar10 != 0) {
      param_1 = iVar7 + 1;
      *(undefined1 *)((int)this + 0xddd0) = 0;
      local_dc[iVar7 * 3] = iVar6;
      local_dc[iVar7 * 3 + 1] = *(int *)((int)this + 0xddc0);
    }
  }
  if ((uVar12 == 0) && (bVar10 == 0)) {
    return;
  }
  iVar8 = *(int *)((int)this + 0xd9b8);
  this_00 = (int *)(iVar8 + 0x11c0);
  FUN_100abd50(this_00);
  if (*(char *)(iVar8 + 0x12ec) != '\0') {
    iVar7 = param_1 * 0xc + 0x10;
    local_10 = (undefined4 *)FUN_100abc70(this_00,iVar7);
    if (local_10 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar8 + 0x12e8) = *(int *)(iVar8 + 0x12e8) + 1;
      UNLOCK();
      local_10[1] = iVar7;
      local_10[3] = this;
      local_10[4] = local_8;
      puVar11 = (undefined4 *)((int)local_10 + 0x1bU & 0xfffffffc);
      *(byte *)(local_10 + 5) = bVar10;
      local_10[2] = puVar11;
      FUN_100adac0(puVar11,local_dc,param_1 * 0xc);
      puVar11[param_1 * 3] = 0;
      *local_10 = FUN_1003d848;
      this_00[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = (int)(puVar11 + param_1 * 3);
      if (*(char *)(iVar8 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar8 + 0x1220));
        return;
      }
      goto LAB_1003d83b;
    }
    FUN_1002f90d(this_00);
  }
  puVar1 = *(uint **)(iVar8 + 0x12d0);
  *puVar1 = (uint)local_dc;
  puVar1[1] = (uint)this;
  puVar1[2] = local_8;
  *(byte *)(puVar1 + 3) = bVar10;
  FUN_1003d848(puVar1);
LAB_1003d83b:
  *this_00 = 0;
  return;
}

