/*
 * FUN_10089550 at 10089550
 * undefined FUN_10089550(void)
 * Address ranges: 10089550-100895d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10089550(undefined8 param_1,int param_2,int param_3)

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

