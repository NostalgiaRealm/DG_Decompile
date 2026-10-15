/*
 * FUN_100813cf at 100813cf
 * undefined4 * __thiscall FUN_100813cf(void * this, undefined4 * param_1, int * param_2, undefined4 param_3, byte param_4)
 * Address ranges: 100813cf-10081431
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100813cf(void *this,undefined4 *param_1,int *param_2,undefined4 param_3,byte param_4)

{
  char cVar1;
  undefined4 *this_00;
  
  this_00 = FUN_10079657(*(int *)((int)this + 0xe4),0,0,(int)this + -8,param_1,0,0,param_3,param_4,0
                         ,0,*(undefined4 *)((int)this + 0x44),0,0);
  if (this_00 != (undefined4 *)0x0) {
    cVar1 = FUN_1000e66f(this_00,param_2);
    if (cVar1 == '\0') {
      FUN_1008108b(this_00);
      FUN_100ad48c(this_00);
      this_00 = (undefined4 *)0x0;
    }
    else {
      LOCK();
      this_00[0x19] = this_00[0x19] + 1;
      UNLOCK();
    }
  }
  return this_00;
}

