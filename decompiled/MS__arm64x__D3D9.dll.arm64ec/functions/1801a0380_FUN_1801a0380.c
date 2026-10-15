/*
 * FUN_1801a0380 at 1801a0380
 * undefined FUN_1801a0380(void)
 * Address ranges: 1801a0380-1801a056f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801a0380(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *extraout_x11;
  undefined8 local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined1 auStack_48 [8];
  
  if (*(longlong *)(param_1 + 0x1d150) != 0) {
    FUN_18020e768(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),
                  *(longlong *)(param_1 + 0x1d150),0);
    FUN_180206a20(*(undefined8 *)(param_1 + 0x1cf10),*(undefined8 *)(param_1 + 0x1d150));
  }
  if (*(int *)(param_1 + 0x1d158) == -1) {
    iVar1 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),1);
    *(int *)(param_1 + 0x1d158) = iVar1;
    if (iVar1 == -1) goto LAB_1801a0544;
  }
  local_80[0] = 3;
  local_64 = 0x1c00010001;
  local_5c = 1;
  local_78 = 0;
  local_54 = 0;
  uStack_70 = (ulonglong)param_2;
  local_68 = param_3;
  lVar2 = FUN_18020d528(*(longlong *)(param_1 + 0x1cf10) + 0x6d0,*(undefined4 *)(param_1 + 0x28),
                        local_80);
  *(longlong *)(param_1 + 0x1d150) = lVar2;
  if (lVar2 != 0) {
    uStack_b4 = 1;
    local_c8 = 0;
    local_c0 = 0;
    uStack_bc = param_2;
    local_b8 = param_3;
    uVar3 = FUN_18020b680(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),lVar2,0,
                          *(longlong *)(param_1 + 0x1cf18) + 0x16d0,&local_c8,param_4,param_5,0);
    if ((uVar3 & 1) == 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      *(undefined8 *)(param_1 + 0x1d150) = 0;
    }
    else {
      FUN_180207560(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 8,0);
      local_b0 = 0x40000001c;
      local_a8 = 0x1688;
      local_a0 = 0xffffffff00000000;
      uStack_98 = 0;
      local_90 = 0;
      puVar4 = (undefined8 *)
               FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),auStack_48,
                             *(undefined4 *)(param_1 + 0x1d158),0);
      FUN_18020d3a0(*(longlong *)(param_1 + 0x1cf10) + 0x6d0,*(undefined4 *)(param_1 + 0x28),
                    *(undefined8 *)(param_1 + 0x1d150),&local_b0,*puVar4);
    }
  }
LAB_1801a0544:
  return *(longlong *)(param_1 + 0x1d150) != 0;
}

