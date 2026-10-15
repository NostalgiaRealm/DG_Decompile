/*
 * FUN_1800e29b0 at 1800e29b0
 * undefined FUN_1800e29b0(void)
 * Address ranges: 1800e29b0-1800e2a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e29b0(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  iVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      lVar2 = *(longlong *)(param_5 + uVar5 * 8);
      if (((*(longlong *)(param_1 + 0xa70 + uVar5 * 8) != lVar2) ||
          (*(int *)(param_1 + 0xaf0 + uVar5 * 4) != *(int *)(param_6 + uVar5 * 4))) ||
         (*(int *)(param_1 + 0xb30 + uVar5 * 4) != *(int *)(param_7 + uVar5 * 4))) {
        *(longlong *)(param_1 + 0xa70 + uVar5 * 8) = lVar2;
        *(undefined4 *)(param_1 + 0xaf0 + uVar5 * 4) = *(undefined4 *)(param_6 + uVar5 * 4);
        *(undefined4 *)(param_1 + 0xb30 + uVar5 * 4) = *(undefined4 *)(param_7 + uVar5 * 4);
        if (iVar4 == 0) {
          iVar4 = 1;
          uVar3 = uVar5;
        }
        else {
          iVar4 = ((int)uVar5 - (int)uVar3) + 1;
        }
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < param_4);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800e2a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x90))();
      return;
    }
  }
  return;
}

