/*
 * FUN_100350a0 at 100350a0
 * undefined FUN_100350a0(void)
 * Address ranges: 100350a0-10035223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100350a0(int param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  code *extraout_w11;
  ulonglong uVar8;
  undefined4 local_d0 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar5 = *(int *)(param_1 + 0xbc);
  if (iVar5 == 0) {
    bVar4 = false;
  }
  else {
    piVar1 = (int *)(param_1 + 0xe4);
    if (*param_3 == *(int *)(&DAT_100be32c + *piVar1 * 0x228) &&
        *(int *)(&DAT_100be32c + *piVar1 * 0x228) != 0) {
      local_d0[0] = 0;
      iVar5 = FUN_1004ee50(iVar5,local_d0);
      param_2 = extraout_x1;
      if (-1 < iVar5) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        puVar7 = (undefined8 *)(*extraout_w11)(uVar6);
        uVar6 = local_d0[0];
        uVar8 = puVar7[1];
        local_c0 = *puVar7;
        uStack_a8 = puVar7[3];
        uStack_b0 = puVar7[2];
        uStack_98 = puVar7[5];
        local_a0 = puVar7[4];
        uStack_88 = puVar7[7];
        uStack_90 = puVar7[6];
        uStack_b8._4_4_ = (undefined4)(uVar8 >> 0x20);
        uVar3 = uStack_b8._4_4_;
        uStack_78 = puVar7[9];
        local_80 = puVar7[8];
        uStack_68 = puVar7[0xb];
        uStack_70 = puVar7[10];
        uStack_b8 = uVar8;
        (*(code *)__hybrid_CompilerIAT)
                  (local_d0[0],0,0,uVar3,uVar8 & 0xffffffff,*param_3,0,0,0xcc0020);
        FUN_1004f220(*(int *)(param_1 + 0xbc),uVar6);
        param_2 = extraout_x1_00;
      }
    }
    iVar5 = *param_3;
    iVar2 = *(int *)(&DAT_100be32c + *piVar1 * 0x228);
    if (iVar5 == iVar2 && iVar2 != 0) {
      FUN_10003258(*piVar1,param_2,iVar5,param_4);
    }
    bVar4 = iVar5 == iVar2 && iVar2 != 0;
    if (*param_4 == 1) {
      FUN_10004408(*(undefined4 *)(&DAT_100be328 + *piVar1 * 0x228));
    }
  }
  return bVar4;
}

