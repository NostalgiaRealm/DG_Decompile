/*
 * FUN_1009c180 at 1009c180
 * undefined FUN_1009c180(void)
 * Address ranges: 1009c180-1009c457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1009c180(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,uint param_6,
            int param_7,undefined4 param_8)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined4 local_d0 [6];
  undefined1 auStack_b8 [28];
  short local_9c;
  short local_9a;
  undefined1 auStack_80 [64];
  
  iVar3 = (*(code *)PTR_FUN_10134210)(param_8);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar3 == 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,auStack_b8);
    local_e0 = 0;
    local_d8 = *(uint *)(param_1 + 0x14);
    uStack_d4 = *(uint *)(param_1 + 0x18);
    iVar3 = (*(code *)PTR_FUN_101341a4)(&local_e0,param_8);
    if ((((iVar3 == 0) || (local_9a != 1)) || (local_9c != 1)) &&
       ((*(int *)(param_1 + 0x34) - 3U < 2 || (*(int *)(param_1 + 0x34) == 5)))) {
      uVar4 = (*pcVar2)();
      (*extraout_w11_00)(uVar4,auStack_80);
    }
    uVar8 = (ulonglong)(param_6 + *(int *)(param_1 + 0x2c) * param_7);
    iVar3 = 4;
    if (*(char *)(*(int *)(param_1 + 0x1c) + 0x1012ce80) == '\0') {
      iVar3 = 1;
    }
    uVar1 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_6 & 0x1f);
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    uVar6 = (ulonglong)((uVar1 + iVar3) - 1 & (iVar3 - 1U ^ 0xffffffff));
    uVar1 = *(uint *)(param_1 + 0x18) >> (ulonglong)(param_6 & 0x1f);
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    uVar7 = (ulonglong)((uVar1 + iVar3) - 1 & (iVar3 - 1U ^ 0xffffffff));
    FUN_100ae580(param_1,local_d0);
    FUN_100970a0(*(undefined4 *)(param_1 + 0xe0),param_3,param_2,*(undefined4 *)(param_3 + 0xc),
                 *(undefined4 *)(param_2 + 0xc),uVar6 & 0xffffffff,uVar7 & 0xffffffff,
                 uVar8 & 0xffffffff,(int)uVar6);
    (*(code *)PTR_FUN_10134270)(param_8);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

