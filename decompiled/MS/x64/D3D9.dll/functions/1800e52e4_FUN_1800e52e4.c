/*
 * FUN_1800e52e4 at 1800e52e4
 * undefined8 __fastcall FUN_1800e52e4(longlong param_1, ulonglong param_2, uint param_3, longlong param_4, longlong param_5, undefined8 * param_6)
 * Address ranges: 1800e52e4-1800e5467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800e52e4(longlong param_1,ulonglong param_2,uint param_3,longlong param_4,longlong param_5,
             undefined8 *param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  int local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  ulonglong uStack_78;
  ulonglong local_70;
  undefined4 local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  
  FUN_1800ea5c8(*(longlong **)(param_1 + 0xb18),*(ulonglong *)(param_5 + 8),0,1,
                *(longlong *)(param_1 + 0xb10),param_1,0x800,*(longlong *)(param_1 + 0xb78));
  FUN_1800e2d18(param_1,param_2,(ulonglong)param_3,0,0x400);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb10) + 0x18);
  FUN_1800e97b4(param_4,*(int *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10),
                *(ulonglong *)(param_5 + 0x18),plVar2,*(ulonglong *)(param_1 + 0xb78));
  uVar3 = (undefined4)((ulonglong)plVar2 >> 0x20);
  local_a0 = *(undefined8 *)(param_5 + 8);
  local_90 = *(longlong *)(param_5 + 0x10) - *(longlong *)(param_5 + 0x18);
  local_a4 = *(int *)((longlong)param_6 + 0x14) - *(int *)(param_6 + 1);
  uStack_88 = *(undefined4 *)(param_5 + 0x28);
  iStack_84 = (int)*(undefined8 *)((longlong)param_6 + 0xc) - (int)*param_6;
  iStack_80 = (int)((ulonglong)*(undefined8 *)((longlong)param_6 + 0xc) >> 0x20) -
              (int)((ulonglong)*param_6 >> 0x20);
  local_ac = CONCAT44(iStack_80,iStack_84);
  uStack_78 = (ulonglong)*(uint *)(param_5 + 0x24);
  local_58 = ZEXT416(0);
  local_48 = 0;
  local_98 = 1;
  local_68 = 0;
  local_b8 = 0;
  local_b0 = 0;
  iStack_7c = local_a4;
  local_70 = param_2;
  local_60 = (ulonglong)param_3;
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
            (*(longlong **)(param_1 + 0x688),&local_70,*(undefined4 *)param_6,
             *(undefined4 *)((longlong)param_6 + 4),CONCAT44(uVar3,*(undefined4 *)(param_6 + 1)),
             &local_a0,&local_b8);
  uVar1 = FUN_1800e25b4(param_1);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

