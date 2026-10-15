/*
 * FUN_1002a330 at 1002a330
 * int __thiscall FUN_1002a330(void * this, int param_1)
 * Address ranges: 1002a330-1002a3a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002a330(void *this,int param_1)

{
  int *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  this_00 = (int *)((int)this + 0x2c);
  if ((*(char *)((int)this + 0x33) == '\0') && (iVar2 = FUN_1002356c(this_00,param_1), iVar2 != 0))
  {
    piVar1 = *(int **)(iVar2 + 0x10);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar3 = iVar3 + -1;
    FUN_10022ecc(this_00);
    if ((iVar3 == 0) && (*(char *)((int)this + 0x32) == '\0')) {
      FUN_1002a017(iVar2,*(undefined4 **)(iVar2 + 0x18));
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    iVar2 = FUN_10023519((int)this_00);
    if (iVar2 == 0) {
      *(undefined1 *)((int)this + 0x33) = 1;
    }
    *this_00 = 0;
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x2c))(0,0);
    }
  }
  return iVar3;
}

