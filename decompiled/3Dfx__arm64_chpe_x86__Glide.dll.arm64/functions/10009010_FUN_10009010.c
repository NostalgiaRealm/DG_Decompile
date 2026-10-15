/*
 * FUN_10009010 at 10009010
 * undefined FUN_10009010(void)
 * Address ranges: 10009010-1000909b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10009010(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 4) - 1U < 0xfffffffe) {
    if (param_3 == 1) {
      uVar2 = 1;
    }
    else if (param_3 == 2) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
    uVar1 = (*(code *)PTR_FUN_1009d0c8)(*(int *)(param_1 + 4),param_2,0,uVar2);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar1;
    }
    return 0;
  }
  return 1;
}

