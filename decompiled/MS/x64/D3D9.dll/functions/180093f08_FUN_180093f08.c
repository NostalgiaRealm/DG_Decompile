/*
 * FUN_180093f08 at 180093f08
 * undefined8 __fastcall FUN_180093f08(longlong param_1, longlong param_2, int param_3, undefined8 * param_4)
 * Address ranges: 180093f08-18009416f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180093f08(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  BOOL BVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined4 extraout_var;
  undefined8 uVar16;
  undefined4 extraout_var_00;
  undefined8 *puVar17;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  LOCK();
  *(int *)(param_1 + 0x1d16c) = *(int *)(param_1 + 0x1d16c) + 1;
  UNLOCK();
  puVar13 = (undefined4 *)(param_2 + -0xe0);
  local_90 = 0;
  local_88 = 0;
  if (param_2 == 0) {
    puVar13 = (undefined4 *)&DAT_00000020;
  }
  local_80 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_a0 = *puVar13;
  puVar14 = (undefined8 *)(param_2 + 0x30);
  if (param_2 == 0) {
    puVar14 = (undefined8 *)&DAT_00000130;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_98 = *puVar14;
  local_5c = 0xffffffff;
  local_58 = 0xffffffff;
  local_a8 = param_1;
  plVar15 = FUN_1800dfe90(*(LARGE_INTEGER *)(param_1 + 0x1cf10),&local_a8);
  lVar9 = *(longlong *)(param_1 + 0x1cf18);
  uVar12 = *(undefined4 *)(param_4 + 4);
  uVar2 = *(undefined1 *)((longlong)param_4 + 0x24);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar4 = *(undefined4 *)(param_4 + 3);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar6 = *(undefined4 *)(param_4 + 2);
  uVar7 = *(undefined4 *)((longlong)param_4 + 0xc);
  uVar8 = *(undefined4 *)(param_4 + 1);
  uVar16 = *param_4;
  piVar1 = (int *)(lVar9 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar9 + 0x14c4) == '\0') {
LAB_1800940c7:
    plVar10 = *(longlong **)(lVar9 + 0x14a0);
    *plVar10 = param_1;
    plVar10[1] = param_2;
    *(int *)(plVar10 + 2) = param_3;
    *(undefined8 *)((longlong)plVar10 + 0x14) = uVar16;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar8;
    *(undefined4 *)(plVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)plVar10 + 0x24) = uVar6;
    *(undefined4 *)(plVar10 + 5) = uVar5;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = uVar4;
    *(undefined4 *)(plVar10 + 6) = uVar3;
    *(undefined4 *)((longlong)plVar10 + 0x34) = uVar12;
    *(undefined1 *)(plVar10 + 7) = uVar2;
    FUN_180094170(plVar10);
  }
  else {
    puVar14 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x40);
    if (puVar14 == (undefined8 *)0x0) {
      FUN_1800facb0(piVar1);
      Sleep(100);
      FUN_1800fab60(piVar1);
      goto LAB_1800940c7;
    }
    LOCK();
    *(int *)(lVar9 + 0x14c0) = *(int *)(lVar9 + 0x14c0) + 1;
    UNLOCK();
    puVar14[1] = 0x40;
    puVar17 = (undefined8 *)((longlong)puVar14 + 0x53U & 0xfffffffffffffff8);
    puVar14[2] = param_1;
    puVar14[3] = param_2;
    *(int *)(puVar14 + 4) = param_3;
    *(undefined8 *)((longlong)puVar14 + 0x24) = uVar16;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar8;
    *(undefined4 *)(puVar14 + 6) = uVar7;
    *(undefined4 *)((longlong)puVar14 + 0x34) = uVar6;
    *(undefined4 *)(puVar14 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0x3c) = uVar4;
    *(undefined4 *)(puVar14 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0x44) = uVar12;
    *(undefined1 *)(puVar14 + 9) = uVar2;
    *puVar17 = 0;
    *puVar14 = FUN_180094170;
    *(undefined8 **)(lVar9 + 0x1350 + (ulonglong)*(uint *)(lVar9 + 0x14bc) * 0x28) = puVar17;
    if (*(char *)(lVar9 + 0x14c5) != '\0') {
      FUN_1800facb0(piVar1);
      BVar11 = SetEvent(*(HANDLE *)(lVar9 + 0x1340));
      uVar16 = CONCAT44(extraout_var,BVar11);
      goto LAB_18009411c;
    }
  }
  uVar16 = FUN_1800facb0(piVar1);
LAB_18009411c:
  if (param_3 != 0) {
    uVar16 = FUN_1800fb1f0(*(longlong *)(param_1 + 0x1cf18) + 0x12c0);
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_1800e0fa4(*(longlong *)(param_1 + 0x1cf10),(longlong)plVar15);
    uVar12 = FUN_1800e05b4(*(longlong **)(param_1 + 0x1cf10),*plVar15,0);
    uVar16 = CONCAT44(extraout_var_00,uVar12);
  }
  return CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
}

