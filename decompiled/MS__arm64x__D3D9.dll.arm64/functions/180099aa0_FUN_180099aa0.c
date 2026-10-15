/*
 * FUN_180099aa0 at 180099aa0
 * undefined FUN_180099aa0(void)
 * Address ranges: 180099aa0-180099d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099aa0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  
  local_b0 = 0;
  local_a0 = *(undefined8 *)(param_1 + 0x30);
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = *(undefined4 *)(param_1 + -0xe0);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_98 = 0;
  local_6c = 0;
  local_68 = 0xffffffff00000000;
  local_60 = 0xffffffff;
  lVar12 = *(longlong *)(param_1 + -0xb0) +
           (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0;
  local_b8 = FUN_1800e54c0(*(longlong *)(param_1 + -0xb0),&local_b0);
  uVar18 = *(undefined8 *)(param_2 + 6);
  iVar17 = param_2[8];
  local_d0 = 0;
  local_c8 = 0;
  lVar16 = *(longlong *)(param_2 + 10);
  uVar15 = 0;
  local_c0 = 0;
  iVar19 = param_2[0xc];
  FUN_180101630(lVar12 + 0x1bc0);
  uVar14 = 0;
  uVar13 = 0;
  if (*(char *)(lVar12 + 0x1dc4) != '\0') {
    iVar4 = param_2[1] * *param_2 * 4;
    if (*(longlong *)(param_2 + 10) != 0) {
      iVar4 = param_2[1] * *param_2 * 8;
    }
    uVar7 = FUN_1800f2fc8(lVar12 + 0x20f0,iVar4,&local_d0);
    uVar15 = local_d0;
    uVar14 = local_c8;
    uVar13 = local_c0;
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_180044018(param_2[1],*param_2 << 2,uVar18,iVar17,local_d0,*param_2 << 2);
      iVar4 = *param_2;
      iVar17 = iVar4 << 2;
      uVar14 = local_c8;
      uVar18 = uVar15;
      uVar13 = local_c0;
      if (lVar16 != 0) {
        FUN_180044018(param_2[1],iVar4 << 2,lVar16,iVar19,lVar8,iVar4 << 2);
        iVar19 = *param_2 << 2;
        uVar14 = local_c8;
        lVar16 = lVar8;
        uVar13 = local_c0;
      }
    }
  }
  iVar5 = param_2[4];
  iVar4 = param_2[2];
  iVar2 = param_2[3];
  iVar1 = *param_2;
  iVar3 = param_2[1];
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar20 = *(undefined8 *)(param_1 + -0xb0);
  if (*(char *)(lVar12 + 0x1dc4) != '\0') {
    puVar9 = (undefined8 *)FUN_180101500(lVar12 + 0x1bc0,0x58);
    pcVar6 = __imp_KERNEL32_dll_Sleep;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar12 + 0x1dc0);
      puVar9[1] = 0x58;
      puVar9[2] = uVar20;
      puVar9[3] = local_b8;
      puVar9[4] = uVar10;
      *(int *)(puVar9 + 5) = iVar1;
      *(int *)((longlong)puVar9 + 0x2c) = iVar3;
      *(int *)(puVar9 + 6) = iVar4;
      *(int *)((longlong)puVar9 + 0x34) = iVar2;
      *(int *)(puVar9 + 7) = iVar5;
      *(undefined8 *)((longlong)puVar9 + 0x3c) = uVar18;
      *(int *)((longlong)puVar9 + 0x44) = iVar17;
      puVar9[9] = lVar16;
      *(int *)(puVar9 + 10) = iVar19;
      *(undefined8 *)((longlong)puVar9 + 0x54) = uVar15;
      *(undefined8 *)((longlong)puVar9 + 0x5c) = uVar14;
      puVar11 = (undefined8 *)((longlong)puVar9 + 0x6fU & 0xfffffffffffffff8);
      *(undefined4 *)((longlong)puVar9 + 100) = uVar13;
      *puVar11 = 0;
      *puVar9 = FUN_180099d60;
      *(undefined8 **)(lVar12 + (ulonglong)*(uint *)(lVar12 + 0x1dbc) * 0x28 + 0x1c50) = puVar11;
      pcVar6 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar12 + 0x1dc5) != '\0') {
        *(undefined4 *)(lVar12 + 0x1bc0) = 0;
        (*pcVar6)(*(undefined8 *)(lVar12 + 0x1c40));
        return;
      }
      goto LAB_180099d40;
    }
    *(undefined4 *)(lVar12 + 0x1bc0) = 0;
    (*pcVar6)(100);
    FUN_180101630(lVar12 + 0x1bc0);
  }
  puVar9 = *(undefined8 **)(lVar12 + 0x1da0);
  *puVar9 = uVar20;
  puVar9[1] = local_b8;
  puVar9[2] = uVar10;
  *(int *)(puVar9 + 3) = iVar1;
  *(int *)((longlong)puVar9 + 0x1c) = iVar3;
  *(int *)(puVar9 + 4) = iVar4;
  *(int *)((longlong)puVar9 + 0x24) = iVar2;
  *(int *)(puVar9 + 5) = iVar5;
  *(undefined8 *)((longlong)puVar9 + 0x2c) = uVar18;
  *(int *)((longlong)puVar9 + 0x34) = iVar17;
  puVar9[7] = lVar16;
  *(int *)(puVar9 + 8) = iVar19;
  *(undefined8 *)((longlong)puVar9 + 0x44) = uVar15;
  *(undefined8 *)((longlong)puVar9 + 0x4c) = uVar14;
  *(undefined4 *)((longlong)puVar9 + 0x54) = uVar13;
  FUN_180099d60();
LAB_180099d40:
  *(undefined4 *)(lVar12 + 0x1bc0) = 0;
  return;
}

