/*
 * FUN_10020708 at 10020708
 * undefined __thiscall FUN_10020708(void * this, int param_1, byte param_2, undefined1 param_3)
 * Address ranges: 10020708-10020763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020708(void *this,int param_1,byte param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  *(undefined1 *)((int)this + 0x2da8) = 1;
  uVar1 = *(undefined4 *)(&DAT_10057a58 + param_1 * 4);
  *(undefined4 *)((int)this + 0x2d34) = uVar1;
  *(undefined4 *)((int)this + 0x2c50) = uVar1;
  *(undefined4 *)((int)this + 0x2c40) = uVar1;
  *(uint *)((int)this + 0x2c54) = (uint)param_2;
  *(undefined1 *)((int)this + 0x2d24) = param_3;
  *(undefined1 *)((int)this + 0x2c30) = param_3;
  return;
}

