/*
 * FUN_1800f7be0 at 1800f7be0
 * undefined FUN_1800f7be0(void)
 * Address ranges: 1800f7be0-1800f7fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800f7be0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  longlong param_5,undefined4 param_6,int param_7,longlong param_8,
                  undefined8 *param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined1 auStack_118 [8];
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  uint local_100;
  uint uStack_fc;
  longlong *local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  undefined1 auStack_c8 [8];
  undefined4 local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar11 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  lVar10 = param_2 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8;
  plVar12 = *(longlong **)(lVar10 + 0xd88);
  local_120 = *(longlong *)(lVar10 + 0xd88);
  local_130 = param_5;
  local_128 = param_3;
  FUN_1800e7b48(*(undefined8 *)(lVar11 + 0x2230),auStack_118,param_4,0);
  local_10c = 0xffffffff;
  local_f8 = &local_130;
  uStack_d8 = 0;
  local_e0 = 0;
  local_110 = param_6;
  lStack_f0 = param_2;
  local_e8 = param_8;
  FUN_1800fd410(param_1 + 0x6b0,*(undefined4 *)(param_2 + 0x10),&local_f8);
  *(int *)(*(longlong *)(lVar11 + 0x1e08) + 0x684) =
       *(int *)(*(longlong *)(lVar11 + 0x1e08) + 0x684) + 1;
  *(undefined8 *)(lVar11 + 0x9d0) = *(undefined8 *)(*(longlong *)(lVar11 + 0x1e08) + 0xb78);
  if ((local_128 != 0) || (local_130 != 0)) {
    uVar7 = FUN_1800f6f58(param_1,param_2,&local_130,param_6,param_8,param_9);
    lVar10 = local_128;
    if ((uVar7 & 1) == 0) {
      if (local_120 != 0) {
        if (local_130 == 0) {
          FUN_1800e8bb8(*(undefined8 *)(lVar11 + 0x1e08),local_128,0,0,0x800);
          FUN_1800e8bb8(*(undefined8 *)(lVar11 + 0x1e08),plVar12,0,0,0x400);
          FUN_1800ea420(*(undefined8 *)(lVar11 + 0x1e08),plVar12,lVar10);
        }
        else {
          FUN_1800f66b0(uVar7,lVar11 + 0x900,plVar12,local_130,param_6);
        }
      }
      if (param_9 != (undefined8 *)0x0) {
        *(longlong *)(*(longlong *)(lVar11 + 0x1e08) + 0xb88) = param_1;
        uVar5 = *(uint *)(param_2 + 0x20);
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800f7d4c);
          (*pcVar4)();
        }
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = *(uint *)(param_2 + 0x18) / uVar5;
        }
        uVar5 = *(uint *)(param_2 + 0x24);
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800f7d60);
          (*pcVar4)();
        }
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = *(uint *)(param_2 + 0x1c) / uVar5;
        }
        local_108 = 0;
        local_100 = uVar2;
        uStack_fc = uVar3;
        (**(code **)(*plVar12 + 0x50))(plVar12,&local_90);
        local_d0 = plVar12;
        FUN_1800e7b48(*(undefined8 *)(lVar11 + 0x2238),auStack_c8,*(undefined4 *)(param_2 + 0xd98),
                      *(undefined4 *)(param_2 + 0xd78));
        local_a0 = 0x3f800000;
        uStack_9c = 0x3f800000;
        local_c0 = local_70[0];
        local_a8 = &local_108;
        local_98 = 0;
        uStack_bc = uVar2;
        local_b8 = uVar3;
        uStack_b4 = uVar2;
        local_b0 = uVar3;
        (**(code **)*param_9)(param_9,&local_d0);
      }
    }
  }
  lVar10 = lStack_f0;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    uVar5 = *(uint *)(param_2 + 0x10);
    lVar14 = *(longlong *)(param_1 + 0x6b8) + (ulonglong)uVar5 * 0x1ac0;
    if (*(int *)((longlong)local_f8 + 0x24) != -1) {
      FUN_1800e8bb8(*(undefined8 *)(lVar14 + 0x1e08),local_f8[1],0,0);
    }
    local_90 = lVar10;
    uStack_80 = uStack_d8;
    local_88 = local_e0;
    local_78 = *(undefined8 *)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0xd78) * 8 + 0xd88);
    FUN_1800e7b48(*(undefined8 *)(lVar14 + 0x2238),local_70,*(undefined4 *)(lVar10 + 0xd98),
                  *(undefined4 *)(lVar10 + 0xd78));
    local_68 = FUN_1800f1fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x1b500),local_78);
    uVar7 = 0;
    if (*(int *)(param_1 + 0x6c8) != 0) {
      do {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar7 * 8);
        (**(code **)(*plVar8 + 0x48))(plVar8,uVar5,&local_90);
        uVar2 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x6c8));
    }
  }
  if (*(char *)(param_2 + 0xd6a) != '\0') {
    FUN_1800f77f8(param_1,param_2,param_8 + 0xc);
  }
  FUN_1800e8bb8(*(undefined8 *)(lVar11 + 0x1e08),plVar12,0,0,0);
  lVar10 = *(longlong *)(lVar11 + 0x1e08);
  iVar1 = *(int *)(lVar10 + 0x684) + -1;
  *(int *)(lVar10 + 0x684) = iVar1;
  if (iVar1 == 0) {
    FUN_1800e8548(lVar10 + 8,0);
  }
  uVar13 = *(undefined8 *)(*(longlong *)(lVar11 + 0x1e08) + 0xb78);
  FUN_1800f1b78(*(undefined8 *)(param_1 + 0x1b500),plVar12,0,0,*(undefined8 *)(lVar11 + 0x1e00),
                0xffffffffffffffff,0,uVar13);
  if (((param_7 == 0) && (*(char *)(param_2 + 0xd6c) != '\0')) &&
     ((*(int *)(param_2 + 0x3c) != 2 || (*(char *)(param_2 + 0xd6d) == '\0')))) {
    uVar9 = 0x200;
  }
  else {
    uVar9 = 0;
  }
  lVar10 = *(longlong *)(lVar11 + 0x1e00);
  uVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x40))
                    (*(longlong **)(param_2 + 8),param_7,uVar9);
  plVar12 = *(longlong **)(lVar10 + 0x10);
  (**(code **)(*plVar12 + 0x70))(plVar12,*(undefined8 *)(lVar10 + 0x18),uVar13);
  uVar13 = FUN_1800015b0(*(longlong *)(lVar11 + 0x1e00) + 0x28);
  *(undefined8 *)(*(longlong *)(lVar11 + 0x1e08) + 0xb78) = uVar13;
  uVar6 = (**(code **)(**(longlong **)(param_2 + 0xd80) + 0x120))();
  *(undefined4 *)(param_2 + 0xd78) = uVar6;
  return ~uVar5 >> 0x1f;
}

