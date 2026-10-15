/*
 * FUN_1800f2c40 at 1800f2c40
 * undefined FUN_1800f2c40(void)
 * Address ranges: 1800f2c40-1800f2f4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800f2c40(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  param_5[1] = 0;
  *param_5 = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  if ((uint)(*(int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 +
                     0x18) + param_2) <= *(uint *)(param_1 + 0x34)) goto LAB_1800f2ed4;
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x28) + 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1800f2ca8);
    (*pcVar7)();
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = uVar1 / uVar3;
  }
  uVar1 = uVar1 - uVar5 * uVar3;
  lVar12 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x30;
  uVar9 = (**(code **)(**(longlong **)(lVar12 + 0x20) + 0x40))();
  if (*(ulonglong *)(lVar12 + 0x28) <= uVar9) {
    *(uint *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x30 + 0x18) = 0;
    goto LAB_1800f2ed4;
  }
  local_88 = *(undefined4 *)(param_1 + 0x2c);
  local_80 = *(undefined4 *)(param_1 + 0x30);
  uStack_84 = *(undefined4 *)(param_1 + 0x34);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = (longlong *)0x0;
  uStack_7c = 0;
  uStack_48 = 0;
  local_50 = 0;
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x20)
  ;
  iVar8 = (**(code **)(*plVar10 + 0x70))(plVar10,&local_88,&DAT_18023b8f0,&local_60);
  if (iVar8 < 0) goto LAB_1800f2e9c;
  puVar11 = (undefined8 *)(**(code **)(*local_60 + 0x50))(local_60,auStack_90);
  local_70 = *puVar11;
  puVar11 = (undefined8 *)(**(code **)(*local_60 + 0x48))(local_60,auStack_90);
  uStack_68 = *puVar11;
  iVar8 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x20) == 0) {
    if (iVar8 == 0) {
      lVar12 = thunk_FUN_180102f80(0x300);
      if (lVar12 == 0) goto LAB_1800f2e8c;
      thunk_FUN_180001218(lVar12,*(undefined8 *)(param_1 + 0x18),
                          (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = lVar12;
      *(undefined4 *)(param_1 + 0x24) = 0x10;
    }
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x20) == iVar8) {
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
LAB_1800f2e8c:
        (**(code **)(*local_60 + 0x10))();
LAB_1800f2e9c:
        FUN_1800d17d8(s__dgVoodoo__D3D12_Core__FATAL_ERR_18023b930,
                      s_a_resource_descriptor_ring_buffe_18023bff0);
        (*__imp_KERNEL32_dll_DebugBreak)();
        return 0;
      }
      thunk_FUN_180001218(lVar12,*(undefined8 *)(param_1 + 0x18),
                          (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = lVar12;
      *(uint *)(param_1 + 0x24) = uVar1;
    }
    uVar1 = iVar4 + 1;
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x20);
    while (uVar1 < (uint)uVar9) {
      uVar13 = (ulonglong)((uint)uVar9 - 1);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x30);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x30);
      uVar16 = *puVar2;
      uVar15 = puVar2[3];
      uVar14 = puVar2[2];
      puVar11[1] = puVar2[1];
      *puVar11 = uVar16;
      puVar11[3] = uVar15;
      puVar11[2] = uVar14;
      uVar14 = puVar2[4];
      puVar11[5] = puVar2[5];
      puVar11[4] = uVar14;
      uVar9 = uVar13;
    }
  }
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x30);
  puVar11[1] = uStack_68;
  *puVar11 = local_70;
  puVar11[3] = uStack_58;
  puVar11[2] = local_60;
  puVar11[5] = uStack_48;
  puVar11[4] = local_50;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_1800f2ed4:
  plVar10 = (longlong *)
            (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30);
  *param_5 = *plVar10 + (ulonglong)(uint)((int)plVar10[3] * *(int *)(param_1 + 0x38));
  param_5[1] = plVar10[1] + (ulonglong)(uint)((int)plVar10[3] * *(int *)(param_1 + 0x38));
  param_5[2] = plVar10[2];
  *(undefined4 *)(param_5 + 3) = *(undefined4 *)(param_1 + 0x38);
  plVar10[4] = param_3;
  plVar10[5] = param_4;
  *(int *)(plVar10 + 3) = (int)plVar10[3] + param_2;
  return 1;
}

