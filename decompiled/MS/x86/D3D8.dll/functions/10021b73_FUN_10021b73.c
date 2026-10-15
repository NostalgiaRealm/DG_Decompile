/*
 * FUN_10021b73 at 10021b73
 * byte __thiscall FUN_10021b73(void * this, int * param_1, undefined4 param_2)
 * Address ranges: 10021b73-10021c0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_10021b73(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  
  piVar1 = param_1;
  uVar3 = (**(code **)(*param_1 + 0x28))(&DAT_100af2c0);
  uVar6 = 0;
  while( true ) {
    if (uVar3 <= uVar6) {
      uVar3 = 0;
      bVar5 = 1;
      while( true ) {
        if (*(uint *)((int)this + 4) <= uVar3) {
          return bVar5;
        }
        bVar2 = (**(code **)**(undefined4 **)(*(int *)this + uVar3 * 4))(param_2);
        bVar5 = bVar5 & bVar2;
        if (bVar5 == 0) break;
        uVar3 = uVar3 + 1;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        (**(code **)(**(int **)(*(int *)this + -4 + uVar3 * 4) + 4))(param_2);
      }
      thunk_FUN_100ad48c(*(LPVOID *)this);
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return 0;
    }
    param_1 = (int *)(**(code **)(*piVar1 + 0x2c))(&DAT_100af2c0,uVar6);
    if ((param_1 == (int *)0x0) || (uVar4 = FUN_10003787(this,&param_1), (char)uVar4 == '\0'))
    break;
    uVar6 = uVar6 + 1;
  }
  return 0;
}

