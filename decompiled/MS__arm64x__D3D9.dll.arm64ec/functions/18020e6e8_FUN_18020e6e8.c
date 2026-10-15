/*
 * FUN_18020e6e8 at 18020e6e8
 * undefined FUN_18020e6e8(void)
 * Address ranges: 18020e6e8-18020e763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18020e6e8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  local_20[0] = 0;
  local_18 = param_2;
  thunk_FUN_1802236f8(param_1 + 0x28);
  uVar3 = 0;
  lVar1 = FUN_18020ec30(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_18020ee08(lVar1 + 8,local_20);
    if (lVar2 == 0) {
      local_20[0] = 0xffffffff;
      lVar2 = FUN_18020ee08(lVar1 + 8,local_20);
      if (lVar2 == 0) goto LAB_18020e74c;
    }
    uVar3 = *(undefined4 *)(lVar2 + 0x14);
  }
LAB_18020e74c:
  thunk_FUN_18022370c(param_1 + 0x28);
  return uVar3;
}

