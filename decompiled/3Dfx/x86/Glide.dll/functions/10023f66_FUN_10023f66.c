/*
 * FUN_10023f66 at 10023f66
 * undefined __cdecl FUN_10023f66(int * param_1)
 * Address ranges: 10023f66-10023f8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10023f66(int *param_1)

{
  (**(code **)(*(int *)param_1[2] + 0x17c))
            (param_1[3],param_1[1] + *param_1 + 0xf & 0xfffffff0,*param_1);
  return;
}

