/*
 * FUN_1800a9c48 at 1800a9c48
 * undefined FUN_1800a9c48(void)
 * Address ranges: 1800a9c48-1800a9dbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a9c48(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  *param_1 = &PTR_FUN_1802364d0;
  param_1[0xd04] = &PTR_DAT_1802296c8;
  param_1[0xd07] = &PTR_FUN_1802360a0;
  lVar2 = param_1[0xd11];
  uVar4 = *(uint *)(lVar2 + 0xf8);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(undefined8 **)(*(longlong *)(lVar2 + 0xf0) + uVar3 * 8) == param_1) {
        if ((int)uVar3 != -1) {
          while (uVar1 = (int)uVar3 + 1, uVar1 < uVar4) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0xf0) + uVar3 * 8) =
                 *(undefined8 *)(*(longlong *)(lVar2 + 0xf0) + (ulonglong)uVar1 * 8);
            uVar3 = (ulonglong)uVar1;
            uVar4 = *(uint *)(lVar2 + 0xf8);
          }
          *(int *)(lVar2 + 0xf8) = *(int *)(lVar2 + 0xf8) + -1;
        }
        break;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < uVar4);
  }
  if (*(int *)(lVar2 + 0xf8) == 0) {
    thunk_FUN_180102fc0(DAT_180258770);
    DAT_180258778 = 0;
    DAT_180258770 = 0;
  }
  FUN_1800a3e50(param_1[0xd11] + 0xa0);
  thunk_FUN_180102fc0(param_1[0xd30]);
  thunk_FUN_180102fc0(param_1[0xd2e]);
  thunk_FUN_180102fc0(param_1[0xd2c]);
  thunk_FUN_180102fc0(param_1[0xd29]);
  thunk_FUN_180102fc0(param_1[0xd26]);
  param_1[0xd28] = 0;
  param_1[0xd26] = 0;
  param_1[0xd27] = 0;
  thunk_FUN_180102fc0(param_1[0xd22]);
  param_1[0xd24] = 0;
  param_1[0xd22] = 0;
  param_1[0xd23] = 0;
  thunk_FUN_180102fc0(param_1[0xd1e]);
  param_1[0xd20] = 0;
  param_1[0xd1e] = 0;
  param_1[0xd1f] = 0;
  thunk_FUN_180102fc0(param_1[0xd1b]);
  param_1[0xd1d] = 0;
  param_1[0xd1b] = 0;
  param_1[0xd1c] = 0;
  thunk_FUN_180102fc0(param_1[0xd17]);
  param_1[0xd19] = 0;
  param_1[0xd17] = 0;
  param_1[0xd18] = 0;
  FUN_180001798(param_1);
  return;
}

