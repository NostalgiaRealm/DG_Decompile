/*
 * FUN_10018ac7 at 10018ac7
 * uint __thiscall FUN_10018ac7(void * this, int param_1, int * param_2)
 * Address ranges: 10018ac7-10018e44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10018ac7(void *this,int param_1,int *param_2)

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
  if (*(char *)((int)this + 0x3c4) != '\0') {
    return 0x8876086c;
  }
  local_98 = this;
  local_7c = FUN_1001850a((int)this);
  if (local_7c == 0xffffffff) {
    return 0x8007000e;
  }
  bVar12 = param_1 != 3;
  local_90 = *(int *)(*(int *)((int)this + 0x3b4) + local_7c * 4);
  puVar3 = (undefined4 *)&DAT_100d6de0;
  if (bVar12) {
    puVar3 = &DAT_100d6e88;
  }
  local_8c = 0x43;
  if (!bVar12) {
    local_8c = 0x2a;
  }
  local_a0 = &DAT_100d6f94;
  if (bVar12) {
    local_a0 = &DAT_100d6fa0;
  }
  local_94 = (void *)0x11;
  if (!bVar12) {
    local_94 = (void *)2;
  }
  local_9c = 0;
  uVar9 = 0;
  if (param_1 == 1) {
    do {
      if (*(char *)(*(int *)((int)this + 4) + uVar9 * 8) != '\0') {
        *(undefined4 *)(local_90 + 8 + uVar9 * 4) = *(undefined4 *)((int)this + uVar9 * 4 + 0x430);
        pbVar2 = (byte *)(local_90 + 0xaba8 + (uVar9 >> 5) * 4 + ((int)(uVar9 & 0x1f) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar9 & 7);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0xd2);
    uVar9 = 0;
    do {
      local_a4 = 0;
      uVar6 = local_a4;
      do {
        if (*(char *)(uVar9 * 0xc + *(int *)((int)this + 8)) != '\0') {
          *(undefined4 *)(local_90 + uVar9 * 4 + 0x350 + uVar6 * 0x84) =
               *(undefined4 *)((int)this + uVar6 * 0x84 + uVar9 * 4 + 0x778);
          uVar1 = uVar6 * 0x21 + uVar9;
          pbVar2 = (byte *)(local_90 + 0xabc4 + (uVar1 >> 5) * 4 + ((int)(uVar1 & 0x1f) >> 3));
          *pbVar2 = *pbVar2 | '\x01' << (uVar1 & 7);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x21);
    puVar3 = (undefined4 *)((int)this + 0x2a8);
    puVar10 = (undefined4 *)(local_90 + 0x49f0);
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)(local_90 + 0xac15) = 1;
  }
  else {
    do {
      *(undefined4 *)(local_90 + 8 + puVar3[uVar9] * 4) =
           *(undefined4 *)((int)this + puVar3[uVar9] * 4 + 0x430);
      uVar6 = puVar3[uVar9];
      pbVar2 = (byte *)(local_90 + 0xaba8 + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_8c);
    local_a4 = 0;
    do {
      local_84 = local_a4 * 0x21;
      local_8c = 0;
      local_80 = (void *)((int)this + local_a4 * 0x84);
      local_88 = (void *)(local_90 + local_a4 * 0x84);
      uVar9 = 0;
      do {
        *(undefined4 *)((int)local_88 + *(int *)(local_a0 + uVar9 * 4) * 4 + 0x350) =
             *(undefined4 *)((int)local_80 + *(int *)(local_a0 + uVar9 * 4) * 4 + 0x778);
        uVar6 = *(int *)(local_a0 + uVar9 * 4) + local_84;
        pbVar2 = (byte *)(local_90 + 0xabc4 + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_94);
      local_a4 = local_a4 + 1;
      this = local_98;
    } while (local_a4 < 8);
    uVar9 = 0;
    if (param_1 != 3) goto LAB_10018e23;
  }
  puVar7 = (uint *)0x0;
  local_a0 = (undefined *)0x0;
  pvVar8 = local_98;
  if (*(int *)((int)local_98 + 0x2f4) != 0) {
    local_88 = (void *)(local_90 + 0x4aac);
    local_94 = (void *)((int)local_98 + 0x318);
    puVar5 = puVar7;
    if (*(int *)((int)local_98 + 0x2f4) == 0) goto LAB_10018d27;
    do {
      puVar5 = (uint *)((int)local_a0 * 0x78 + *(int *)((int)pvVar8 + 0x2f0) + 8);
LAB_10018d27:
      if (puVar5 != (uint *)0x0) {
        local_a4 = *puVar5;
        puVar11 = local_78;
        for (iVar4 = 0x1b; puVar5 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar11 = *puVar5;
          puVar11 = puVar11 + 1;
        }
        local_b = 1;
        uVar9 = FUN_100086bd(local_94,(int *)&local_a4);
        local_c = uVar9 != 0xffffffff;
        FUN_10019ee7(local_88,&local_a4,local_78);
        pvVar8 = local_98;
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 < *(undefined **)((int)pvVar8 + 0x2f4));
  }
  local_94 = (void *)0x0;
  do {
    puVar3 = (undefined4 *)(*(int *)((int)pvVar8 + 0xd80) + (int)puVar7 * 0x40);
    puVar10 = (undefined4 *)((int)puVar7 * 0x40 + 0x770 + local_90);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    pbVar2 = (byte *)(local_90 + 0xabe8 + ((uint)puVar7 >> 5) * 4 +
                     ((int)((uint)puVar7 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << ((uint)puVar7 & 7);
    puVar7 = (uint *)((int)puVar7 + 1);
    pvVar8 = local_98;
    uVar6 = local_9c;
  } while (puVar7 < (uint *)0x10a);
  do {
    *(undefined4 *)(local_90 + 0x4a4c + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x3d0);
    *(undefined4 *)(local_90 + 0x4a50 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x3d4);
    *(undefined4 *)(local_90 + 0x4a54 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x3d8);
    *(undefined4 *)(local_90 + 0x4a58 + uVar6 * 0x10) =
         *(undefined4 *)((int)local_98 + uVar6 * 0x10 + 0x3dc);
    pbVar2 = (byte *)(local_90 + 0xac10 + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
    uVar6 = uVar6 + 1;
    uVar9 = local_8c;
  } while (uVar6 < 6);
LAB_10018e23:
  local_8c = uVar9;
  uVar9 = local_9c;
  *(uint *)(local_90 + 4) = local_9c;
  (**(code **)(**(int **)((int)local_98 + 0x14) + 0x78))(local_90,local_9c);
  *param_2 = local_84 + 1;
  return uVar9;
}

