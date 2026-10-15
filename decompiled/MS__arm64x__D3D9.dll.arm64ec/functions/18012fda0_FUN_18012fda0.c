/*
 * FUN_18012fda0 at 18012fda0
 * undefined FUN_18012fda0(void)
 * Address ranges: 18012fda0-18012feab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012fda0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if ((*plVar1 != 0) && ((*(uint *)(param_1 + 0x48) >> 3 & 1) == 0)) {
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x30));
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x38));
    if (param_2 == 0) {
      thunk_FUN_180223748(*plVar1 - (param_3 & 0xffffffff),0,0x8000);
    }
    else {
      thunk_FUN_1802237e8();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar4 = 0;
  if (DAT_18024e838 != 0) {
    do {
      uVar3 = (uint)uVar4;
      if (*(longlong *)(DAT_18024e830 + uVar4 * 8) == param_1) {
        if ((uVar3 != 0xffffffff) && (uVar3 < DAT_18024e838)) {
          uVar3 = uVar3 + 1;
          if (uVar3 < DAT_18024e838) {
            do {
              uVar4 = (ulonglong)uVar3;
              uVar2 = uVar3 - 1;
              uVar3 = uVar3 + 1;
              *(undefined8 *)(DAT_18024e830 + (ulonglong)uVar2 * 8) =
                   *(undefined8 *)(DAT_18024e830 + uVar4 * 8);
            } while (uVar3 < DAT_18024e838);
          }
          DAT_18024e838 = DAT_18024e838 - 1;
        }
        break;
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < DAT_18024e838);
  }
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffce;
  return;
}

