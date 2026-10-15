/*
 * FUN_10009fe4 at 10009fe4
 * undefined __thiscall FUN_10009fe4(void * this, int param_1, int param_2)
 * Address ranges: 10009fe4-1000a035
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_10009fe4(void *this,int param_1,int param_2)

{
  int *piVar1;
  int local_1004 [1023];
  undefined4 uStack_8;
  
  uStack_8 = 0x10009ff1;
  FUN_1002045f(param_2,local_1004);
  piVar1 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
  (**(code **)(*piVar1 + 0xc0))
            (piVar1,*(undefined4 *)((int)this + param_1 * 4 + 0xcfdc),0,0,local_1004,0x400,0x400);
  return;
}

