/*
 * FUN_1009d652 at 1009d652
 * undefined4 * __thiscall FUN_1009d652(void * this, undefined4 * param_1, int * param_2, undefined4 param_3, byte param_4)
 * Address ranges: 1009d652-1009d6b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1009d652(void *this,undefined4 *param_1,int *param_2,undefined4 param_3,byte param_4)

{
  char cVar1;
  undefined4 *this_00;
  
  this_00 = FUN_1008fa89(*(int *)((int)this + 0x118),0,0,(int)this + -8,param_1,0,0,param_3,param_4,
                         0,0,*(undefined4 *)((int)this + 0x44),0,0);
  if (this_00 != (undefined4 *)0x0) {
    cVar1 = FUN_100123f8(this_00,param_2);
    if (cVar1 == '\0') {
      FUN_1009cfe8(this_00);
      FUN_100cfd6c(this_00);
      this_00 = (undefined4 *)0x0;
    }
    else {
      LOCK();
      this_00[0x1e] = this_00[0x1e] + 1;
      UNLOCK();
    }
  }
  return this_00;
}

