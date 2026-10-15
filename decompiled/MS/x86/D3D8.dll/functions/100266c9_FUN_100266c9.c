/*
 * FUN_100266c9 at 100266c9
 * int __thiscall FUN_100266c9(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 100266c9-1002673d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100266c9(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(uint *)((int)this + 0x34) >> 5 & 1) == 0) {
    cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x14))
                      (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
    if (cVar1 != '\0') {
      bVar2 = FUN_100268b5((int)this);
      iVar3 = (uint)(bVar2 ^ 1) * 2;
      (**(code **)(**(int **)((int)this + 0x50) + 0x18))
                (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
    }
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    iVar3 = FUN_100265cc(this,param_1,param_2,param_3,param_4);
  }
  return iVar3;
}

