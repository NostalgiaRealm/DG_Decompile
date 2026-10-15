/*
 * FUN_1002f838 at 1002f838
 * undefined FUN_1002f838(void)
 * Address ranges: 1002f838-1002fb0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1002f838(undefined4 *param_1,ulonglong param_2,undefined4 param_3,int param_4,ulonglong param_5,
            int *param_6,int *param_7,int *param_8)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  int *local_100;
  undefined4 *local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (((param_5 & 1) == 0) || (bVar6 = true, param_1[4] == 5)) {
    bVar6 = false;
  }
  local_b8 = 0;
  local_c0 = 0x35;
  if (!bVar6) {
    local_c0 = 0x2c;
  }
  local_e0[0] = 3;
  uStack_d0 = param_2 & 0xffffffff;
  local_fc = param_1 + 0x36;
  local_d8 = 0;
  uStack_c4 = 0x10001;
  local_b0 = 2;
  *local_fc = local_c0;
  local_100 = param_7;
  local_c8 = param_3;
  iStack_bc = param_4;
  iVar7 = FUN_100614e0(param_1[0x29] + 0x520,*param_1,local_e0);
  *param_6 = iVar7;
  if (iVar7 != 0) {
    piVar1 = param_1 + 0x2a;
    iVar7 = FUN_100620b0(*(undefined4 *)(*piVar1 + 0x15e0),1);
    *param_8 = iVar7;
    if (iVar7 != -1) {
      bVar5 = true;
      if (!bVar6) {
        iVar7 = FUN_100620b0(*(undefined4 *)(*piVar1 + 0x15d8),1);
        *local_100 = iVar7;
        if (iVar7 == -1) {
          bVar5 = false;
        }
        else {
          local_a0 = 0x40000002f;
          local_90 = 0xffffffff00000000;
          uStack_88 = 1;
          local_70 = 0x60000002f;
          local_80 = 0;
          local_98 = 0x1249;
          local_68 = 0x1249;
          uStack_58 = 0;
          local_60 = 0;
          local_50 = 0;
          FUN_10062b90(*(undefined4 *)(*piVar1 + 0x15d8),&local_100,iVar7,0);
          puVar3 = &local_70;
          if (param_4 == 1) {
            puVar3 = &local_a0;
          }
          FUN_10061328(param_1[0x29] + 0x520,*param_1,*param_6,puVar3,local_100);
        }
      }
      if (bVar5) {
        local_ec = 0;
        local_e4 = 0;
        local_f8 = 0x37;
        if (!bVar6) {
          local_f8 = 0x2d;
        }
        *local_fc = local_f8;
        local_f4 = 5;
        FUN_10062b90(*(undefined4 *)(*piVar1 + 0x15e0),&local_fc,*param_8,0);
        uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar8,*param_6,&local_f8);
        return 1;
      }
      iVar7 = *param_8;
      if (iVar7 != -1) {
        iVar4 = *(int *)(*piVar1 + 0x15e0);
        iVar2 = iVar4 + 0x1c;
        (*(code *)PTR_FUN_100a003c)(iVar2);
        FUN_10061f28(iVar4,iVar7,1);
        (*(code *)PTR_FUN_100a0090)(iVar2);
      }
    }
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar8);
  }
  return 0;
}

