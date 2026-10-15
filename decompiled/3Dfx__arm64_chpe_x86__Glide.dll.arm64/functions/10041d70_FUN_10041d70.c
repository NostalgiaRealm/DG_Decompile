/*
 * FUN_10041d70 at 10041d70
 * undefined FUN_10041d70(void)
 * Address ranges: 10041d70-10041fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041d70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,byte param_11)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50 [4];
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar4 = param_1 + (uint)param_11 * 8;
  FUN_10023d88(*piVar1,5,*(undefined4 *)(iVar4 + 0x4b0),*(undefined4 *)(iVar4 + 0x4a4),param_4);
  local_60 = param_7;
  uStack_5c = param_8;
  FUN_10068080(*(undefined4 *)(*piVar1 + 0x3180),*(undefined4 *)(*piVar1 + 0x3184),2,&local_60,
               param_9);
  local_58 = CONCAT44(param_6,param_5);
  FUN_10067c78(*(undefined4 *)(*piVar1 + 0x3180),*(undefined4 *)(*piVar1 + 0x3184),0,2,&local_58);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11)(uVar3,*(undefined4 *)(param_1 + 0x4bc),0,4,0,local_50);
  if (-1 < iVar4) {
    FUN_1002a238(param_1,param_2,param_3,local_50[0],param_11);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,*(undefined4 *)(param_1 + 0x4bc),0);
  }
  iVar4 = *piVar1;
  *(byte *)(iVar4 + 0x37a0) = *(byte *)(iVar4 + 0x3150) | *(byte *)(iVar4 + 0x37a0);
  FUN_100234d8(*piVar1);
  FUN_10067bf0(*(undefined4 *)(*piVar1 + 0x3180),*(undefined4 *)(*piVar1 + 0x3184),0);
  FUN_10041bc8(*piVar1 + 0x3780);
  uVar3 = (*pcVar2)();
  (*extraout_w11_01)(uVar3,4,0);
  local_58 = 0;
  FUN_10067c78(*(undefined4 *)(*piVar1 + 0x3180),*(undefined4 *)(*piVar1 + 0x3184),0,2,&local_58);
  return;
}

