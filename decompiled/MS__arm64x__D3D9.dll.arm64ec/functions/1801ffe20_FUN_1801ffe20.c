/*
 * FUN_1801ffe20 at 1801ffe20
 * undefined FUN_1801ffe20(void)
 * Address ranges: 1801ffe20-1801fff07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ffe20(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  code *extraout_x11;
  longlong lVar5;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  iVar3 = 0;
  uVar2 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      lVar5 = *(longlong *)(param_5 + uVar4 * 8);
      if (((*(longlong *)(param_1 + 0xa70 + uVar4 * 8) != lVar5) ||
          (*(int *)(param_1 + 0xaf0 + uVar4 * 4) != *(int *)(param_6 + uVar4 * 4))) ||
         (*(int *)(param_1 + 0xb30 + uVar4 * 4) != *(int *)(param_7 + uVar4 * 4))) {
        *(longlong *)(param_1 + 0xa70 + uVar4 * 8) = lVar5;
        *(undefined4 *)(param_1 + 0xaf0 + uVar4 * 4) = *(undefined4 *)(param_6 + uVar4 * 4);
        *(undefined4 *)(param_1 + 0xb30 + uVar4 * 4) = *(undefined4 *)(param_7 + uVar4 * 4);
        if (iVar3 == 0) {
          iVar3 = 1;
          uVar2 = uVar4;
        }
        else {
          iVar3 = ((int)uVar4 - (int)uVar2) + 1;
        }
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < param_4);
    if (iVar3 != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
      (*extraout_x11)();
    }
  }
  return;
}

