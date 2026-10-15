/*
 * FUN_18004da98 at 18004da98
 * undefined FUN_18004da98(void)
 * Address ranges: 18004da98-18004de27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004da98(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong extraout_x15;
  longlong lVar11;
  ulonglong uVar12;
  uint extraout_s18;
  ulonglong extraout_d19;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  lVar11 = param_1[3];
  lVar5 = param_1[4];
  FUN_18003feb0(lVar1,0,0,0);
  local_a0 = lVar2;
  if ((uVar3 >> 1 & 1) != 0) {
    if (*(int *)(lVar2 + 0x10) == 9) {
      local_98 = lVar11;
      uVar7 = FUN_1800f3cb8(*(undefined8 *)(lVar1 + 0xf820),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1500) + 0x18),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1508) + 0xb78),
                            &local_90);
      if ((uVar7 & 1) == 0) goto LAB_18004ddc8;
      FUN_1800ea888(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),local_90,0,
                    local_80 & 0xffffffff);
    }
    else {
      if (*(int *)(lVar2 + 0x10) != 0xb) goto LAB_18004ddc8;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      local_98 = lVar11;
    }
    FUN_180051988(lVar1 + 0xf830,&local_a0,&local_98);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar1 + 0xf888);
    FUN_180050fe8(lVar1 + 0xf808,lVar2);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar1 + 0xf888);
    goto LAB_18004ddc8;
  }
  lVar10 = *(longlong *)(lVar1 + 0xf810);
  uVar9 = *(undefined8 *)(*(longlong *)(lVar10 + 0x1508) + 0xb78);
  local_60 = 0xffffffff;
  local_5c = 1;
  iVar4 = *(int *)(lVar2 + 0x10);
  local_98 = lVar2;
  local_90 = lVar11;
  local_88 = uVar9;
  if (iVar4 == 8) {
    lVar11 = *(longlong *)(lVar10 + 0x1500);
LAB_18004dd80:
    uVar7 = FUN_1800f3cb8(*(undefined8 *)(lVar1 + 0xf820),*(undefined8 *)(lVar11 + 0x18),uVar9,
                          &local_80);
    uVar9 = local_88;
    if ((uVar7 & 1) != 0) {
      uVar7 = local_70 & 0xffffffff;
      uVar9 = uStack_78;
LAB_18004dd98:
      FUN_180051348(lVar1 + 0xf808,lVar2,*(undefined8 *)(lVar1 + 0xf820),uVar9,uVar7);
      uVar9 = local_88;
    }
  }
  else {
    if (iVar4 != 9) {
      if (iVar4 != 10) {
        if (iVar4 != 0xb) goto LAB_18004ddc8;
        FUN_1800518b8(lVar1 + 0xf830,&local_a0);
        lVar11 = *(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1500);
        uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1508) + 0xb78);
        goto LAB_18004dd80;
      }
      uVar7 = FUN_1800f3cb8(*(undefined8 *)(lVar1 + 0xf828),
                            *(undefined8 *)(*(longlong *)(lVar10 + 0x1500) + 0x18),uVar9,&local_80);
      uVar8 = local_80;
      if ((uVar7 & 1) == 0) {
        FUN_18004e178(lVar2,0,lVar11,1);
        goto LAB_18004ddc8;
      }
      uVar7 = local_70 & 0xffffffff;
      FUN_1800ea8d8(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),local_80,2,uVar7);
      uVar9 = uStack_78;
      FUN_1800ea928(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),uVar8,2,uVar7,1,
                    uStack_78,uVar7 << 3);
      goto LAB_18004dd98;
    }
    lVar11 = FUN_180051838(lVar1 + 0xf830,&local_a0);
    if (*(longlong *)(lVar11 + 8) == 0) {
      FUN_1800518b8(lVar1 + extraout_x15,&local_a0);
      uVar8 = FUN_1800f3cb8(*(undefined8 *)(lVar1 + 0xf820),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1500) + 0x18),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1508) + 0xb78),
                            &local_80);
      uVar7 = local_80;
      uVar12 = local_70 & 0xffffffff;
      uVar9 = local_88;
      if ((uVar8 & 1) != 0) {
        FUN_1800ea888(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),local_80,0,uVar12);
        uVar9 = local_88;
      }
    }
    else {
      uStack_78 = *(undefined8 *)(lVar11 + 0x10);
      local_80 = *(ulonglong *)(lVar11 + 8);
      uStack_68 = *(undefined8 *)(lVar11 + 0x20);
      local_70 = *(ulonglong *)(lVar11 + 0x18);
      FUN_1800518b8(lVar1 + extraout_x15,&local_a0);
      uVar12 = (ulonglong)extraout_s18;
      uVar7 = extraout_d19;
    }
    FUN_1800ea8d8(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),uVar7,0,uVar12);
    uVar6 = uStack_78;
    FUN_1800ea928(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),uVar7,0,uVar12,1,uStack_78
                  ,uVar12 << 3);
    FUN_180051348(lVar1 + 0xf808,lVar2,*(undefined8 *)(lVar1 + 0xf820),uVar6,uVar12);
  }
  *(undefined8 *)(lVar2 + 0x18) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1500) + 0x18);
  *(undefined8 *)(lVar2 + 0x20) = uVar9;
  FUN_180051140(lVar1 + 0xf808,&local_98);
LAB_18004ddc8:
  if (((char)lVar5 != '\0') &&
     (*(ulonglong *)(*(longlong *)(*(longlong *)(lVar1 + 0xf6e0) + 0x1508) + 0xb78) <=
      *(ulonglong *)(lVar2 + 0x20))) {
    FUN_18003feb0(lVar1,0,0,0);
    FUN_1800e8548(*(longlong *)(*(longlong *)(lVar1 + 0xf6e0) + 0x1508) + 8,0);
  }
  return;
}

