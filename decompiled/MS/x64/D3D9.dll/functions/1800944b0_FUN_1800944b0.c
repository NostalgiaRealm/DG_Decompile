/*
 * FUN_1800944b0 at 1800944b0
 * bool __fastcall FUN_1800944b0(longlong param_1, uint param_2, undefined4 param_3, uint * param_4, uint param_5)
 * Address ranges: 1800944b0-1800946ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800944b0(longlong param_1,uint param_2,undefined4 param_3,uint *param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_res8 [4];
  int local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  
  if (*(ulonglong *)(param_1 + 0x1d150) != 0) {
    FUN_1800eab50(*(longlong **)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x1d150),0);
    plVar3 = *(longlong **)(param_1 + 0x1d150);
    if (plVar3 != (longlong *)0x0) {
      FUN_1800ea1d0(*(longlong **)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),(ulonglong)plVar3,
                    '\x01');
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (*(int *)(param_1 + 0x1d158) == -1) {
    uVar2 = FUN_1800e1704(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),1);
    *(uint *)(param_1 + 0x1d158) = uVar2;
    if (uVar2 == 0xffffffff) goto LAB_1800946b1;
  }
  local_88[0] = 3;
  local_80 = 0;
  local_6c = 0x10001;
  local_68 = 0x1c;
  local_64 = 1;
  local_5c = 0;
  local_78 = (ulonglong)param_2;
  local_70 = param_3;
  plVar3 = (longlong *)
           FUN_1800e2130(*(longlong *)(param_1 + 0x1cf10) + 0x6d0,
                         (ulonglong)*(uint *)(param_1 + 0x28),local_88);
  *(longlong **)(param_1 + 0x1d150) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    local_b4 = 1;
    local_c8[3] = param_2;
    local_b8 = param_3;
    bVar1 = FUN_1800e5510(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),plVar3,0,
                          (longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x16d0),local_c8,param_4,
                          param_5,0);
    if (bVar1) {
      FUN_1800e2ae8(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 8,'\0');
      local_b0 = 0x1c;
      local_ac = 4;
      local_a8 = 0x1688;
      local_90 = 0;
      local_a0 = 0xffffffff00000000;
      uStack_98 = 0;
      plVar4 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),local_res8,
                             *(uint *)(param_1 + 0x1d158),0);
      plVar3 = *(longlong **)
                ((ulonglong)*(uint *)(param_1 + 0x28) * 0x20 + 0x6d0 +
                *(longlong *)(param_1 + 0x1cf10));
      (**(code **)(*plVar3 + 0x90))(plVar3,*(undefined8 *)(param_1 + 0x1d150),&local_b0,*plVar4);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x1d150) + 0x10))();
      *(undefined8 *)(param_1 + 0x1d150) = 0;
    }
  }
LAB_1800946b1:
  return *(longlong *)(param_1 + 0x1d150) != 0;
}

