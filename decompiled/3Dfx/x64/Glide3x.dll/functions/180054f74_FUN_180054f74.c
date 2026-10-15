/*
 * FUN_180054f74 at 180054f74
 * ulonglong __fastcall FUN_180054f74(longlong * param_1, longlong param_2, ulonglong param_3, uint param_4, ulonglong param_5, int param_6, int param_7, uint * param_8, undefined8 * param_9)
 * Address ranges: 180054f74-1800553de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180054f74(longlong *param_1,longlong param_2,ulonglong param_3,uint param_4,
                       ulonglong param_5,int param_6,int param_7,uint *param_8,undefined8 *param_9)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  byte extraout_var;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  int local_108;
  undefined4 local_104;
  undefined8 local_100;
  uint local_f8;
  uint local_f4;
  ulonglong *local_f0;
  longlong local_e8;
  uint *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar6 = (ulonglong)*(uint *)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_2 + 0xd88 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8);
  local_128 = param_5;
  local_118 = *(longlong *)(param_2 + 0xd88 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8);
  local_120 = param_3;
  FUN_1800493ac(param_1[uVar6 * 0x358 + 0x446],&local_110,param_4,0);
  local_f0 = &local_128;
  local_d8 = 0;
  uStack_d0 = 0;
  local_108 = param_6;
  local_104 = 0xffffffff;
  local_e0 = param_8;
  local_e8 = param_2;
  FUN_18005a51c((longlong)(param_1 + 0xd6),*(uint *)(param_2 + 0x10),(longlong *)&local_f0);
  *(int *)(param_1[uVar6 * 0x358 + 0x3c1] + 0x684) =
       *(int *)(param_1[uVar6 * 0x358 + 0x3c1] + 0x684) + 1;
  param_1[uVar6 * 0x358 + 0x13a] = *(longlong *)(param_1[uVar6 * 0x358 + 0x3c1] + 0xb78);
  if (((local_120 != 0) || (local_128 != 0)) &&
     (plVar8 = param_1, uVar7 = FUN_180053d34(param_1,param_2,&local_128,param_6,param_8,param_9),
     uVar9 = local_120, (char)uVar7 == '\0')) {
    if (local_118 != 0) {
      if (local_128 == 0) {
        FUN_18004a068(param_1[uVar6 * 0x358 + 0x3c1],local_120,0,0,0x800);
        FUN_18004a068(param_1[uVar6 * 0x358 + 0x3c1],(ulonglong)plVar2,0,0,0x400);
        FUN_18004afb0(param_1[uVar6 * 0x358 + 0x3c1],plVar2,uVar9);
      }
      else {
        FUN_18005380c(plVar8,(longlong)(param_1 + uVar6 * 0x358 + 0x120),(ulonglong)plVar2,local_128
                      ,param_6);
      }
    }
    if (param_9 != (undefined8 *)0x0) {
      *(longlong **)(param_1[uVar6 * 0x358 + 0x3c1] + 0xb88) = param_1;
      uVar10 = *(uint *)(param_2 + 0x18) / *(uint *)(param_2 + 0x20);
      local_100 = 0;
      uVar5 = *(uint *)(param_2 + 0x1c) / *(uint *)(param_2 + 0x24);
      local_f8 = uVar10;
      local_f4 = uVar5;
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_c8);
      local_88 = plVar2;
      FUN_1800493ac(param_1[uVar6 * 0x358 + 0x447],&local_80,*(uint *)(param_2 + 0xd98),
                    *(int *)(param_2 + 0xd78));
      local_78 = local_a8[0];
      local_60 = &local_100;
      local_58 = 0x3f8000003f800000;
      uStack_50 = 0;
      local_74 = uVar10;
      local_70 = uVar5;
      local_6c = uVar10;
      local_68 = uVar5;
      (**(code **)*param_9)(param_9,&local_88);
    }
  }
  lVar4 = local_e8;
  if ((int)param_1[0xd9] != 0) {
    uVar5 = *(uint *)(param_2 + 0x10);
    lVar3 = param_1[0xd7];
    lVar11 = (ulonglong)uVar5 * 0x1ac0;
    if (*(uint *)((longlong)local_f0 + 0x24) != 0xffffffff) {
      FUN_18004a068(*(longlong *)(lVar11 + 0x1e08 + lVar3),local_f0[1],0,0,
                    *(uint *)((longlong)local_f0 + 0x24));
    }
    local_c8 = lVar4;
    local_c0 = local_d8;
    uStack_b8 = uStack_d0;
    local_b0 = *(ulonglong *)(lVar4 + 0xd88 + (ulonglong)*(uint *)(lVar4 + 0xd78) * 8);
    uVar10 = *(uint *)(lVar4 + 0xd78);
    uVar9 = (ulonglong)*(uint *)(lVar4 + 0xd98);
    FUN_1800493ac(*(longlong *)(lVar11 + 0x2238 + lVar3),(longlong *)local_a8,
                  *(uint *)(lVar4 + 0xd98),uVar10);
    local_a0 = FUN_180045bf8(*(longlong **)(param_1[0xd7] + 0x1b500),local_b0,uVar9,uVar10);
    uVar9 = 0;
    if ((int)param_1[0xd9] != 0) {
      do {
        plVar8 = *(longlong **)(param_1[0xd8] + uVar9 * 8);
        (**(code **)(*plVar8 + 0x48))(plVar8,uVar5);
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_1 + 0xd9));
    }
  }
  if (*(char *)(param_2 + 0xd6a) != '\0') {
    FUN_1800546bc((longlong)param_1,param_2,(RECT *)(param_8 + 3));
  }
  FUN_18004a068(param_1[uVar6 * 0x358 + 0x3c1],(ulonglong)plVar2,0,0,0);
  lVar4 = param_1[uVar6 * 0x358 + 0x3c1];
  piVar1 = (int *)(lVar4 + 0x684);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_180049e38(lVar4 + 8,'\0');
  }
  lVar4 = *(longlong *)(param_1[uVar6 * 0x358 + 0x3c1] + 0xb78);
  FUN_180045a8c((longlong *)param_1[0x36a0],(ulonglong)plVar2,0,0,param_1[uVar6 * 0x358 + 0x3c0],-1,
                0,lVar4);
  if (((param_7 == 0) && (*(char *)(param_2 + 0xd6c) != '\0')) &&
     ((*(int *)(param_2 + 0x3c) != 2 || (*(char *)(param_2 + 0xd6d) == '\0')))) {
    uVar7 = 0x200;
  }
  else {
    uVar7 = 0;
  }
  lVar3 = param_1[uVar6 * 0x358 + 0x3c0];
  (**(code **)(**(longlong **)(param_2 + 8) + 0x40))(*(longlong **)(param_2 + 8),param_7,uVar7);
  plVar2 = *(longlong **)(lVar3 + 0x10);
  (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(lVar3 + 0x18),lVar4);
  LOCK();
  plVar2 = (longlong *)(param_1[uVar6 * 0x358 + 0x3c0] + 0x28);
  lVar4 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  *(longlong *)(param_1[uVar6 * 0x358 + 0x3c1] + 0xb78) = lVar4 + 1;
  uVar7 = (**(code **)(**(longlong **)(param_2 + 0xd80) + 0x120))();
  *(int *)(param_2 + 0xd78) = (int)uVar7;
  return CONCAT71((int7)((ulonglong)uVar7 >> 8),extraout_var >> 7) ^ 1;
}

