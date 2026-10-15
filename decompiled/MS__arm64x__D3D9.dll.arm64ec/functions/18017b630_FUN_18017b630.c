/*
 * FUN_18017b630 at 18017b630
 * undefined FUN_18017b630(void)
 * Address ranges: 18017b630-18017b71b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017b630(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 local_30 [4];
  
  if (1 < *(uint *)(param_3 + 0x538)) {
    FUN_180215058(param_2,2,0x200005f,0x25001,local_30,0);
  }
  if (1 < *(uint *)(param_3 + 0x538)) {
    FUN_180215058(param_2,2,0x20000ce,*(uint *)(param_3 + 0x538),local_30,0);
  }
  FUN_180215058(param_2,1,0x100185d);
  local_30[0] = 0;
  FUN_180215058(param_2,3,0x300008f,0x110000,local_30,8);
  uVar1 = FUN_180215058(param_2,1,0x100285c);
  FUN_180181910(uVar1,param_2,param_3);
  FUN_180215058(param_2,2,0x200005e,*(undefined4 *)(param_3 + 0x534),local_30,0);
  return;
}

