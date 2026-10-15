/*
 * FUN_100561f1 at 100561f1
 * int * __cdecl FUN_100561f1(int * param_1, byte param_2, uint param_3)
 * Address ranges: 100561f1-1005621e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100561f1(int *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = param_1;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *piVar2 = (uint)param_2 * 0x1010101;
      piVar2 = piVar2 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(char *)piVar2 = (char)((uint)param_2 * 0x1010101);
      piVar2 = (int *)((int)piVar2 + 1);
    }
  }
  return param_1;
}

