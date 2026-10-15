/*
 * FUN_1801b9b08 at 1801b9b08
 * undefined FUN_1801b9b08(void)
 * Address ranges: 1801b9b08-1801b9c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1801b9b08(longlong param_1,int *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined1 auVar7 [16];
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
  
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  local_f0 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  param_2[1] = 0;
  uVar4 = *puVar6;
  param_2[4] = 0;
  param_2[5] = 0;
  auVar7 = (*(code *)puVar1)(0x180224000,uVar4,param_3);
  iVar2 = (*extraout_x11)(auVar7._0_8_,auVar7._8_8_,&local_f0);
  if (-1 < iVar2) {
    uVar4 = (*(code *)puVar1)(0x180224000);
    iVar2 = (*extraout_x11_00)(uVar4,auStack_80);
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
      if ((iVar2 != 0) && (lVar5 = thunk_FUN_180224314(0,(longlong)&local_c4 + 4,0,0), lVar5 != 0))
      {
        *param_2 = (int)uStack_dc - (int)local_e4;
        param_2[1] = uStack_dc._4_4_ - local_e4._4_4_;
        iVar2 = thunk_FUN_180224300(lVar5,0xc);
        iVar3 = thunk_FUN_180224300(lVar5,0xe);
        param_2[5] = iVar3 * iVar2;
        iVar3 = thunk_FUN_180224300(lVar5,0x74);
        iVar2 = 0;
        if (iVar3 != 1) {
          iVar2 = iVar3;
        }
        param_2[2] = iVar2;
        param_2[3] = 1;
        param_2[4] = iVar2;
        thunk_FUN_1802242c4(lVar5);
      }
    }
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
  }
  return param_2;
}

