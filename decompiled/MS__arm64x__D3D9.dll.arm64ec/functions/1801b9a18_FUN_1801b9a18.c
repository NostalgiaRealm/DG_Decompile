/*
 * FUN_1801b9a18 at 1801b9a18
 * undefined FUN_1801b9a18(void)
 * Address ranges: 1801b9a18-1801b9aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1801b9a18(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined1 auStack_80 [88];
  undefined8 local_28;
  
  thunk_FUN_180223bf8(param_2);
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_f0 = 0;
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar2 = (*extraout_x11)(uVar3,param_3,&local_f0);
  if (-1 < iVar2) {
    uVar3 = (*(code *)puVar1)(0x180224000);
    iVar2 = (*extraout_x11_00)(uVar3,auStack_80);
    if (-1 < iVar2) {
      uStack_dc = 0;
      local_e4 = 0;
      uStack_cc = 0;
      uStack_d4 = 0;
      uStack_bc = 0;
      local_c4 = 0;
      uStack_ac = 0;
      uStack_b4 = 0;
      uStack_9c = 0;
      local_a4 = 0;
      uStack_8c = 0;
      uStack_94 = 0;
      local_84 = 0;
      local_e8 = 0x68;
      iVar2 = thunk_FUN_180223dec(local_28,&local_e8);
      if (iVar2 != 0) {
        param_2[1] = uStack_dc;
        *param_2 = local_e4;
      }
    }
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
  }
  return param_2;
}

