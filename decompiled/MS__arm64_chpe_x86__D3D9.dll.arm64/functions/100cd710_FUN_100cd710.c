/*
 * FUN_100cd710 at 100cd710
 * undefined FUN_100cd710(void)
 * Address ranges: 100cd710-100cd8e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100cd710(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auVar8 [16];
  undefined4 local_110 [2];
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [88];
  undefined4 local_48;
  
  local_110[0] = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  param_2[5] = 0;
  auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(*puVar1,param_3);
  iVar4 = (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_,local_110);
  if (-1 < iVar4) {
    uVar5 = (*pcVar2)();
    iVar4 = (*extraout_w11_00)(uVar5,auStack_a0);
    if (-1 < iVar4) {
      local_fc = 0;
      local_104 = 0;
      uStack_ec = 0;
      uStack_f4 = 0;
      uStack_dc = 0;
      uStack_e4 = 0;
      uStack_cc = 0;
      uStack_d4 = 0;
      uStack_bc = 0;
      uStack_c4 = 0;
      uStack_ac = 0;
      uStack_b4 = 0;
      uStack_a4 = 0;
      local_108 = 0x68;
      iVar4 = (*(code *)PTR_FUN_1016c1d8)(local_48,&local_108);
      if (iVar4 != 0) {
        iVar4 = (*(code *)PTR_FUN_1016c008)(0,(int)&uStack_e4 + 4,0,0);
        if (iVar4 != 0) {
          *param_2 = (int)local_fc - (int)local_104;
          param_2[1] = local_fc._4_4_ - local_104._4_4_;
          iVar6 = (*(code *)PTR_FUN_1016c020)(iVar4,0xe);
          iVar7 = (*(code *)PTR_FUN_1016c020)(iVar4,0xc);
          param_2[5] = iVar6 * iVar7;
          iVar7 = (*(code *)PTR_FUN_1016c020)(iVar4,0x74);
          param_2[3] = 1;
          puVar3 = PTR_FUN_1016c014;
          iVar6 = 0;
          if (iVar7 != 1) {
            iVar6 = iVar7;
          }
          param_2[2] = iVar6;
          param_2[4] = iVar6;
          (*(code *)puVar3)(iVar4);
        }
      }
    }
    uVar5 = (*pcVar2)();
    (*extraout_w11_01)(uVar5);
  }
  return param_2;
}

