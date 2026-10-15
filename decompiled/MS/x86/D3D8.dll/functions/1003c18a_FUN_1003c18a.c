/*
 * FUN_1003c18a at 1003c18a
 * undefined __cdecl FUN_1003c18a(int * param_1)
 * Address ranges: 1003c18a-1003c1cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1003c18a(int *param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_1c [6];
  
  this = (void *)*param_1;
  piVar1 = *(int **)((int)this + 0xdbe4);
  piVar3 = local_1c;
  for (iVar2 = 6; param_1 = param_1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_1;
    piVar3 = piVar3 + 1;
  }
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 0xdbf4);
  }
  FUN_10041ab0(this,(int)this + 0x90,(int)this + 0xd970,local_1c,piVar1);
  return;
}

