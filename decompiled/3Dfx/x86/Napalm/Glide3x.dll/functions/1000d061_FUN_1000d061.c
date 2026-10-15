/*
 * FUN_1000d061 at 1000d061
 * undefined4 * __thiscall FUN_1000d061(void * this, undefined4 * param_1)
 * Address ranges: 1000d061-1000d09b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000d061(void *this,undefined4 *param_1)

{
  FUN_1000cf4c((int)this);
  (**(code **)(*(int *)this + 0x18))();
  FUN_1000c9fc(this,'\x01');
  FUN_1000f3ec(this,param_1);
  FUN_1000c9a6(this);
  FUN_1000d002((int)this);
  return param_1;
}

