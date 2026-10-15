/*
 * FUN_100880be at 100880be
 * undefined __thiscall FUN_100880be(void * this, int * param_1)
 * Address ranges: 100880be-10088342
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100880be(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int *this_00;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar13 = *(int *)(*(int *)((int)this + 0x24) + 8) * 0x16c0;
  iVar1 = *(int *)((int)this + -0x80);
  uVar8 = FUN_10087ebc((int)this + -0xc0);
  local_3c = (undefined4 *)param_1[5];
  uVar12 = param_1[6];
  local_38 = (undefined4 *)param_1[7];
  local_34 = param_1[8];
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_c = 0;
  this_00 = (int *)(iVar13 + iVar1 + 0x1880);
  FUN_100ce620(this_00);
  if ((char)this_00[0x4b] != '\0') {
    uVar9 = param_1[1] * *param_1 * 8;
    if (param_1[7] == 0) {
      uVar9 = param_1[1] * *param_1 * 4;
    }
    bVar7 = FUN_100c245a((void *)(iVar1 + 0x1bb0 + iVar13),uVar9,(int *)&local_14);
    if (bVar7) {
      puVar10 = FUN_10045dc1(param_1[1],*param_1 << 2,local_3c,uVar12,local_14,*param_1 << 2);
      uVar12 = *param_1 << 2;
      local_3c = local_14;
      if (local_38 != (undefined4 *)0x0) {
        FUN_10045dc1(param_1[1],uVar12,local_38,local_34,puVar10,uVar12);
        local_34 = *param_1 << 2;
        local_38 = puVar10;
      }
    }
  }
  iVar1 = param_1[4];
  iVar13 = param_1[3];
  iVar2 = param_1[2];
  iVar3 = param_1[1];
  iVar4 = *param_1;
  uVar5 = *(undefined4 *)((int)this + 0x20);
  uVar6 = *(undefined4 *)((int)this + -0x80);
  if ((char)this_00[0x4b] != '\0') {
    puVar10 = (undefined4 *)FUN_100ce540(this_00,0x3c);
    if (puVar10 != (undefined4 *)0x0) {
      LOCK();
      this_00[0x4a] = this_00[0x4a] + 1;
      UNLOCK();
      puVar10[1] = 0x3c;
      puVar10[2] = uVar6;
      puVar10[3] = uVar8;
      puVar10[4] = uVar5;
      puVar10[5] = iVar4;
      puVar10[6] = iVar3;
      puVar10[7] = iVar2;
      puVar10[8] = iVar13;
      puVar10[9] = iVar1;
      puVar10[10] = local_3c;
      puVar10[0xb] = uVar12;
      puVar10[0xc] = local_38;
      puVar10[0xd] = local_34;
      puVar10[0xe] = local_14;
      puVar10[0xf] = local_10;
      puVar10[0x10] = local_c;
      puVar11 = (undefined4 *)((int)puVar10 + 0x47U & 0xfffffffc);
      *puVar11 = 0;
      *puVar10 = FUN_100883f5;
      this_00[this_00[0x49] * 5 + 0x1a] = (int)puVar11;
      if (*(char *)((int)this_00 + 0x12d) != '\0') {
        *this_00 = 0;
        SetEvent((HANDLE)this_00[0x18]);
        return;
      }
      goto LAB_10088334;
    }
    FUN_1003971e(this_00);
  }
  puVar10 = (undefined4 *)this_00[0x44];
  *puVar10 = uVar6;
  puVar10[1] = uVar8;
  puVar10[2] = uVar5;
  puVar10[3] = iVar4;
  puVar10[4] = iVar3;
  puVar10[5] = iVar2;
  puVar10[6] = iVar13;
  puVar10[7] = iVar1;
  puVar10[8] = local_3c;
  puVar10[9] = uVar12;
  puVar10[10] = local_38;
  puVar10[0xb] = local_34;
  puVar10[0xc] = local_14;
  puVar10[0xd] = local_10;
  puVar10[0xe] = local_c;
  FUN_100883f5(puVar10);
LAB_10088334:
  *this_00 = 0;
  return;
}

