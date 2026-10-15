/*
 * FUN_10077455 at 10077455
 * undefined __thiscall FUN_10077455(void * this, int * param_1, int * param_2)
 * Address ranges: 10077455-10077484
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10077455(void *this,int *param_1,int *param_2)

{
  FUN_1007740a(this,1,1);
  *(int **)((int)this + 0xc) = param_1;
  **(undefined4 **)((int)this + 0x18) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*param_1 + 4))(param_1);
  return;
}

