/*
 * FUN_10059f58 at 10059f58
 * undefined FUN_10059f58(void)
 * Address ranges: 10059f58-10059fcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10059f58(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_1009d03c)(param_1 + 0x1c);
  uVar2 = FUN_1005a168(param_1,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_100592a0(uVar2,uVar2 & 0xffffffff,0);
  }
  (*(code *)PTR_FUN_1009d090)(param_1 + 0x1c);
  return uVar1;
}

