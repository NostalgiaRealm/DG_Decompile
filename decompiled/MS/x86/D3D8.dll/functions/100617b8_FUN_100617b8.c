/*
 * FUN_100617b8 at 100617b8
 * undefined __thiscall FUN_100617b8(void * this, int * param_1, int * param_2)
 * Address ranges: 100617b8-100617e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100617b8(void *this,int *param_1,int *param_2)

{
  FUN_1006176d(this,1,1);
  *(int **)((int)this + 0xc) = param_1;
  **(undefined4 **)((int)this + 0x18) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*param_1 + 4))(param_1);
  return;
}

