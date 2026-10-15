/*
 * FUN_1800a2ec8 at 1800a2ec8
 * undefined __fastcall FUN_1800a2ec8(longlong param_1, int * param_2)
 * Address ranges: 1800a2ec8-1800a31cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2ec8(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *local_80;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar15 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0 +
           *(longlong *)(param_1 + -0xb0);
  uVar11 = FUN_1800a2bc8(param_1 + -0x100);
  local_80 = *(undefined8 **)(param_2 + 6);
  piVar1 = (int *)(lVar15 + 0x1bc0);
  uVar19 = param_2[8];
  puVar17 = *(undefined8 **)(param_2 + 10);
  uVar18 = param_2[0xc];
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1800fab60(piVar1);
  puVar14 = local_68;
  if (*(char *)(lVar15 + 0x1dc4) != '\0') {
    uVar13 = param_2[1] * *param_2 * 8;
    if (*(longlong *)(param_2 + 10) == 0) {
      uVar13 = param_2[1] * *param_2 * 4;
    }
    bVar10 = FUN_1800ebdd4((LPCRITICAL_SECTION)(lVar15 + 0x20f0),uVar13,(longlong *)&local_68);
    puVar14 = local_68;
    if (bVar10) {
      puVar12 = FUN_18004ddfc(param_2[1],*param_2 * 4,local_80,uVar19,local_68,*param_2 * 4);
      local_80 = puVar14;
      uVar19 = *param_2 * 4;
      if (puVar17 != (undefined8 *)0x0) {
        FUN_18004ddfc(param_2[1],uVar19,puVar17,uVar18,puVar12,uVar19);
        uVar18 = *param_2 << 2;
        puVar17 = puVar12;
      }
    }
  }
  uVar9 = local_58;
  iVar2 = param_2[4];
  iVar3 = param_2[3];
  iVar4 = param_2[2];
  iVar5 = param_2[1];
  iVar6 = *param_2;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + -0xb0);
  if (*(char *)(lVar15 + 0x1dc4) != '\0') {
    puVar12 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x58);
    if (puVar12 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar15 + 0x1dc0) = *(int *)(lVar15 + 0x1dc0) + 1;
      UNLOCK();
      puVar16 = (undefined8 *)((longlong)puVar12 + 0x6fU & 0xfffffffffffffff8);
      puVar12[1] = 0x58;
      puVar12[2] = uVar8;
      puVar12[3] = uVar11;
      puVar12[4] = uVar7;
      *(int *)(puVar12 + 5) = iVar6;
      *(int *)((longlong)puVar12 + 0x2c) = iVar5;
      *(int *)(puVar12 + 6) = iVar4;
      *(int *)((longlong)puVar12 + 0x34) = iVar3;
      *(int *)(puVar12 + 7) = iVar2;
      *(undefined8 **)((longlong)puVar12 + 0x3c) = local_80;
      *(uint *)((longlong)puVar12 + 0x44) = uVar19;
      puVar12[9] = puVar17;
      *(uint *)(puVar12 + 10) = uVar18;
      *(undefined8 **)((longlong)puVar12 + 0x54) = puVar14;
      *(undefined8 *)((longlong)puVar12 + 0x5c) = uStack_60;
      *(undefined4 *)((longlong)puVar12 + 100) = uVar9;
      *puVar16 = 0;
      *puVar12 = FUN_1800a31cc;
      *(undefined8 **)(lVar15 + 0x1c50 + (ulonglong)*(uint *)(lVar15 + 0x1dbc) * 0x28) = puVar16;
      if (*(char *)(lVar15 + 0x1dc5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar15 + 0x1c40));
        return;
      }
      goto LAB_1800a31b3;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  puVar12 = *(undefined8 **)(lVar15 + 0x1da0);
  *puVar12 = uVar8;
  puVar12[1] = uVar11;
  puVar12[2] = uVar7;
  *(int *)(puVar12 + 3) = iVar6;
  *(int *)((longlong)puVar12 + 0x1c) = iVar5;
  *(int *)(puVar12 + 4) = iVar4;
  *(int *)((longlong)puVar12 + 0x24) = iVar3;
  *(int *)(puVar12 + 5) = iVar2;
  *(undefined8 **)((longlong)puVar12 + 0x2c) = local_80;
  *(uint *)((longlong)puVar12 + 0x34) = uVar19;
  puVar12[7] = puVar17;
  *(uint *)(puVar12 + 8) = uVar18;
  *(undefined8 **)((longlong)puVar12 + 0x44) = puVar14;
  *(undefined8 *)((longlong)puVar12 + 0x4c) = uStack_60;
  *(undefined4 *)((longlong)puVar12 + 0x54) = uVar9;
  FUN_1800a31cc(puVar12);
LAB_1800a31b3:
  FUN_1800facb0(piVar1);
  return;
}

