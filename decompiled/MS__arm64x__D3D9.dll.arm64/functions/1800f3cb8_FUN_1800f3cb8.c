/*
 * FUN_1800f3cb8 at 1800f3cb8
 * undefined FUN_1800f3cb8(void)
 * Address ranges: 1800f3cb8-1800f4033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800f3cb8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  longlong *local_d0;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  if (*(int *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 4) * 0x30 + 0x18) + 1U <=
      *(uint *)(param_1 + 5)) goto LAB_1800f3fd0;
  uVar4 = *(uint *)(param_1 + 3);
  uVar1 = *(uint *)(param_1 + 4) + 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1800f3d1c);
    (*pcVar7)();
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar1 / uVar4;
  }
  uVar1 = uVar1 - uVar5 * uVar4;
  lVar11 = param_1[2] + (ulonglong)uVar1 * 0x30;
  uVar9 = (**(code **)(**(longlong **)(lVar11 + 0x20) + 0x40))();
  if (*(ulonglong *)(lVar11 + 0x28) <= uVar9) {
    *(uint *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1[2] + (ulonglong)uVar1 * 0x30 + 0x18) = 0;
    goto LAB_1800f3fd0;
  }
  local_e0 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_dc = (undefined4)param_1[5];
  local_d8 = 0;
  plStack_c8 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  plVar10 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
  iVar8 = (**(code **)(*plVar10 + 0x138))(plVar10,&local_e0,&DAT_18023c040,&local_d0);
  if (iVar8 < 0) goto LAB_1800f3f98;
  local_a0 = 3;
  uStack_98 = 0;
  local_78[0] = 1;
  local_90 = 0;
  local_70 = 0;
  puVar2 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
  if ((*(uint *)((longlong)puVar2 + 0x14) & 1) == 0) {
    uVar1 = (int)param_1[5] << 3;
  }
  else {
    uVar1 = (int)param_1[5] * 0xc;
  }
  local_68 = (ulonglong)uVar1;
  local_48 = 0;
  uStack_60 = 0x1000100000001;
  local_58 = 0x100000000;
  uStack_50 = 0x100000000;
  plVar10 = (longlong *)*puVar2;
  iVar8 = (**(code **)(*plVar10 + 0xd8))
                    (plVar10,&local_a0,0,local_78,0x400,0,&DAT_180235458,&plStack_c8);
  if (iVar8 < 0) {
LAB_1800f3f88:
    (**(code **)(*local_d0 + 0x10))();
LAB_1800f3f98:
    FUN_1800d17d8(s__dgVoodoo__D3D12_Core__FATAL_ERR_18023b930,s_a_query_ring_buffer_18023c028);
    (*__imp_KERNEL32_dll_DebugBreak)();
    return 0;
  }
  local_88 = 0;
  uStack_80 = 0;
  (**(code **)(*plStack_c8 + 0x40))(plStack_c8,0,&local_88,&uStack_c0);
  iVar8 = *(int *)((longlong)param_1 + 0x1c);
  if ((int)param_1[3] == 0) {
    if (iVar8 == 0) {
      lVar11 = thunk_FUN_180102f80(0x300);
      if (lVar11 == 0) goto LAB_1800f3f78;
      thunk_FUN_180001218(lVar11,param_1[2],(ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30);
      thunk_FUN_180102fc0(param_1[2]);
      param_1[2] = lVar11;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0x10;
    }
    uVar1 = *(uint *)(param_1 + 3);
  }
  else {
    lVar11 = param_1[4];
    if ((int)param_1[3] == iVar8) {
      uVar1 = iVar8 << 1;
      if (iVar8 == 0) {
        uVar1 = 0x10;
      }
      lVar12 = CONCAT44(0,uVar1) * 0x30;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = CONCAT44(0,uVar1);
      if (SUB168(auVar6 * ZEXT816(0x30),8) != 0) {
        lVar12 = -1;
      }
      lVar12 = thunk_FUN_180102f80(lVar12);
      if (lVar12 == 0) {
LAB_1800f3f78:
        (**(code **)(*plStack_c8 + 0x10))();
        goto LAB_1800f3f88;
      }
      thunk_FUN_180001218(lVar12,param_1[2],(ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30);
      thunk_FUN_180102fc0(param_1[2]);
      param_1[2] = lVar12;
      *(uint *)((longlong)param_1 + 0x1c) = uVar1;
    }
    uVar1 = (int)lVar11 + 1;
    uVar9 = (ulonglong)*(uint *)(param_1 + 3);
    while (uVar1 < (uint)uVar9) {
      uVar13 = (ulonglong)((uint)uVar9 - 1);
      puVar2 = (undefined8 *)(param_1[2] + uVar9 * 0x30);
      puVar3 = (undefined8 *)(param_1[2] + uVar13 * 0x30);
      uVar16 = *puVar3;
      uVar15 = puVar3[3];
      uVar14 = puVar3[2];
      puVar2[1] = puVar3[1];
      *puVar2 = uVar16;
      puVar2[3] = uVar15;
      puVar2[2] = uVar14;
      uVar14 = puVar3[4];
      puVar2[5] = puVar3[5];
      puVar2[4] = uVar14;
      uVar9 = uVar13;
    }
  }
  puVar2 = (undefined8 *)(param_1[2] + (ulonglong)uVar1 * 0x30);
  puVar2[1] = plStack_c8;
  *puVar2 = local_d0;
  puVar2[3] = uStack_b8;
  puVar2[2] = uStack_c0;
  puVar2[5] = uStack_a8;
  puVar2[4] = local_b0;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
LAB_1800f3fd0:
  puVar2 = (undefined8 *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 4) * 0x30);
  *param_4 = *puVar2;
  param_4[1] = puVar2[1];
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(puVar2 + 3);
  param_4[3] = puVar2[2] + (ulonglong)*(uint *)(puVar2 + 3) * 8;
  puVar2[4] = param_2;
  puVar2[5] = param_3;
  *(int *)(puVar2 + 3) = *(int *)(puVar2 + 3) + 1;
  return 1;
}

