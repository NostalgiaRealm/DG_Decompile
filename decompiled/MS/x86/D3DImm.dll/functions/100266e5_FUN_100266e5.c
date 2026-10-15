/*
 * FUN_100266e5 at 100266e5
 * undefined __cdecl FUN_100266e5(int * param_1)
 * Address ranges: 100266e5-1002672a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100266e5(int *param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_1c [6];
  
  this = (void *)*param_1;
  piVar1 = *(int **)((int)this + 0x1f6c);
  piVar3 = local_1c;
  for (iVar2 = 6; param_1 = param_1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_1;
    piVar3 = piVar3 + 1;
  }
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 0x1f7c);
  }
  FUN_10029490(this,(int)this + 0x80,(int)this + 0x1d30,local_1c,piVar1);
  return;
}

