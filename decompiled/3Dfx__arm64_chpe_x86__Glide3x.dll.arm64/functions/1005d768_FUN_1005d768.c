/*
 * FUN_1005d768 at 1005d768
 * undefined FUN_1005d768(void)
 * Address ranges: 1005d768-1005d7db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1005d768(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_100a003c)(param_1 + 0x1c);
  uVar2 = FUN_1005d978(param_1,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_1005cab0(uVar2,uVar2 & 0xffffffff,0);
  }
  (*(code *)PTR_FUN_100a0090)(param_1 + 0x1c);
  return uVar1;
}

