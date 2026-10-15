/*
 * FUN_1004ca4a at 1004ca4a
 * undefined4 __thiscall FUN_1004ca4a(void * this, int * param_1)
 * Address ranges: 1004ca4a-1004ca80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004ca4a(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0x80070057;
  if (((param_1 != (int *)0x0) && (*param_1 == 0x2c)) &&
     (uVar1 = 0x88760305, *(char *)((int)this + 0xd0) != '\0')) {
    uVar1 = 0;
    piVar3 = (int *)((int)this + 0xa4);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *piVar3;
      piVar3 = piVar3 + 1;
      param_1 = param_1 + 1;
    }
  }
  return uVar1;
}

