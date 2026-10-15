/*
 * FUN_10030fe0 at 10030fe0
 * undefined FUN_10030fe0(void)
 * Address ranges: 10030fe0-10031103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030fe0(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  code *extraout_w11;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_80 [2];
  uint local_78 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  uVar6 = param_4[1];
  uVar5 = *param_4;
  iVar2 = *(int *)((int)param_4 + 0xc);
  uVar4 = 0;
  *(undefined8 *)(*param_1 + param_2 * 0x20) = param_3;
  iVar1 = *param_1 + param_2 * 0x20;
  *(undefined8 *)(iVar1 + 0x10) = uVar6;
  *(undefined8 *)(iVar1 + 8) = uVar5;
  uVar3 = FUN_1007dd60(iVar2 * *(int *)(param_4 + 1));
  if (uVar3 != 0) {
    local_68 = *(undefined4 *)param_4;
    uStack_64 = *(undefined4 *)((int)param_4 + 4);
    local_40 = 0;
    local_80[0] = 0;
    local_60 = 0x100000001;
    uStack_58 = 0x10000003c;
    local_50 = 0x100000000;
    uStack_48 = 8;
    local_78[1] = 0x100;
    local_78[2] = 0;
    local_78[0] = uVar3;
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,&local_68,local_78,local_80);
    uVar4 = local_80[0];
    FUN_1007dd80(uVar3);
  }
  *(undefined4 *)(*param_1 + param_2 * 0x20 + 0x18) = uVar4;
  return;
}

