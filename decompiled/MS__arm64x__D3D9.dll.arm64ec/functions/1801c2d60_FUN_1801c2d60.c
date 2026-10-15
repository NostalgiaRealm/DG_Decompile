/*
 * FUN_1801c2d60 at 1801c2d60
 * undefined FUN_1801c2d60(void)
 * Address ranges: 1801c2d60-1801c2ed3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c2d60(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  *param_1 = &PTR_FUN_18022e8b8;
  param_1[0xd04] = &PTR_FUN_1802296c8;
  param_1[0xd07] = &PTR_FUN_18022e488;
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
    FUN_1802229d8(DAT_18024d910);
    DAT_18024d908 = 0;
    DAT_18024d910 = 0;
  }
  FUN_1801bc380(param_1[0xd11] + 0xa0);
  FUN_1802229d8(param_1[0xd30]);
  FUN_1802229d8(param_1[0xd2e]);
  FUN_1802229d8(param_1[0xd2c]);
  FUN_1802229d8(param_1[0xd29]);
  FUN_1802229d8(param_1[0xd26]);
  param_1[0xd28] = 0;
  param_1[0xd26] = 0;
  param_1[0xd27] = 0;
  FUN_1802229d8(param_1[0xd22]);
  param_1[0xd24] = 0;
  param_1[0xd22] = 0;
  param_1[0xd23] = 0;
  FUN_1802229d8(param_1[0xd1e]);
  param_1[0xd20] = 0;
  param_1[0xd1e] = 0;
  param_1[0xd1f] = 0;
  FUN_1802229d8(param_1[0xd1b]);
  param_1[0xd1d] = 0;
  param_1[0xd1b] = 0;
  param_1[0xd1c] = 0;
  FUN_1802229d8(param_1[0xd17]);
  param_1[0xd19] = 0;
  param_1[0xd17] = 0;
  param_1[0xd18] = 0;
  FUN_180105870(param_1);
  return;
}

