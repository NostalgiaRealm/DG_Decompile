/*
 * FUN_10006e00 at 10006e00
 * undefined FUN_10006e00(void)
 * Address ranges: 10006e00-10006e4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006e00(int param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x4c)) && (param_3 - 1U < 4)) {
    cVar1 = FUN_10003770(param_1,param_3);
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = 0x8876086b;
    }
  }
  return uVar2;
}

