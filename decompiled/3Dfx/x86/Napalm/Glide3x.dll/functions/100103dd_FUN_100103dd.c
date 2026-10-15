/*
 * FUN_100103dd at 100103dd
 * undefined __thiscall FUN_100103dd(void * this, byte param_1, byte param_2)
 * Address ranges: 100103dd-1001042a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100103dd(void *this,byte param_1,byte param_2)

{
  FUN_10010137(this,param_1,param_2,*(char *)((int)this + 0x2b88),*(char *)((int)this + 0x2b89),
               *(char *)((int)this + 0x2b8a),*(char *)((int)this + 0x2b8b));
  *(uint *)((int)this + 0x2b2c) = (uint)param_1;
  *(uint *)((int)this + 0x2b30) = (uint)param_2;
  return;
}

