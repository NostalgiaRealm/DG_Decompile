/*
 * FUN_100061f0 at 100061f0
 * undefined FUN_100061f0(void)
 * Address ranges: 100061f0-1000623f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100061f0(int param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x4c)) && (param_3 - 1U < 3)) {
    cVar1 = FUN_100033f0(param_1,param_3);
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = 0x8876086b;
    }
  }
  return uVar2;
}

