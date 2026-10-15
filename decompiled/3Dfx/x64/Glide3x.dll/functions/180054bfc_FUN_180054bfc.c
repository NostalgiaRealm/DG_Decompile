/*
 * FUN_180054bfc at 180054bfc
 * undefined __fastcall FUN_180054bfc(longlong param_1, ulonglong param_2, longlong * param_3, longlong param_4, undefined4 param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11)
 * Address ranges: 180054bfc-180054f72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054bfc(longlong param_1,ulonglong param_2,longlong *param_3,longlong param_4,
                  undefined4 param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10,float param_11)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res20;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  uint local_58;
  uint local_50;
  undefined4 local_44;
  undefined4 local_40;
  
  lVar6 = (param_2 & 0xffffffff) * 0x1ac0;
  piVar1 = (int *)(*(longlong *)(lVar6 + 0x1e08 + param_1) + 0x684);
  *piVar1 = *piVar1 + 1;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1e08 + param_1) + 0xb78);
  *(undefined8 *)(lVar6 + 0x9d0 + param_1) = uVar3;
  local_res20 = param_4;
  FUN_180044ae8(*(longlong *)(lVar6 + 0x908 + param_1) + 0x40,&local_80,2,
                *(longlong *)(*(longlong *)(lVar6 + 0x1e00 + param_1) + 0x18),uVar3);
  if (local_78 != (undefined8 *)0x0) {
    *(longlong *)(*(longlong *)(lVar6 + 0x1e08 + param_1) + 0xb88) = param_1;
    (**(code **)(*param_3 + 0x50))(param_3,local_68);
    *(undefined4 *)(lVar6 + 0x984 + param_1) = param_5;
    lVar5 = lVar6 + param_1;
    *(undefined4 *)(lVar6 + 0x9a8 + param_1) = local_44;
    *(undefined4 *)(lVar6 + 0x9ac + param_1) = local_40;
    *(undefined4 *)(lVar6 + 0x980 + param_1) = 1;
    uVar3 = FUN_18000d928((longlong *)(param_1 + 0x2278 + lVar6),(int *)&DAT_180063150);
    *(undefined8 *)(lVar6 + 0x950 + param_1) = uVar3;
    uVar3 = FUN_18000dbc8((longlong *)(param_1 + 0x2260 + lVar6),(int *)&DAT_1800630e8);
    *(undefined8 *)(lVar6 + 0x968 + param_1) = uVar3;
    uVar3 = FUN_18000dad8((longlong *)(param_1 + 0x22a8 + lVar6),(uint *)&DAT_180063120);
    *(undefined8 *)(lVar6 + 0x960 + param_1) = uVar3;
    lVar2 = *(longlong *)(lVar6 + 0x908 + param_1);
    if (*(int *)(lVar2 + 0x34) != 0) {
      *(undefined4 *)(lVar2 + 0x34) = 0;
    }
    FUN_18004a068(*(longlong *)(lVar6 + 0x1e08 + param_1),(ulonglong)param_3,0,0,4);
    FUN_18004a03c(*(longlong *)(lVar6 + 0x1e08 + param_1),*(ulonglong *)(lVar5 + 0x918));
    FUN_18004a580(*(longlong *)(lVar6 + 0x1e08 + param_1),*(longlong *)(lVar5 + 0x918));
    FUN_18004a678(*(longlong *)(lVar6 + 0x1e08 + param_1),5);
    local_90 = local_80;
    local_88 = 0x200;
    local_84 = 0x10;
    FUN_18004a9cc(*(longlong *)(lVar6 + 0x1e08 + param_1),0,1,(longlong)&local_90);
    *(undefined8 *)(lVar6 + 0x928 + param_1) = *(undefined8 *)(lVar6 + 0x1b88 + param_1);
    *(undefined8 *)(lVar6 + 0x920 + param_1) = *(undefined8 *)(lVar6 + 0x1ba0 + param_1);
    *(undefined8 *)(lVar6 + 0x970 + param_1) = *(undefined8 *)(lVar6 + 0x1bb0 + param_1);
    uVar4 = FUN_180043b88(param_1 + 0x22d8 + lVar6,(byte *)(lVar5 + 0x918));
    FUN_18004a62c(*(longlong *)(lVar6 + 0x1e08 + param_1),uVar4);
    FUN_18004a03c(*(longlong *)(lVar6 + 0x1e08 + param_1),uVar4);
    FUN_18004abfc(*(longlong *)(lVar6 + 0x1e08 + param_1),1,&local_res20,0,(longlong *)0x0);
    local_b0 = local_58;
    local_ac = local_50;
    local_a8 = 0;
    local_a0 = (float)local_58;
    local_98 = 0;
    local_94 = 0x3f800000;
    local_b8 = 0;
    local_9c = (float)local_50;
    FUN_18004ae78(*(longlong *)(lVar6 + 0x1e08 + param_1),1,(longlong)&local_a8);
    lVar5 = *(longlong *)(lVar6 + 0x1e08 + param_1);
    FUN_18004adcc(lVar5,1,(longlong)&local_b8);
    FUN_180051ba4(lVar5,local_78,local_58,local_50,param_6,param_7,param_8,param_9,param_10,param_11
                 );
    FUN_18004b1c0(*(longlong *)(lVar6 + 0x1e08 + param_1),10,1,0,0);
    lVar6 = *(longlong *)(lVar6 + 0x1e08 + param_1);
    piVar1 = (int *)(lVar6 + 0x684);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (*(int *)(lVar6 + 0x680) <= *(int *)(lVar6 + 0x678))) {
      FUN_180049e38(lVar6 + 8,'\0');
    }
  }
  return;
}

