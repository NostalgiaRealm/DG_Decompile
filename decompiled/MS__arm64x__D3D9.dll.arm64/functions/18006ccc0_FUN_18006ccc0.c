/*
 * FUN_18006ccc0 at 18006ccc0
 * undefined FUN_18006ccc0(void)
 * Address ranges: 18006ccc0-18006cd7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18006ccc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 extraout_x1;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong extraout_x15;
  
  FUN_180001640();
  lVar2 = extraout_x15 * -0x10;
  thunk_FUN_180001218(&stack0xffffffffffffffe0 + lVar2,param_3,0x4a70);
  uVar3 = 0;
  uVar6 = 0xffffffff;
  uVar4 = 0xffffffff;
  do {
    uVar7 = uVar6;
    uVar5 = uVar4;
    if ((((&stack0xfffffffffffffff0)[uVar3 + lVar2] != '\0') &&
        (uVar7 = uVar3, (&stack0xffffffffffffffe0)[uVar3 + lVar2] != '\0')) &&
       (uVar7 = uVar6, uVar5 = (uint)uVar3, (&stack0xffffffffffffffe0)[uVar3 + lVar2] != '0')) {
      uVar5 = uVar4;
    }
    uVar1 = (uint)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    uVar6 = uVar7;
    uVar4 = uVar5;
  } while (uVar1 < 0x10);
  if (uVar5 != 0xffffffff) {
    if (((int)uVar7 != -1) && ((param_4 >> 9 & 1) != 0)) {
      (&stack0xfffffffffffffff0)[uVar7 + lVar2] = 7;
    }
    if ((param_4 >> 10 & 1) != 0) {
      (&stack0xfffffffffffffff0)[(ulonglong)uVar5 + lVar2] = 7;
    }
  }
  thunk_FUN_180001218(extraout_x1,&stack0xffffffffffffffe0 + lVar2,0x4a70);
  return extraout_x1;
}

