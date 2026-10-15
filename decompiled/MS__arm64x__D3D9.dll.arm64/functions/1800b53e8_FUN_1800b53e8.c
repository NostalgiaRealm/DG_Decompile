/*
 * FUN_1800b53e8 at 1800b53e8
 * undefined FUN_1800b53e8(void)
 * Address ranges: 1800b53e8-1800b560b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b53e8(undefined4 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                 uint param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((*(uint *)(param_2 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar2 == 0) {
      FUN_180003398();
    }
  }
  iVar2 = 0;
  if (*(char *)(param_2 + -0x6568) == '\0') goto LAB_1800b55c8;
  if ((((param_5 & 1) == 0) || ((param_5 & 6) == 0)) || (*(longlong *)(param_2 + -0x67e8) == 0)) {
LAB_1800b5578:
    uVar3 = FUN_1800b4508(param_2 + -0x6838,param_5 & 1,(param_5 & 6) != 0);
    uVar4 = FUN_1800aa688(param_2 + -0x6838,uVar3);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_1800b4958(param_2 + -0x6838), (uVar4 & 1) == 0))
    goto LAB_1800b55c8;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + -0x67e8) + 8);
    lVar5 = *(longlong *)(*(longlong *)(param_2 + -0x6808) + 8);
    if (((*(int *)(lVar6 + 0x8c) == *(int *)(lVar5 + 0x8c)) &&
        (*(int *)(lVar6 + 0x90) == *(int *)(lVar5 + 0x90))) &&
       (*(int *)(lVar6 + 0x9c) == *(int *)(lVar5 + 0x9c))) goto LAB_1800b5578;
    uVar4 = FUN_1800aa688(param_2 + -0x6838,2);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_1800b4958(param_2 + -0x6838), (uVar4 & 1) == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_180006f08(param_1,param_2 + -0x6838,param_3,param_4,param_5 & 0xfffffffe,param_6,
                            param_7,param_2 + 0x730);
      if (iVar2 < 0) goto LAB_1800b55c8;
    }
    if (((*(int *)(*(longlong *)(param_2 + -0x6808) + 0x48) == 0x4c4c554e) ||
        (uVar4 = FUN_1800aa688(param_2 + -0x6838,1), (uVar4 & 1) == 0)) ||
       (uVar4 = FUN_1800b4958(param_2 + -0x6838), (uVar4 & 1) == 0)) goto LAB_1800b55c8;
    param_5 = 1;
  }
  iVar2 = FUN_180006f08(param_1,param_2 + -0x6838,param_3,param_4,param_5,param_6,param_7,
                        param_2 + 0x730);
LAB_1800b55c8:
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar2;
}

