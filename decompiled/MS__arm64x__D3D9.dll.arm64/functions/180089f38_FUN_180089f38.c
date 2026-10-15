/*
 * FUN_180089f38 at 180089f38
 * undefined FUN_180089f38(void)
 * Address ranges: 180089f38-18008a11b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180089f38(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_90 [2];
  undefined8 local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined1 auStack_58 [8];
  
  if (*(longlong *)(param_1 + 0x1d150) != 0) {
    FUN_1800f2030(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),
                  *(longlong *)(param_1 + 0x1d150),0);
    FUN_1800ed018(*(undefined8 *)(param_1 + 0x1cf10),*(undefined8 *)(param_1 + 0x1d150));
  }
  if (*(int *)(param_1 + 0x1d158) == -1) {
    iVar1 = FUN_1800e7220(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),1);
    *(int *)(param_1 + 0x1d158) = iVar1;
    if (iVar1 == -1) goto LAB_18008a0ec;
  }
  local_90[0] = 3;
  local_74 = 0x1c00010001;
  local_88 = 0;
  local_6c = 1;
  local_64 = 0;
  uStack_80 = (ulonglong)param_2;
  local_78 = param_3;
  lVar2 = FUN_1800e7ca8(*(longlong *)(param_1 + 0x1cf10) + 0x6d0,*(undefined4 *)(param_1 + 0x28),
                        local_90);
  *(longlong *)(param_1 + 0x1d150) = lVar2;
  if (lVar2 != 0) {
    local_e0 = 0;
    local_d8 = 0;
    uStack_cc = 1;
    uStack_d4 = param_2;
    local_d0 = param_3;
    uVar3 = FUN_1800ebbb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),lVar2,0,
                          *(longlong *)(param_1 + 0x1cf18) + 0x16d0,&local_e0,param_4,param_5,0);
    if ((uVar3 & 1) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x1d150) + 0x10))();
      *(undefined8 *)(param_1 + 0x1d150) = 0;
    }
    else {
      FUN_1800e8548(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 8,0);
      local_c0 = 0x40000001c;
      local_b8 = 0x1688;
      local_b0 = 0xffffffff00000000;
      uStack_a8 = 0;
      local_a0 = 0;
      puVar4 = (undefined8 *)
               FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),auStack_58,
                             *(undefined4 *)(param_1 + 0x1d158),0);
      plVar5 = *(longlong **)
                (*(longlong *)(param_1 + 0x1cf10) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x20 +
                0x6d0);
      (**(code **)(*plVar5 + 0x90))(plVar5,*(undefined8 *)(param_1 + 0x1d150),&local_c0,*puVar4);
    }
  }
LAB_18008a0ec:
  return *(longlong *)(param_1 + 0x1d150) != 0;
}

