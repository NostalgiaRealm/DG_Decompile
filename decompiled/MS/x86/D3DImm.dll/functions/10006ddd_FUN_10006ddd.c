/*
 * FUN_10006ddd at 10006ddd
 * uint __thiscall FUN_10006ddd(void * this, int param_1, int * param_2)
 * Address ranges: 10006ddd-1000715a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10006ddd(void *this,int param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  void *pvVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  bool bVar12;
  uint local_a4;
  undefined *local_a0;
  uint local_9c;
  void *local_98;
  void *local_94;
  int local_90;
  uint local_8c;
  void *local_88;
  int local_84;
  void *local_80;
  uint local_7c;
  uint local_78 [27];
  undefined1 local_c;
  undefined1 local_b;
  
  if (param_2 == (int *)0x0) {
    return 0x80070057;
  }
  if (((param_1 != 1) && (param_1 != 2)) && (param_1 != 3)) {
    return 0x80070057;
  }
  if (*(char *)((int)this + 0x224) != '\0') {
    return 0x88760835;
  }
  local_98 = this;
  local_7c = FUN_100067fe((int)this);
  if (local_7c == 0xffffffff) {
    return 0x8007000e;
  }
  bVar12 = param_1 != 3;
  local_90 = *(int *)(*(int *)((int)this + 0x214) + local_7c * 4);
  puVar3 = (undefined4 *)&DAT_1005f220;
  if (bVar12) {
    puVar3 = &DAT_1005f280;
  }
  local_8c = 0x28;
  if (!bVar12) {
    local_8c = 0x18;
  }
  local_a0 = &DAT_1005f320;
  if (bVar12) {
    local_a0 = &DAT_1005f328;
  }
  local_94 = (void *)0x18;
  if (!bVar12) {
    local_94 = (void *)2;
  }
  local_9c = 0;
  uVar9 = 0;
  if (param_1 == 1) {
    do {
      if (*(char *)(*(int *)((int)this + 4) + uVar9 * 8) != '\0') {
        *(undefined4 *)(local_90 + 8 + uVar9 * 4) = *(undefined4 *)((int)this + uVar9 * 4 + 0x290);
        pbVar2 = (byte *)(local_90 + 0xa1c + (uVar9 >> 5) * 4 + ((int)(uVar9 & 0x1f) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar9 & 7);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x99);
    uVar9 = 0;
    do {
      local_a4 = 0;
      uVar6 = local_a4;
      do {
        if (*(char *)(uVar9 * 0xc + *(int *)((int)this + 8)) != '\0') {
          *(undefined4 *)(local_90 + uVar9 * 4 + 0x26c + uVar6 * 100) =
               *(undefined4 *)((int)this + uVar6 * 100 + uVar9 * 4 + 0x4f4);
          uVar1 = uVar6 * 0x19 + uVar9;
          pbVar2 = (byte *)(local_90 + 0xa30 + (uVar1 >> 5) * 4 + ((int)(uVar1 & 0x1f) >> 3));
          *pbVar2 = *pbVar2 | '\x01' << (uVar1 & 7);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x19);
    puVar3 = (undefined4 *)((int)this + 0x104);
    puVar10 = (undefined4 *)(local_90 + 0x90c);
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)(local_90 + 0xa59) = 1;
  }
  else {
    do {
      *(undefined4 *)(local_90 + 8 + puVar3[uVar9] * 4) =
           *(undefined4 *)((int)this + puVar3[uVar9] * 4 + 0x290);
      uVar6 = puVar3[uVar9];
      pbVar2 = (byte *)(local_90 + 0xa1c + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_8c);
    local_a4 = 0;
    do {
      local_84 = local_a4 * 0x19;
      local_8c = 0;
      local_80 = (void *)((int)this + local_a4 * 100);
      local_88 = (void *)(local_90 + local_a4 * 100);
      uVar9 = 0;
      do {
        *(undefined4 *)((int)local_88 + *(int *)(local_a0 + uVar9 * 4) * 4 + 0x26c) =
             *(undefined4 *)((int)local_80 + *(int *)(local_a0 + uVar9 * 4) * 4 + 0x4f4);
        uVar6 = *(int *)(local_a0 + uVar9 * 4) + local_84;
        pbVar2 = (byte *)(local_90 + 0xa30 + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_94);
      local_a4 = local_a4 + 1;
      this = local_98;
    } while (local_a4 < 8);
    uVar9 = 0;
    if (param_1 != 3) goto LAB_10007136;
  }
  puVar7 = (uint *)0x0;
  local_a0 = (undefined *)0x0;
  pvVar8 = local_98;
  if (*(int *)((int)local_98 + 0x154) != 0) {
    local_88 = (void *)(local_90 + 0x9cc);
    local_94 = (void *)((int)local_98 + 0x178);
    puVar5 = puVar7;
    if (*(int *)((int)local_98 + 0x154) == 0) goto LAB_1000703d;
    do {
      puVar5 = (uint *)((int)local_a0 * 0x78 + *(int *)((int)pvVar8 + 0x150) + 8);
LAB_1000703d:
      if (puVar5 != (uint *)0x0) {
        local_a4 = *puVar5;
        puVar11 = local_78;
        for (iVar4 = 0x1b; puVar5 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar11 = *puVar5;
          puVar11 = puVar11 + 1;
        }
        local_b = 1;
        uVar9 = FUN_100081c6(local_94,(int *)&local_a4);
        local_c = uVar9 != 0xffffffff;
        FUN_1000834a(local_88,&local_a4,local_78);
        pvVar8 = local_98;
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 < *(undefined **)((int)pvVar8 + 0x154));
  }
  local_94 = (void *)0x0;
  do {
    puVar3 = (undefined4 *)(*(int *)((int)pvVar8 + 0x9cc) + (int)puVar7 * 0x40);
    puVar10 = (undefined4 *)((int)puVar7 * 0x40 + 0x58c + local_90);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    pbVar2 = (byte *)(local_90 + 0xa4c + ((uint)puVar7 >> 5) * 4 + ((int)((uint)puVar7 & 0x1f) >> 3)
                     );
    *pbVar2 = *pbVar2 | '\x01' << ((uint)puVar7 & 7);
    puVar7 = (uint *)((int)puVar7 + 1);
    pvVar8 = local_98;
    uVar6 = local_9c;
  } while (puVar7 < (uint *)0xe);
  do {
    *(undefined4 *)(local_90 + 0x96c + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x230);
    *(undefined4 *)(local_90 + 0x970 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x234);
    *(undefined4 *)(local_90 + 0x974 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x238);
    *(undefined4 *)(local_90 + 0x978 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x23c);
    pbVar2 = (byte *)(local_90 + 0xa54 + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
    uVar6 = uVar6 + 1;
    uVar9 = local_8c;
  } while (uVar6 < 6);
LAB_10007136:
  local_8c = uVar9;
  uVar9 = local_9c;
  *(uint *)(local_90 + 4) = local_9c;
  (**(code **)(**(int **)((int)local_98 + 0x14) + 0x80))(local_90,local_9c);
  *param_2 = local_84 + 1;
  return uVar9;
}

