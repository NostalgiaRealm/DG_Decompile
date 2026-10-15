/*
 * FUN_1800b5e60 at 1800b5e60
 * undefined FUN_1800b5e60(void)
 * Address ranges: 1800b5e60-1800b60bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800b5e60(longlong param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,uint param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  uint uVar7;
  
  uVar5 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    uVar6 = param_2;
  }
  else {
    bVar2 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    uVar6 = extraout_x1;
    if (iVar3 == 0) {
      FUN_180003398();
      uVar6 = extraout_x1_00;
    }
  }
  if (((((int)param_2 - 1U < 6) && (param_7 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xb4))) &&
      (*(char *)(param_1 + -0x6568) != '\0')) && (*(longlong *)(param_1 + -0x178) != 0)) {
    uVar5 = 0;
    uVar4 = func_0x0001801cea00(param_1 + -0x6838,uVar6,*(int *)(param_1 + -0x63a4) != 0);
    uVar4 = FUN_1800b4508(param_1 + -0x6838,uVar4);
    uVar6 = FUN_1800aa688(param_1 + -0x6838,uVar4);
    if ((((uVar6 & 1) != 0) && (uVar6 = FUN_1800b4570(param_1 + -0x6838), (uVar6 & 1) != 0)) &&
       ((uVar6 = FUN_1800b4958(param_1 + -0x6838), (uVar6 & 1) != 0 &&
        (uVar6 = FUN_1800aa9f8(param_1 + -0x6838), (uVar6 & 1) != 0)))) {
      uVar5 = 0x8876086c;
      if ((((*(uint *)(*(longlong *)(param_1 + 0x5cb0) + 0x10) & *(uint *)(param_1 + -0x6c) &
            (*(uint *)(param_1 + -0x70) ^ 0xffffffff)) == 0) &&
          (uVar5 = 0, *(char *)(param_1 + -0x1f) == '\0')) &&
         (*(longlong *)(param_1 + -0x6808) != 0)) {
        if ((((*(int *)(*(longlong *)(param_1 + 0x5cb0) + 4) == 0) &&
             (*(longlong *)(param_1 + -0x170) != 0)) &&
            (*(char *)(*(longlong *)(param_1 + -0x170) + 0x8c) == '\0')) ||
           ((*(int *)(param_1 + -0x61a0) == 0 && (*(char *)(param_1 + -0x1d) != '\0')))) {
          iVar3 = *(int *)(param_1 + -0x61a0);
          uVar7 = 1;
        }
        else {
          iVar3 = *(int *)(param_1 + -0x61a0);
          uVar7 = 3;
        }
        uVar1 = *(uint *)(param_1 + -0x6444);
        uVar7 = uVar1 & 0xfffffff9 | (uint)(iVar3 != 0) << 2 | uVar7;
        *(uint *)(param_1 + -0x6444) = uVar7;
        *(byte *)(param_1 + -0x5b26) = uVar7 != uVar1 | *(byte *)(param_1 + -0x5b26);
        FUN_1800aaa78(param_1 + -0x6838,*(longlong *)(param_1 + 0x5c50) == 0);
        uVar5 = FUN_180007328(param_1 + -0x6838,param_1 + 0x5cb0,param_3,param_2 & 0xffffffff,
                              param_4,param_5,param_6,param_7);
      }
    }
  }
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar5;
}

