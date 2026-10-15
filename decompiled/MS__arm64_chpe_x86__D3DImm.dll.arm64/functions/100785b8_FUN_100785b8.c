/*
 * FUN_100785b8 at 100785b8
 * undefined FUN_100785b8(void)
 * Address ranges: 100785b8-1007862b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100785b8(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_100a1014)(param_1 + 0x1c);
  uVar2 = FUN_100786b8(param_1,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_10077b10(uVar2,uVar2 & 0xffffffff,0);
  }
  (*(code *)PTR_FUN_100a1044)(param_1 + 0x1c);
  return uVar1;
}

