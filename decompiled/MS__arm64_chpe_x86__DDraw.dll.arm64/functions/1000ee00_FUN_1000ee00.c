/*
 * FUN_1000ee00 at 1000ee00
 * undefined FUN_1000ee00(void)
 * Address ranges: 1000ee00-1000ee87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000ee00(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    piVar1 = (int *)&DAT_000000dc;
    if (param_3 != 0) {
      piVar1 = (int *)(param_3 + 0x54);
    }
    if (*(int *)(param_2 + 0x54) == *piVar1) {
      piVar1 = (int *)&DAT_000000e0;
      if (param_3 != 0) {
        piVar1 = (int *)(param_3 + 0x58);
      }
      if (*(int *)(param_2 + 0x58) == *piVar1) {
        piVar1 = (int *)&DAT_000000e4;
        if (param_3 != 0) {
          piVar1 = (int *)(param_3 + 0x5c);
        }
        if (*(int *)(param_2 + 0x5c) == *piVar1) {
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

