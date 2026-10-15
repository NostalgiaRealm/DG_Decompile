/*
 * FUN_1000c809 at 1000c809
 * undefined4 * __thiscall FUN_1000c809(void * this, undefined4 * param_1)
 * Address ranges: 1000c809-1000c843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000c809(void *this,undefined4 *param_1)

{
  FUN_1000c6f4((int)this);
  (**(code **)(*(int *)this + 0x1c))();
  FUN_1000c19b(this,'\x01');
  FUN_1000e132(this,param_1);
  FUN_1000c145(this);
  FUN_1000c7aa((int)this);
  return param_1;
}

