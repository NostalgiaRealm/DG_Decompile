/*
 * FUN_10039378 at 10039378
 * undefined FUN_10039378(void)
 * Address ranges: 10039378-100395d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039378(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  FUN_10014130(*piVar1,5,*(undefined4 *)(iVar4 + 0x8c0),*(undefined4 *)(iVar4 + 0x8b4),param_4);
  local_60 = param_7;
  uStack_5c = param_8;
  FUN_10070f40(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),2,&local_60,
               param_9);
  local_58 = CONCAT44(param_6,param_5);
  FUN_10070b38(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),0,2,&local_58);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11)(uVar3,*(undefined4 *)(param_1 + 0x8cc),0,4,0,local_50);
  if (-1 < iVar4) {
    FUN_1001a940(param_1,param_2,param_3,local_50[0],param_11);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,*(undefined4 *)(param_1 + 0x8cc),0);
  }
  iVar4 = *piVar1;
  *(byte *)(iVar4 + 0x425c) = *(byte *)(iVar4 + 0x3650) | *(byte *)(iVar4 + 0x425c);
  FUN_10013848(*piVar1);
  FUN_10070ab0(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),0);
  FUN_10035000(*piVar1 + 0x4090);
  uVar3 = (*pcVar2)();
  (*extraout_w11_01)(uVar3,4,0);
  local_58 = 0;
  FUN_10070b38(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),0,2,&local_58);
  return;
}

