/*
 * FUN_1800b6e78 at 1800b6e78
 * undefined FUN_1800b6e78(void)
 * Address ranges: 1800b6e78-1800b6f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800b6e78(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = 0x8876086b;
  if (*(char *)(param_1 + -0x6568) != '\0') {
    uVar2 = 0;
    uVar4 = 0;
    do {
      if (*(uint *)(param_1 + -0x5a00) <= uVar4) {
        return uVar2;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)uVar4 * 8);
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar3 + -8;
      }
      uVar2 = FUN_1800c5ea8(lVar1,param_2,param_3,param_4,param_5,0);
      uVar4 = uVar4 + 1;
    } while (-1 < (int)uVar2);
  }
  return uVar2;
}

