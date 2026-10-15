/*
 * FUN_10006eb0 at 10006eb0
 * undefined FUN_10006eb0(void)
 * Address ranges: 10006eb0-10006f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10006eb0(int param_1,uint param_2,undefined4 param_3,undefined8 param_4,uint param_5,int param_6
            ,undefined4 *param_7,uint param_8)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_7 == (undefined4 *)0x0) {
    return 0x8876086c;
  }
  if (*(uint *)(param_1 + 0x4c) <= param_2) {
    return 0x8876086c;
  }
  uVar2 = FUN_10003770(param_1,param_3);
  if ((uVar2 & 1) == 0) {
    return 0x8876086c;
  }
  if ((param_5 & ((param_8 | 0xe0) ^ 0xffffffff)) != 0) {
    return 0x8876086c;
  }
  uVar1 = param_5 & 0xe0;
  if (uVar1 != 0x20) {
    if (uVar1 == 0x40) goto LAB_10006f34;
    if (uVar1 != 0x80) {
      return 0x8876086c;
    }
  }
  if ((param_5 >> 4 & 1) != 0) {
    return 0x8876086c;
  }
LAB_10006f34:
  if ((param_6 != 0) &&
     (((param_5 >> 9 & 1) == 0 || (*(int *)(*(int *)(param_1 + 0x54) + param_2 * 0x10 + 4) == 0))))
  {
    *param_7 = 0;
    uVar3 = 0;
  }
  return uVar3;
}

