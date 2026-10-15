/*
 * FUN_1801b0ed8 at 1801b0ed8
 * undefined FUN_1801b0ed8(void)
 * Address ranges: 1801b0ed8-1801b11e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b0ed8(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int local_fc;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  local_a0 = 0;
  local_90 = *(undefined8 *)(param_1 + 0x30);
  local_80 = 0;
  uStack_78 = 0;
  local_98 = *(undefined4 *)(param_1 + -0xe0);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_88 = 0;
  local_5c = 0;
  local_58 = 0xffffffff00000000;
  lVar17 = *(longlong *)(param_1 + -0xb0) +
           (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0;
  local_50 = 0xffffffff;
  local_a8 = FUN_180202770(*(longlong *)(param_1 + -0xb0),&local_a0);
  local_d0 = *(undefined8 *)(param_2 + 6);
  local_fc = param_2[0xc];
  iVar16 = param_2[8];
  local_c0 = 0;
  local_b8 = 0;
  lVar15 = *(longlong *)(param_2 + 10);
  uVar14 = 0;
  local_b0 = 0;
  FUN_180221850(lVar17 + 0x1bc0);
  uVar13 = 0;
  uVar12 = 0;
  if (*(char *)(lVar17 + 0x1dc4) != '\0') {
    iVar4 = param_2[1] * *param_2 * 4;
    if (*(longlong *)(param_2 + 10) != 0) {
      iVar4 = param_2[1] * *param_2 * 8;
    }
    uVar6 = FUN_180211ab0(lVar17 + 0x20f0,iVar4,&local_c0);
    uVar14 = local_c0;
    uVar13 = local_b8;
    uVar12 = local_b0;
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_180152fa0(param_2[1],*param_2 << 2,local_d0,iVar16,local_c0,*param_2 << 2);
      iVar4 = *param_2;
      local_d0 = uVar14;
      iVar16 = iVar4 << 2;
      uVar13 = local_b8;
      uVar12 = local_b0;
      if (lVar15 != 0) {
        FUN_180152fa0(param_2[1],iVar4 << 2,lVar15,local_fc,lVar7,iVar4 << 2);
        local_fc = *param_2 << 2;
        uVar13 = local_b8;
        lVar15 = lVar7;
        uVar12 = local_b0;
      }
    }
  }
  iVar5 = param_2[4];
  iVar4 = param_2[2];
  iVar2 = param_2[3];
  iVar1 = *param_2;
  iVar3 = param_2[1];
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + -0xb0);
  if (*(char *)(lVar17 + 0x1dc4) != '\0') {
    puVar8 = (undefined8 *)FUN_1802218b0(lVar17 + 0x1bc0,0x58);
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar17 + 0x1dc0);
      puVar8[1] = 0x58;
      puVar8[2] = uVar10;
      puVar8[3] = local_a8;
      puVar8[4] = uVar9;
      *(int *)(puVar8 + 5) = iVar1;
      *(int *)((longlong)puVar8 + 0x2c) = iVar3;
      *(int *)(puVar8 + 6) = iVar4;
      *(int *)((longlong)puVar8 + 0x34) = iVar2;
      *(int *)(puVar8 + 7) = iVar5;
      *(undefined8 *)((longlong)puVar8 + 0x3c) = local_d0;
      *(int *)((longlong)puVar8 + 0x44) = iVar16;
      puVar8[9] = lVar15;
      *(int *)(puVar8 + 10) = local_fc;
      *(undefined8 *)((longlong)puVar8 + 0x54) = uVar14;
      *(undefined8 *)((longlong)puVar8 + 0x5c) = uVar13;
      puVar11 = (undefined8 *)((longlong)puVar8 + 0x6fU & 0xfffffffffffffff8);
      *(undefined4 *)((longlong)puVar8 + 100) = uVar12;
      DataMemoryBarrier(2,3);
      *puVar11 = 0;
      *puVar8 = FUN_1801b11f0;
      *(undefined8 **)(lVar17 + (ulonglong)*(uint *)(lVar17 + 0x1dbc) * 0x28 + 0x1c50) = puVar11;
      if (*(char *)(lVar17 + 0x1dc5) != '\0') {
        FUN_180221bb0(lVar17 + 0x1bc0);
        thunk_FUN_180223874(*(undefined8 *)(lVar17 + 0x1c40));
        return;
      }
      goto LAB_1801b11c0;
    }
    FUN_180221bb0(lVar17 + 0x1bc0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar17 + 0x1bc0);
  }
  puVar8 = *(undefined8 **)(lVar17 + 0x1da0);
  *puVar8 = uVar10;
  puVar8[1] = local_a8;
  puVar8[2] = uVar9;
  *(int *)(puVar8 + 3) = iVar1;
  *(int *)((longlong)puVar8 + 0x1c) = iVar3;
  *(int *)(puVar8 + 4) = iVar4;
  *(int *)((longlong)puVar8 + 0x24) = iVar2;
  *(int *)(puVar8 + 5) = iVar5;
  *(undefined8 *)((longlong)puVar8 + 0x2c) = local_d0;
  *(int *)((longlong)puVar8 + 0x34) = iVar16;
  puVar8[7] = lVar15;
  *(int *)(puVar8 + 8) = local_fc;
  *(undefined8 *)((longlong)puVar8 + 0x44) = uVar14;
  *(undefined8 *)((longlong)puVar8 + 0x4c) = uVar13;
  *(undefined4 *)((longlong)puVar8 + 0x54) = uVar12;
  FUN_1801b11f0();
LAB_1801b11c0:
  FUN_180221bb0(lVar17 + 0x1bc0);
  return;
}

