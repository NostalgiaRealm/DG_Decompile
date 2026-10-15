/*
 * FUN_180020080 at 180020080
 * undefined FUN_180020080(void)
 * Address ranges: 180020080-1800203ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180020080(uint param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  char local_c0 [16];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  uint local_98;
  undefined1 auStack_90 [64];
  
  uVar11 = (ulonglong)param_1;
  lVar14 = uVar11 * 600;
  if ((&DAT_180253a5e)[lVar14] == '\0') {
    return 0;
  }
  lVar8 = (**(code **)(*param_3 + 0x28))(param_3);
  if (param_2 == 0 || param_2 == lVar8) {
    bVar5 = true;
    if (param_2 != 0) goto LAB_1800200fc;
  }
  else {
    bVar5 = false;
LAB_1800200fc:
    if (!bVar5) {
      iVar7 = (*__imp_USER32_dll_GetClassNameA)(param_2,auStack_90,0x40);
      if (iVar7 == 0) {
        return 0;
      }
      FUN_180103158(auStack_90);
      iVar7 = func_0x000180222cb8(auStack_90,s_aviwnd32_1802338c0);
      bVar5 = iVar7 == 0;
      if ((iVar7 != 0) && (lVar9 = (*__imp_USER32_dll_GetParent)(param_2), lVar8 == lVar9)) {
        iVar7 = func_0x000180222cb8(auStack_90,s_mciwndclass_1802338e0);
        bVar5 = iVar7 == 0;
      }
      if (!bVar5) {
        return 0;
      }
    }
  }
  cVar6 = (**(code **)(*(longlong *)(&DAT_180253850)[uVar11 * 0x4b] + 0x30))();
  if (cVar6 != '\0') {
    return 0;
  }
  FUN_18001f7f0(local_c0);
  if (*(longlong *)(&DAT_180253a48 + lVar14) != 0) goto LAB_180020378;
  lVar8 = *(longlong *)(&DAT_180253a40 + lVar14);
  if (lVar8 == 0) {
LAB_1800201dc:
    puVar10 = (undefined8 *)FUN_180102f80(0xb8);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_1802539fc + lVar14);
      uVar3 = *(undefined4 *)(&DAT_180253a00 + lVar14);
      uVar2 = *(undefined4 *)(&DAT_1802539e0 + uVar11 * 0x4b);
      uVar4 = *(undefined4 *)((longlong)&DAT_1802539e0 + lVar14 + 4);
      uVar12 = (&DAT_1802539e0)[uVar11 * 0x4b];
      uVar13 = (&DAT_180253850)[(ulonglong)param_1 * 0x4b];
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[1] = uVar13;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 5) = 0xffffffff;
      puVar10[10] = 0;
      puVar10[9] = 0;
      puVar10[0xc] = 0;
      puVar10[0xb] = 0;
      puVar10[0xe] = 0;
      puVar10[0xd] = 0;
      puVar10[0x10] = 0;
      puVar10[0xf] = 0;
      puVar10[0x11] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x34) = 0;
      *puVar10 = &PTR_D3DPERF_SetMarker_180229ed8;
      puVar10[0x12] = param_3;
      uVar13 = (**(code **)(*param_3 + 0x28))(param_3);
      *(undefined4 *)(puVar10 + 0x14) = uVar1;
      *(undefined4 *)((longlong)puVar10 + 0xa4) = uVar3;
      puVar10[0x13] = uVar13;
      uVar13 = *(undefined8 *)(&DAT_180253a14 + (ulonglong)param_1 * 600);
      uStack_a8 = 0;
      local_98 = local_98 & 0xff000000;
      puVar10[0x16] = *(undefined8 *)((ulonglong)param_1 * 600 + 0x180253a1c);
      puVar10[0x15] = uVar13;
      *(undefined8 *)((longlong)puVar10 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar10 + 0x2c) = uVar12;
      *(undefined8 *)((longlong)puVar10 + 0x3c) = 1;
      *(uint *)((longlong)puVar10 + 0x44) = local_98;
      local_b0 = uVar2;
      uStack_ac = uVar4;
    }
    *(undefined8 **)(&DAT_180253a40 + lVar14) = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      lVar8 = (**(code **)(*(longlong *)puVar10[1] + 0x58))
                        ((longlong *)puVar10[1],*(undefined4 *)((longlong)puVar10 + 0x2c),
                         *(undefined4 *)(puVar10 + 6),5,1,0,0);
      puVar10[2] = lVar8;
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(&DAT_180253a40 + lVar14);
        if (lVar8 != 0) {
          FUN_180020f50(lVar8);
          FUN_180102fc0(lVar8,0xb8);
        }
        *(undefined8 *)(&DAT_180253a40 + lVar14) = 0;
      }
      else {
        (**(code **)(*(longlong *)puVar10[1] + 0x40))((longlong *)puVar10[1],&local_b0,5);
        *(undefined4 *)(puVar10 + 9) = 0x20;
        *(undefined4 *)((longlong)puVar10 + 0x4c) = local_b0;
        *(undefined4 *)(puVar10 + 10) = uStack_ac;
        *(undefined4 *)((longlong)puVar10 + 0x54) = (undefined4)uStack_a8;
      }
    }
  }
  else if (((int)*(undefined8 *)(lVar8 + 0x2c) != *(int *)(&DAT_1802539e0 + uVar11 * 0x4b)) ||
          ((int)((ulonglong)*(undefined8 *)(lVar8 + 0x2c) >> 0x20) !=
           *(int *)((longlong)&DAT_1802539e0 + lVar14 + 4))) {
    FUN_180020f50(lVar8);
    FUN_180102fc0(lVar8,0xb8);
    goto LAB_1800201dc;
  }
  lVar8 = *(longlong *)(&DAT_180253a40 + lVar14);
  if (lVar8 != 0) {
    lVar9 = 0;
    uVar11 = FUN_180023f18(lVar8 + 8,0,0);
    if (((uVar11 & 1) != 0) && (lVar9 = (*__imp_GDI32_dll_CreateCompatibleDC)(0), lVar9 != 0)) {
      uVar12 = (*__imp_GDI32_dll_SelectObject)(lVar9,*(undefined8 *)(lVar8 + 0x58));
      *(undefined8 *)(lVar8 + 0x68) = uVar12;
    }
    *(longlong *)(&DAT_180253a48 + lVar14) = lVar9;
    *(undefined4 *)(&DAT_180253a50 + lVar14) = 0;
  }
LAB_180020378:
  if (*(longlong *)(&DAT_180253a48 + lVar14) != 0) {
    *(int *)(&DAT_180253a50 + lVar14) = *(int *)(&DAT_180253a50 + lVar14) + 1;
  }
  *param_4 = 1;
  lVar8 = DAT_18024e310;
  uVar12 = *(undefined8 *)(&DAT_180253a48 + lVar14);
  if (local_c0[0] == '\0') {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  else {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    lVar8 = DAT_18024e310;
  }
  FUN_180001590(lVar8 + 0x30);
  return uVar12;
}

