/*
 * FUN_100062a0 at 100062a0
 * undefined FUN_100062a0(void)
 * Address ranges: 100062a0-10006317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100062a0(int param_1,uint param_2,undefined4 param_3,undefined8 param_4,uint param_5,
                      int param_6,undefined4 *param_7,uint param_8)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong extraout_x11;
  
  uVar3 = 0x8876086c;
  if ((((param_7 == (undefined4 *)0x0) || (*(uint *)(param_1 + 0x4c) <= param_2)) ||
      (uVar2 = FUN_100033f0(param_1,param_3), uVar3 = extraout_x11, (uVar2 & 1) == 0)) ||
     ((param_5 & ((param_8 | 0xe0) ^ 0xffffffff)) != 0)) goto LAB_1000630c;
  uVar1 = param_5 & 0xe0;
  if (uVar1 == 0x20) {
LAB_100062fc:
    if ((param_5 >> 4 & 1) != 0) goto LAB_1000630c;
  }
  else if (uVar1 != 0x40) {
    if (uVar1 != 0x80) goto LAB_1000630c;
    goto LAB_100062fc;
  }
  if (param_6 != 0) {
    *param_7 = 0;
    uVar3 = 0;
  }
LAB_1000630c:
  return uVar3 & 0xffffffff;
}

