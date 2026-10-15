/*
 * FUN_180069398 at 180069398
 * undefined FUN_180069398(void)
 * Address ranges: 180069398-18006944b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180069398(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (1 < *(uint *)(param_3 + 0x538)) {
    FUN_1800f5b00(param_2,2,0x200005f,0x25001);
  }
  if (1 < *(uint *)(param_3 + 0x538)) {
    FUN_1800f5b00(param_2,2,0x20000ce);
  }
  FUN_1800f5b00(param_2,1,0x100185d);
  FUN_1800f5b00(param_2,3,0x300008f,0x110000,0);
  uVar1 = FUN_1800f5b00(param_2,1,0x100285c);
  FUN_18006ead8(uVar1,param_2,param_3);
  FUN_1800f5b00(param_2,2,0x200005e,*(undefined4 *)(param_3 + 0x534));
  return;
}

