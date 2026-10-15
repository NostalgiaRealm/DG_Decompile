/*
 * FUN_1009cf85 at 1009cf85
 * int * __fastcall FUN_1009cf85(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1009cf85-1009cfeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1009cf85(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_100ad475(0x28);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[7] = 0;
    piVar1[8] = param_3;
    piVar1[1] = param_2;
    piVar1[6] = 1;
    piVar1[9] = param_4;
    uVar2 = FUN_1009ced6(piVar1);
    if ((char)uVar2 != '\0') {
      return piVar1;
    }
    FUN_1009ceab((int)piVar1);
    FUN_100ad48c(piVar1);
  }
  return (int *)0x0;
}

