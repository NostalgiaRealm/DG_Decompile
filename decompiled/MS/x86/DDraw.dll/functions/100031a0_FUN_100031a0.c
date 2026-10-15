/*
 * FUN_100031a0 at 100031a0
 * int * __stdcall FUN_100031a0(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100031a0-10003224
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100031a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = FUN_100021cb();
  if ((param_4 == 0) || ((char)iVar1 != '\0')) {
    piVar2 = (int *)(&DAT_1006c4bc + param_1 * 0x228);
  }
  else {
    piVar2 = (int *)(&DAT_1006c4b0 + param_1 * 0x228);
  }
  uVar4 = 0;
  if (piVar2[1] != 0) {
    do {
      piVar3 = (int *)(*piVar2 + uVar4 * 0x18);
      if ((*piVar3 == param_2) && (piVar3[1] == param_3)) {
        if (param_4 == 0) {
          return piVar3;
        }
        if ((char)iVar1 != '\0') {
          return piVar3;
        }
        if (param_4 == piVar3[4]) {
          return piVar3;
        }
        if (param_4 == piVar3[4] + 1) {
          return piVar3;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)piVar2[1]);
  }
  return (int *)0x0;
}

