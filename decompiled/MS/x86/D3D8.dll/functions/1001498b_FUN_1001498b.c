/*
 * FUN_1001498b at 1001498b
 * uint __thiscall FUN_1001498b(void * this, int param_1, int * param_2)
 * Address ranges: 1001498b-10014d08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001498b(void *this,int param_1,int *param_2)

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
    return 0x8876086c;
  }
  if (((param_1 != 1) && (param_1 != 2)) && (param_1 != 3)) {
    return 0x8876086c;
  }
  if (*(char *)((int)this + 0x220) != '\0') {
    return 0x8876086c;
  }
  local_98 = this;
  local_7c = FUN_1001438d((int)this);
  if (local_7c == 0xffffffff) {
    return 0x8007000e;
  }
  bVar12 = param_1 != 3;
  local_90 = *(int *)(*(int *)((int)this + 0x210) + local_7c * 4);
  puVar3 = (undefined4 *)&DAT_100b33b0;
  if (bVar12) {
    puVar3 = &DAT_100b3438;
  }
  local_8c = 0x26;
  if (!bVar12) {
    local_8c = 0x21;
  }
  local_a0 = &DAT_100b34d0;
  if (bVar12) {
    local_a0 = &DAT_100b34d8;
  }
  local_94 = (void *)0x1b;
  if (!bVar12) {
    local_94 = (void *)2;
  }
  local_9c = 0;
  uVar9 = 0;
  if (param_1 == 1) {
    do {
      if (*(char *)(*(int *)((int)this + 4) + uVar9 * 8) != '\0') {
        *(undefined4 *)(local_90 + 8 + uVar9 * 4) = *(undefined4 *)((int)this + uVar9 * 4 + 0x28c);
        pbVar2 = (byte *)(local_90 + 0x9334 + (uVar9 >> 5) * 4 + ((int)(uVar9 & 0x1f) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar9 & 7);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0xae);
    uVar9 = 0;
    do {
      local_a4 = 0;
      uVar6 = local_a4;
      do {
        if (*(char *)(uVar9 * 0xc + *(int *)((int)this + 8)) != '\0') {
          *(undefined4 *)(local_90 + uVar9 * 4 + 0x2c0 + uVar6 * 0x74) =
               *(undefined4 *)((int)this + uVar6 * 0x74 + uVar9 * 4 + 0x544);
          uVar1 = uVar6 * 0x1d + uVar9;
          pbVar2 = (byte *)(local_90 + 0x934c + (uVar1 >> 5) * 4 + ((int)(uVar1 & 0x1f) >> 3));
          *pbVar2 = *pbVar2 | '\x01' << (uVar1 & 7);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x1d);
    puVar3 = (undefined4 *)((int)this + 0x104);
    puVar10 = (undefined4 *)(local_90 + 0x48e0);
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)(local_90 + 0x9399) = 1;
  }
  else {
    do {
      *(undefined4 *)(local_90 + 8 + puVar3[uVar9] * 4) =
           *(undefined4 *)((int)this + puVar3[uVar9] * 4 + 0x28c);
      uVar6 = puVar3[uVar9];
      pbVar2 = (byte *)(local_90 + 0x9334 + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_8c);
    local_a4 = 0;
    do {
      local_84 = local_a4 * 0x1d;
      local_8c = 0;
      local_80 = (void *)((int)this + local_a4 * 0x74);
      local_88 = (void *)(local_90 + local_a4 * 0x74);
      uVar9 = 0;
      do {
        *(undefined4 *)((int)local_88 + *(int *)(local_a0 + uVar9 * 4) * 4 + 0x2c0) =
             *(undefined4 *)((int)local_80 + *(int *)(local_a0 + uVar9 * 4) * 4 + 0x544);
        uVar6 = *(int *)(local_a0 + uVar9 * 4) + local_84;
        pbVar2 = (byte *)(local_90 + 0x934c + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_94);
      local_a4 = local_a4 + 1;
      this = local_98;
    } while (local_a4 < 8);
    uVar9 = 0;
    if (param_1 != 3) goto LAB_10014ce7;
  }
  puVar7 = (uint *)0x0;
  local_a0 = (undefined *)0x0;
  pvVar8 = local_98;
  if (*(int *)((int)local_98 + 0x150) != 0) {
    local_88 = (void *)(local_90 + 0x499c);
    local_94 = (void *)((int)local_98 + 0x174);
    puVar5 = puVar7;
    if (*(int *)((int)local_98 + 0x150) == 0) goto LAB_10014beb;
    do {
      puVar5 = (uint *)((int)local_a0 * 0x78 + *(int *)((int)pvVar8 + 0x14c) + 8);
LAB_10014beb:
      if (puVar5 != (uint *)0x0) {
        local_a4 = *puVar5;
        puVar11 = local_78;
        for (iVar4 = 0x1b; puVar5 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar11 = *puVar5;
          puVar11 = puVar11 + 1;
        }
        local_b = 1;
        uVar9 = FUN_10007b6a(local_94,(int *)&local_a4);
        local_c = uVar9 != 0xffffffff;
        FUN_10015e89(local_88,&local_a4,local_78);
        pvVar8 = local_98;
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 < *(undefined **)((int)pvVar8 + 0x150));
  }
  local_94 = (void *)0x0;
  do {
    puVar3 = (undefined4 *)(*(int *)((int)pvVar8 + 0xabc) + (int)puVar7 * 0x40);
    puVar10 = (undefined4 *)((int)puVar7 * 0x40 + 0x660 + local_90);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    pbVar2 = (byte *)(local_90 + 0x936c + ((uint)puVar7 >> 5) * 4 +
                     ((int)((uint)puVar7 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << ((uint)puVar7 & 7);
    puVar7 = (uint *)((int)puVar7 + 1);
    pvVar8 = local_98;
    uVar6 = local_9c;
  } while (puVar7 < (uint *)0x10a);
  do {
    *(undefined4 *)(local_90 + 0x493c + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x22c);
    *(undefined4 *)(local_90 + 0x4940 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x230);
    *(undefined4 *)(local_90 + 0x4944 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x234);
    *(undefined4 *)(local_90 + 0x4948 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x238);
    pbVar2 = (byte *)(local_90 + 0x9394 + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
    uVar6 = uVar6 + 1;
    uVar9 = local_8c;
  } while (uVar6 < 6);
LAB_10014ce7:
  local_8c = uVar9;
  uVar9 = local_9c;
  *(uint *)(local_90 + 4) = local_9c;
  (**(code **)(**(int **)((int)local_98 + 0x14) + 0x78))(local_90,local_9c);
  *param_2 = local_84 + 1;
  return uVar9;
}

