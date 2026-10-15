/*
 * FUN_180085858 at 180085858
 * undefined FUN_180085858(void)
 * Address ranges: 180085858-180085cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180085858(longlong param_1,ulonglong param_2,int param_3,longlong param_4,int param_5,
             int *param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint extraout_w12;
  longlong extraout_x12;
  ulonglong extraout_x13;
  uint extraout_w14;
  int extraout_w15;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined4 local_80;
  int iStack_7c;
  uint local_78;
  int local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 uStack_5c;
  
  uVar4 = (uint)param_2;
  FUN_1800e5470(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  FUN_180083fc0(param_1 + -0xe0,0);
  uVar16 = (ulonglong)(uVar4 + *(int *)(param_1 + -0xa4) * param_3);
  if (((*(longlong *)(param_1 + -0x28) == 0) ||
      (iVar7 = (*__imp_USER32_dll_IsRectEmpty)
                         (*(longlong *)(param_1 + -0x50) + uVar16 * 0x28 + 0x18), iVar7 == 0)) &&
     (2 < *(int *)(param_1 + -0x9c) - 3U)) {
    uVar14 = *(uint *)(param_1 + -0xb4);
    uVar1 = param_6[2];
    uVar15 = param_6[3];
    bVar2 = (&DAT_180231708)[uVar14];
    uVar9 = *(uint *)(&DAT_180231470 + (ulonglong)uVar14 * 4);
    uVar11 = (uint)(byte)(&DAT_1802316d8)[uVar14];
    uVar8 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),param_2 & 0xffffffff);
    uVar14 = uVar8;
    if (uVar9 < 8) {
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180085958);
        (*pcVar5)();
      }
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar8 / uVar11;
      }
    }
    uVar13 = (uint)bVar2;
    uVar8 = extraout_w12;
    if (extraout_w15 != 0) {
      uVar8 = extraout_w14 + 1;
      uStack_5c = 1;
      local_64 = uVar14;
      if (uVar15 == extraout_w14) {
        local_64 = uVar1;
      }
      local_68 = 0;
      local_70 = extraout_w15;
      local_6c = extraout_w14;
      local_60 = uVar8;
      if (uVar9 < 8) {
        local_6c = extraout_w14 * bVar2;
        local_70 = uVar11 * extraout_w15;
        local_64 = local_64 * uVar11;
        local_60 = uVar13 + extraout_w14 * bVar2;
      }
      FUN_180085398(param_1 + -0xe0);
    }
    if (uVar8 < uVar15) {
      local_70 = 0;
      local_68 = 0;
      local_60 = uVar15;
      if (uVar1 == uVar14) {
        local_60 = uVar15 + 1;
      }
      uStack_5c = 1;
      local_6c = uVar8;
      local_64 = uVar14;
      if (uVar9 < 8) {
        local_6c = uVar13 * uVar8;
        local_60 = local_60 * uVar13;
        local_64 = uVar14 * uVar11;
      }
      FUN_180085398(param_1 + -0xe0);
      uVar8 = uVar15;
      if (uVar1 == uVar14) {
        uVar8 = uVar15 + 1;
      }
    }
    uVar14 = (uint)bVar2;
    if (uVar15 == uVar8) {
      local_60 = uVar15 + 1;
      local_70 = 0;
      uStack_5c = 1;
      local_68 = 0;
      local_6c = uVar8;
      local_64 = uVar1;
      if (uVar9 < 8) {
        local_6c = uVar13 * uVar8;
        local_60 = uVar14 + uVar15 * uVar14;
        local_64 = uVar11 * uVar1;
      }
      FUN_180085398(param_1 + -0xe0);
    }
    iStack_7c = param_6[1];
    if (uVar9 < 8) {
      iStack_7c = iStack_7c * uVar13;
    }
    local_78 = *(uint *)(param_1 + -0xbc) >> (ulonglong)(uVar4 & 0x1f);
    if (local_78 == 0) {
      local_78 = 1;
    }
    local_74 = param_6[3] + 1;
    if (uVar9 < 8) {
      local_74 = uVar14 + param_6[3] * uVar13;
    }
    pcVar5 = *(code **)(*(longlong *)(param_1 + -0xe0) + 0x18);
  }
  else {
    uVar16 = FUN_180084440(param_1 + -0xe0,param_2 & 0xffffffff,param_3);
    if (((uVar16 & 1) == 0) ||
       (plVar10 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8),
       iVar7 = (**(code **)(*plVar10 + 0x70))
                         (plVar10,*(undefined8 *)(param_1 + -0x28),
                          uVar4 + *(int *)(param_1 + -0xa4) * param_3,2,0,&local_80), iVar7 < 0)) {
      uVar12 = 0;
      goto LAB_180085cc0;
    }
    uVar15 = *(uint *)(param_1 + -0xb4);
    bVar2 = (&DAT_180231708)[uVar15];
    uVar1 = *(uint *)(&DAT_180231470 + (ulonglong)uVar15 * 4);
    if (uVar1 == 0x18) {
      uVar1 = 0x20;
    }
    uVar14 = uVar1 >> 3;
    if (uVar1 < 8) {
      uVar14 = *(uint *)(&DAT_180231630 + (ulonglong)uVar15 * 4);
    }
    uVar9 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),param_2 & 0xffffffff,
                          uVar14);
    uVar15 = uVar9;
    if (uVar1 < 8) {
      bVar3 = *(byte *)(extraout_x12 + (extraout_x13 & 0xffffffff));
      if (bVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180085bb8);
        (*pcVar5)();
      }
      uVar15 = 0;
      if (bVar3 != 0) {
        uVar15 = uVar9 / bVar3;
      }
    }
    uVar9 = param_6[1];
    if (uVar9 <= (uint)param_6[3]) {
      bVar6 = uVar9 == param_6[3];
      iVar7 = *param_6;
      do {
        if (bVar6) {
          uVar15 = param_6[2];
        }
        thunk_FUN_180001218((ulonglong)(uVar9 * local_78) + (ulonglong)(iVar7 * uVar14) +
                            CONCAT44(iStack_7c,local_80),
                            (ulonglong)(uVar9 * param_5) + (ulonglong)(iVar7 * uVar14) + param_4,
                            (uVar15 - iVar7) * uVar14);
        uVar9 = uVar9 + 1;
        iVar7 = 0;
        bVar6 = uVar9 == param_6[3];
      } while (uVar9 <= (uint)param_6[3]);
    }
    uVar15 = (uint)bVar2;
    plVar10 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
    (**(code **)(*plVar10 + 0x78))
              (plVar10,*(undefined8 *)(param_1 + -0x28),uVar4 + *(int *)(param_1 + -0xa4) * param_3)
    ;
    iStack_7c = param_6[1];
    if (uVar1 < 8) {
      iStack_7c = iStack_7c * uVar15;
    }
    local_78 = *(uint *)(param_1 + -0xbc) >> (ulonglong)(uVar4 & 0x1f);
    if (local_78 == 0) {
      local_78 = 1;
    }
    local_74 = param_6[3] + 1;
    if (uVar1 < 8) {
      local_74 = uVar15 + param_6[3] * uVar15;
    }
    uVar16 = (ulonglong)(uVar4 + *(int *)(param_1 + -0xa4) * param_3);
    pcVar5 = *(code **)(*(longlong *)(param_1 + -0xe0) + 0x10);
  }
  local_80 = 0;
  (*pcVar5)(param_1 + -0xe0,uVar16,&local_80);
  uVar12 = 1;
LAB_180085cc0:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar12;
}

