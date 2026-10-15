/*
 * FUN_10045c9b at 10045c9b
 * bool __stdcall FUN_10045c9b(int * param_1)
 * Address ranges: 10045c9b-10045ce5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10045c9b(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  piVar1 = (int *)param_1[1];
  iVar3 = 0;
  if (piVar1 != (int *)0x0) {
    if (param_1[0xd] == 3) {
      iVar3 = 1;
    }
    else {
      param_1 = (int *)0x0;
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,&local_8,&param_1);
      iVar3 = local_8;
      if ((-1 < iVar2) && (param_1 != (int *)0x0)) {
        (**(code **)(*param_1 + 8))(param_1);
        iVar3 = local_8;
      }
    }
  }
  return iVar3 == 1;
}

