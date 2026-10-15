/*
 * FUN_18010eb78 at 18010eb78
 * undefined FUN_18010eb78(void)
 * Address ranges: 18010eb78-18010ec6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18010eb78(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint local_30 [4];
  
  uVar2 = 0;
  do {
    if (param_1[uVar2 + 6] == (param_3 & 0xffff)) {
      return uVar2;
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  uVar2 = 0xffffffff;
  uVar1 = 0;
  do {
    uVar3 = (uint)uVar2;
    local_30[0] = param_1[5];
    if ((*(byte *)((longlong)local_30 + (longlong)((int)uVar1 >> 3)) >> (ulonglong)(uVar1 & 7) & 1)
        == 0) {
      if (param_1[(ulonglong)uVar1 + 6] == 0xffffffff) goto LAB_18010ec2c;
      uVar2 = (ulonglong)uVar1;
    }
    uVar3 = (uint)uVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  if (uVar3 != 0xffffffff) {
    FUN_1801060c0(param_2,0x290200100100,*param_1 | 0x80000000,uVar2,param_1[uVar2 + 6] << 4,0);
  }
  uVar1 = 0xffffffff;
LAB_18010ec2c:
  if (uVar1 == 0xffffffff) {
    uVar1 = uVar3;
  }
  param_1[(ulonglong)uVar1 + 6] = 0xffffffff;
  *(byte *)((longlong)param_1 + (longlong)((int)uVar1 >> 3) + 0x9c) =
       *(byte *)((longlong)param_1 + (longlong)((int)uVar1 >> 3) + 0x9c) |
       (byte)(1 << (ulonglong)(uVar1 & 7));
  return (ulonglong)uVar1;
}

