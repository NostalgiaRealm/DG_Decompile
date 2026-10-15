/*
 * FUN_1008c590 at 1008c590
 * undefined FUN_1008c590(void)
 * Address ranges: 1008c590-1008c903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1008c590(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
            uint *param_6)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint local_d0;
  uint uStack_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 auStack_78 [8];
  int local_70;
  int local_6c;
  
  iVar4 = (*(code *)PTR_FUN_10134210)(param_6);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar4 == 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_3,auStack_78);
    local_b8 = 0;
    local_b0 = *(uint *)(param_1 + 0x14);
    uStack_ac = *(uint *)(param_1 + 0x18);
    FUN_100dcf80(*(int *)(param_1 + 0x40),extraout_x1,param_1);
    iVar4 = (*(code *)PTR_FUN_101341a4)(&local_b8,param_6);
    if (((iVar4 == 0) || (local_70 != 1)) || (local_6c != 1)) {
      if (*(int *)(param_1 + 0x34) - 3U < 3) {
        (*pcVar3)();
        (*extraout_w11_01)(param_2,auStack_a8);
        uVar1 = local_88 & 0x40;
        (*pcVar3)();
        (*extraout_w11_02)(param_3,auStack_a8);
        uVar10 = local_88 >> 6 & 1;
        uVar6 = extraout_x1_01;
        if (uVar1 != 0) {
          uVar10 = 1;
        }
      }
      else {
        uVar10 = 0;
        uVar6 = extraout_x1_00;
      }
      uVar7 = (ulonglong)(param_4 + *(int *)(param_1 + 0x2c) * param_5);
      if (uVar10 == 0) {
        uStack_cc = param_6[1];
        uVar9 = (ulonglong)uStack_cc;
        local_c4 = param_6[2];
        local_c0 = param_6[3];
        local_d0 = *param_6;
        uVar8 = (ulonglong)local_d0;
        local_c8 = 0;
        uStack_bc = 1;
        iVar4 = *(int *)(param_1 + 0x1c);
        bVar2 = *(byte *)(iVar4 + 0x1012cf10);
        if ((*(uint *)(param_1 + 0x14) >> (ulonglong)(param_4 & 0x1f) < (uint)bVar2) &&
           (*(char *)(iVar4 + 0x1012ce80) != '\0')) {
          local_c4 = (bVar2 + local_c4) - 1 & -(uint)bVar2;
        }
        bVar2 = *(byte *)(iVar4 + 0x1012cf30);
        if ((*(uint *)(param_1 + 0x18) >> (ulonglong)(param_4 & 0x1f) < (uint)bVar2) &&
           (*(char *)(iVar4 + 0x1012ce80) != '\0')) {
          local_c0 = (bVar2 + local_c0) - 1 & -(uint)bVar2;
        }
        uVar5 = (*pcVar3)(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4),uVar6,uVar7);
        (*extraout_w11_04)(uVar5,param_2,uVar7 & 0xffffffff,uVar8 & 0xffffffff,uVar9 & 0xffffffff,0,
                           param_3,uVar7 & 0xffffffff,&local_d0);
      }
      else {
        uVar5 = (*pcVar3)();
        (*extraout_w11_03)(uVar5,param_2,uVar7 & 0xffffffff,0,0,0,param_3,uVar7 & 0xffffffff,0);
      }
    }
    else {
      uVar5 = (*pcVar3)();
      (*extraout_w11_00)(uVar5,param_2,param_3);
    }
    (*(code *)PTR_FUN_10134270)(param_6);
    (*(code *)PTR_FUN_101340bc)(*(int *)(param_1 + 0x40) + 0x4a0);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

