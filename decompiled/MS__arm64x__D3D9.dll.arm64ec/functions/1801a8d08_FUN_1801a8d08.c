/*
 * FUN_1801a8d08 at 1801a8d08
 * undefined FUN_1801a8d08(void)
 * Address ranges: 1801a8d08-1801a8f53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801a8d08(longlong param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x7;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0 [6];
  undefined1 auStack_b8 [28];
  short local_9c;
  short local_9a;
  undefined1 auStack_80 [64];
  
  iVar2 = thunk_FUN_180223d24(in_x7);
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (iVar2 == 0) {
    uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar3,auStack_b8);
    local_d8 = *(undefined4 *)(param_1 + 0x24);
    uStack_d4 = *(undefined4 *)(param_1 + 0x28);
    local_e0 = 0;
    iVar2 = thunk_FUN_180223c48(&local_e0,in_x7);
    if ((((iVar2 == 0) || (local_9a != 1)) || (local_9c != 1)) &&
       ((*(int *)(param_1 + 0x44) - 3U < 2 || (*(int *)(param_1 + 0x44) == 5)))) {
      uVar3 = (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(uVar3,auStack_80);
    }
    FUN_1801bad48(local_d0);
    FUN_1801a49f8(*(undefined8 *)(param_1 + 0x130),param_3,param_2,*(undefined8 *)(param_3 + 0x14),
                  *(undefined8 *)(param_2 + 0x14));
    thunk_FUN_180223bf8(in_x7);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

