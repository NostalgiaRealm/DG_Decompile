/*
 * FUN_10023f8f at 10023f8f
 * undefined __cdecl FUN_10023f8f(int * param_1)
 * Address ranges: 10023f8f-10023fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10023f8f(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  (**(code **)(*piVar1 + 0x17c))(param_1[1],param_1[2],param_1[3]);
  if (param_1[4] != 0) {
    FUN_10046f20((void *)(piVar1[0xc62] + 0x14f0),param_1[5],param_1[4],param_1[6]);
  }
  return;
}

