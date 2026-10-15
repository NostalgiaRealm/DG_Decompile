/*
 * FUN_180023fd0 at 180023fd0
 * undefined __cdecl FUN_180023fd0(longlong * param_1, uint param_2)
 * Address ranges: 180023fd0-180024483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023fd0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  char local_1d0 [8];
  LARGE_INTEGER local_1c8;
  longlong local_1c0 [4];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((*(char *)(param_1[1] + 0x52) != '\0') && (param_2 == 0)) {
    param_2 = 1;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar13 = param_1[0x630];
  cVar5 = (**(code **)(**(longlong **)(*(longlong *)(lVar13 + 8) + 0x10) + 8))();
  if ((cVar5 != '\0') &&
     (bVar6 = FUN_1800541a0(*(longlong *)(*(longlong *)(lVar13 + 8) + 0x2978),
                            *(longlong *)(lVar13 + 0x10)), (bool)*(char *)(lVar13 + 0x12e) != bVar6)
     ) {
    *(bool *)(lVar13 + 0x12e) = bVar6;
    *(bool *)(*(longlong *)(*(longlong *)(lVar13 + 8) + 8) + 0x20) = !bVar6;
    (**(code **)**(undefined8 **)(*(longlong *)(lVar13 + 8) + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0x2be9) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x2be9) = 0;
    FUN_180022be8(param_1[0x630]);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1);
  lVar13 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],0);
  local_1c0[0] = lVar13;
  lVar7 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],1);
  local_1c0[1] = lVar7;
  lVar8 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],2);
  bVar6 = false;
  uVar14 = 0;
  local_1c0[2] = lVar8;
  uStack_198 = *(undefined8 *)(lVar13 + 0x58);
  local_1a0 = *(undefined8 *)(lVar13 + 0x50);
  uStack_188 = *(undefined8 *)(lVar13 + 0x68);
  uStack_190 = *(undefined8 *)(lVar13 + 0x60);
  uStack_178 = *(undefined8 *)(lVar13 + 0x78);
  local_180 = *(undefined8 *)(lVar13 + 0x70);
  uStack_168 = *(undefined8 *)(lVar13 + 0x88);
  uStack_170 = *(undefined8 *)(lVar13 + 0x80);
  uStack_158 = *(undefined8 *)(lVar13 + 0x98);
  local_160 = *(undefined8 *)(lVar13 + 0x90);
  uStack_148 = *(undefined8 *)(lVar13 + 0xa8);
  uStack_150 = *(undefined8 *)(lVar13 + 0xa0);
  uStack_138 = *(undefined8 *)(lVar13 + 0xb8);
  local_140 = *(undefined8 *)(lVar13 + 0xb0);
  uStack_128 = *(undefined8 *)(lVar7 + 0x58);
  local_130 = *(undefined8 *)(lVar7 + 0x50);
  uStack_118 = *(undefined8 *)(lVar7 + 0x68);
  uStack_120 = *(undefined8 *)(lVar7 + 0x60);
  uStack_108 = *(undefined8 *)(lVar7 + 0x78);
  local_110 = *(undefined8 *)(lVar7 + 0x70);
  uStack_f8 = *(undefined8 *)(lVar7 + 0x88);
  uStack_100 = *(undefined8 *)(lVar7 + 0x80);
  uStack_e8 = *(undefined8 *)(lVar7 + 0x98);
  local_f0 = *(undefined8 *)(lVar7 + 0x90);
  uStack_d8 = *(undefined8 *)(lVar7 + 0xa8);
  uStack_e0 = *(undefined8 *)(lVar7 + 0xa0);
  uStack_c8 = *(undefined8 *)(lVar7 + 0xb8);
  local_d0 = *(undefined8 *)(lVar7 + 0xb0);
  uStack_b8 = *(undefined8 *)(lVar8 + 0x58);
  local_c0 = *(undefined8 *)(lVar8 + 0x50);
  uStack_a8 = *(undefined8 *)(lVar8 + 0x68);
  uStack_b0 = *(undefined8 *)(lVar8 + 0x60);
  uStack_98 = *(undefined8 *)(lVar8 + 0x78);
  local_a0 = *(undefined8 *)(lVar8 + 0x70);
  uStack_88 = *(undefined8 *)(lVar8 + 0x88);
  uStack_90 = *(undefined8 *)(lVar8 + 0x80);
  uStack_78 = *(undefined8 *)(lVar8 + 0x98);
  local_80 = *(undefined8 *)(lVar8 + 0x90);
  uStack_68 = *(undefined8 *)(lVar8 + 0xa8);
  uStack_70 = *(undefined8 *)(lVar8 + 0xa0);
  uStack_58 = *(undefined8 *)(lVar8 + 0xb8);
  local_60 = *(undefined8 *)(lVar8 + 0xb0);
  do {
    if ((*(int *)(local_1c0[uVar14] + 0x74) != 0) ||
       (bVar3 = false, *(int *)(local_1c0[uVar14] + 0x78) != 0)) {
      bVar3 = true;
    }
    local_1d0[uVar14] = bVar3;
    bVar6 = (bool)(bVar3 | bVar6);
    if (bVar3) {
      FUN_180023938((longlong *)param_1[0x630],(int)uVar14,1,0,0,(LONG)param_1[0x15],
                    *(LONG *)((longlong)param_1 + 0xac),0);
    }
    (**(code **)(*(longlong *)param_1[0x630] + 0x40))((longlong *)param_1[0x630],uVar14,1,0);
    uVar9 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar9;
  } while (uVar9 < 3);
  (**(code **)(*param_1 + 0x2d0))(param_1);
  if ((*(char *)((longlong)param_1 + 0xed) != '\0') || (bVar6)) {
    *(undefined8 *)(lVar13 + 0x58) = uStack_198;
    *(undefined8 *)(lVar13 + 0x50) = local_1a0;
    *(undefined8 *)(lVar13 + 0x68) = uStack_188;
    *(undefined8 *)(lVar13 + 0x60) = uStack_190;
    *(undefined8 *)(lVar13 + 0x78) = uStack_178;
    *(undefined8 *)(lVar13 + 0x70) = local_180;
    *(undefined8 *)(lVar13 + 0x88) = uStack_168;
    *(undefined8 *)(lVar13 + 0x80) = uStack_170;
    *(undefined8 *)(lVar13 + 0x98) = uStack_158;
    *(undefined8 *)(lVar13 + 0x90) = local_160;
    *(undefined8 *)(lVar13 + 0xa8) = uStack_148;
    *(undefined8 *)(lVar13 + 0xa0) = uStack_150;
    *(undefined8 *)(lVar13 + 0xb8) = uStack_138;
    *(undefined8 *)(lVar13 + 0xb0) = local_140;
    *(undefined8 *)(lVar7 + 0x58) = uStack_128;
    *(undefined8 *)(lVar7 + 0x50) = local_130;
    *(undefined8 *)(lVar7 + 0x68) = uStack_118;
    *(undefined8 *)(lVar7 + 0x60) = uStack_120;
    *(undefined8 *)(lVar7 + 0x78) = uStack_108;
    *(undefined8 *)(lVar7 + 0x70) = local_110;
    *(undefined8 *)(lVar7 + 0x88) = uStack_f8;
    *(undefined8 *)(lVar7 + 0x80) = uStack_100;
    *(undefined8 *)(lVar7 + 0x98) = uStack_e8;
    *(undefined8 *)(lVar7 + 0x90) = local_f0;
    *(undefined8 *)(lVar7 + 0xa8) = uStack_d8;
    *(undefined8 *)(lVar7 + 0xa0) = uStack_e0;
    *(undefined8 *)(lVar7 + 0xb8) = uStack_c8;
    *(undefined8 *)(lVar7 + 0xb0) = local_d0;
    *(undefined8 *)(lVar8 + 0x58) = uStack_b8;
    *(undefined8 *)(lVar8 + 0x50) = local_c0;
    *(undefined8 *)(lVar8 + 0x68) = uStack_a8;
    *(undefined8 *)(lVar8 + 0x60) = uStack_b0;
    *(undefined8 *)(lVar8 + 0x78) = uStack_98;
    *(undefined8 *)(lVar8 + 0x70) = local_a0;
    *(undefined8 *)(lVar8 + 0x88) = uStack_88;
    *(undefined8 *)(lVar8 + 0x80) = uStack_90;
    *(undefined8 *)(lVar8 + 0x98) = uStack_78;
    *(undefined8 *)(lVar8 + 0x90) = local_80;
    *(undefined8 *)(lVar8 + 0xa8) = uStack_68;
    *(undefined8 *)(lVar8 + 0xa0) = uStack_70;
    *(undefined8 *)(lVar8 + 0xb8) = uStack_58;
    *(undefined8 *)(lVar8 + 0xb0) = local_60;
    FUN_18002ab30(lVar13);
    FUN_18002ab30(lVar7);
    FUN_18002ab30(lVar8);
  }
  uVar14 = 0;
  do {
    iVar12 = (int)uVar14;
    if (local_1d0[uVar14] != '\0') {
      lVar13 = local_1c0[uVar14];
      FUN_180023770((longlong *)param_1[0x630],iVar12,*(uint *)(lVar13 + 0x6c),
                    *(int *)(lVar13 + 0x70),*(char *)(lVar13 + 0x95),(uint)*(byte *)(lVar13 + 0x99),
                    '\0',0,*(undefined1 *)(lVar13 + 0x97),*(undefined4 *)(lVar13 + 0x8c),
                    *(undefined4 *)(lVar13 + 0x90));
      if (*(int *)((longlong)param_1 + 0x2984) == iVar12) {
        FUN_18002aab0(lVar13,(ulonglong)*(uint *)((longlong)param_1 + 0xac));
      }
    }
    uVar14 = (ulonglong)(iVar12 + 1U);
  } while (iVar12 + 1U < 3);
  lVar7 = param_1[0x630];
  *(uint *)(lVar7 + 0x40) = (*(int *)(lVar7 + 0x40) + 1U) % 7;
  QueryPerformanceCounter(&local_1c8);
  uVar14 = (ulonglong)*(uint *)(lVar7 + 0x40);
  lVar13 = lVar7 + 0x48;
  if (local_1c8.QuadPart <= *(longlong *)(lVar7 + uVar14 * 0x10 + 0x48)) {
    do {
      QueryPerformanceCounter(&local_1c8);
      uVar14 = (ulonglong)*(uint *)(lVar7 + 0x40);
    } while (local_1c8.QuadPart <= *(longlong *)(lVar13 + uVar14 * 0x10));
  }
  lVar8 = *(longlong *)(lVar7 + 0x18);
  if (*(longlong *)(lVar7 + 0x38) < local_1c8.QuadPart) {
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18002439c);
      (*pcVar4)();
    }
    iVar12 = 0;
    if (lVar8 != 0) {
      iVar12 = (int)((local_1c8.QuadPart - *(longlong *)(lVar7 + 0x20)) / lVar8);
    }
    lVar8 = *(longlong *)(lVar7 + 0x20) + (ulonglong)(iVar12 + param_2) * lVar8;
    *(longlong *)(lVar7 + 0x38) = lVar8;
  }
  else {
    lVar8 = *(longlong *)(lVar7 + 0x38) + (ulonglong)param_2 * lVar8;
    *(longlong *)(lVar7 + 0x38) = lVar8;
    iVar12 = *(int *)(lVar7 + ((ulonglong)(((int)uVar14 + 6U) % 7) + 5) * 0x10);
  }
  *(longlong *)(lVar7 + uVar14 * 0x10 + 0x48) = lVar8;
  *(uint *)(lVar7 + ((ulonglong)*(uint *)(lVar7 + 0x40) + 5) * 0x10) = iVar12 + param_2;
  uVar9 = 0;
  do {
    lVar8 = (ulonglong)((*(int *)(lVar7 + 0x40) + uVar9 + 1) % 7) * 0x10;
    lVar11 = *(longlong *)(lVar13 + lVar8);
    if ((lVar11 != 0 && lVar11 <= local_1c8.QuadPart) &&
       (plVar1 = (longlong *)(lVar7 + 0xb8), *plVar1 < lVar11)) {
      uVar10 = 6;
      do {
        uVar2 = uVar10 - 1;
        lVar11 = plVar1[(ulonglong)uVar2 * 2];
        (plVar1 + (ulonglong)uVar10 * 2)[1] = (plVar1 + (ulonglong)uVar2 * 2)[1];
        plVar1[(ulonglong)uVar10 * 2] = lVar11;
        uVar10 = uVar2;
      } while (uVar2 != 0);
      *plVar1 = *(longlong *)(lVar13 + lVar8);
      *(undefined4 *)(lVar7 + 0xc0) = *(undefined4 *)(lVar7 + 0x50 + lVar8);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 7);
  *(int *)((longlong)param_1 + 0x2a5c) = *(int *)((longlong)param_1 + 0x2a5c) + 1;
  (**(code **)(*param_1 + 0x2d8))(param_1,(ulonglong)param_2);
  return;
}

