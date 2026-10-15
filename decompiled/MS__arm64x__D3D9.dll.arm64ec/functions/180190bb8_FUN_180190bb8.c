/*
 * FUN_180190bb8 at 180190bb8
 * undefined FUN_180190bb8(void)
 * Address ranges: 180190bb8-180190e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180190bb8(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             undefined8 *param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined4 uStack_dc;
  uint local_c0;
  uint uStack_bc;
  undefined4 local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int iStack_98;
  undefined1 local_90 [4];
  undefined4 uStack_8c;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  uint local_60 [8];
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  local_80 = param_4;
  local_78 = param_5;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_2,&local_c0);
  local_70 = 0;
  local_c0 = local_c0 >> (ulonglong)(param_6 & 0x1f);
  if (local_c0 == 0) {
    local_c0 = 1;
  }
  uVar1 = uStack_bc >> (ulonglong)(param_6 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  local_68 = local_c0;
  uStack_64 = uVar1;
  thunk_FUN_180223c34(local_90,param_8,&local_70);
  uStack_dc = 0;
  if ((local_a0 >> 6 & 1) == 0) {
    uVar7 = local_c0 - 1 | local_c0 - 1 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uStack_dc = uStack_8c;
    uVar7 = uVar7 | uVar7 >> 4;
    local_c0 = (uVar7 | uVar7 >> 8) + 1;
    uVar1 = uVar1 - 1 | uVar1 - 1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = (uVar1 | uVar1 >> 8) + 1;
  }
  local_b8 = 1;
  uStack_bc = uVar1;
  if (param_3 != 0) {
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)(param_3,local_60);
    local_b0 = local_60[0];
  }
  uVar9 = 0;
  uVar5 = ((ulonglong)
           (local_ac | (local_a4 | (local_a0 | (local_9c >> 0x10 | iStack_98 << 2) << 8) << 2) << 4)
          & 0x1ffffff) << 7 | ((ulonglong)uStack_bc | (ulonglong)local_c0 << 0x10) << 0x20 |
          (ulonglong)local_b0;
  uVar1 = *(uint *)(param_1 + 0x1d4d4);
  if (uVar1 != 0) {
    uVar7 = 0;
    uVar6 = uVar1;
    do {
      uVar2 = uVar6 + uVar7 >> 1;
      uVar9 = (ulonglong)uVar2;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x1d4c8) + uVar9 * 0x48);
      if (uVar8 <= uVar5) {
        if (uVar5 <= uVar8) break;
        uVar7 = uVar2 + 1;
        uVar9 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
    } while (uVar6 != uVar7);
    if (((uint)uVar9 != uVar1) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x1d4c8) + uVar9 * 0x48) == uVar5))
    goto LAB_180190db8;
  }
  FUN_180198000(param_1 + 0x1d4c8,uVar9,uVar5,&local_c0,uStack_dc);
LAB_180190db8:
  lVar10 = *(longlong *)(param_1 + 0x1d4c8) + uVar9 * 0x48;
  uVar4 = *(undefined8 *)(lVar10 + 0x40);
  lVar10 = *(longlong *)(lVar10 + 0x38);
  if (lVar10 == 0) {
    FUN_180197e50(param_1 + 0x1d4c8,&local_c0);
    uVar4 = 0;
  }
  else {
    if (local_80 != (longlong *)0x0) {
      *local_80 = lVar10;
    }
    if (local_78 != (undefined8 *)0x0) {
      *local_78 = uVar4;
    }
    auVar11 = (*(code *)puVar3)(0x180225000);
    (*extraout_x11_01)(auVar11._0_8_,auVar11._8_8_,0);
    uVar4 = 1;
  }
  return uVar4;
}

