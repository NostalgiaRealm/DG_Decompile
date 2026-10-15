/*
 * FUN_10062e18 at 10062e18
 * undefined FUN_10062e18(void)
 * Address ranges: 10062e18-10062e8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10062e18(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_100a803c)(param_1 + 0x1c);
  uVar2 = FUN_10063028(param_1,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_10062160(uVar2,uVar2 & 0xffffffff,0);
  }
  (*(code *)PTR_FUN_100a8090)(param_1 + 0x1c);
  return uVar1;
}

