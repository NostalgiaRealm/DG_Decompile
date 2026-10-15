/*
 * FUN_1002cad2 at 1002cad2
 * undefined __thiscall FUN_1002cad2(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, char param_6)
 * Address ranges: 1002cad2-1002cb27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002cad2(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2c90) = param_1;
  *(int *)((int)this + 0x2c94) = param_2;
  *(int *)((int)this + 0x2c98) = param_3;
  *(int *)((int)this + 0x2c9c) = param_4;
  *(int *)((int)this + 0x2ca0) = param_5;
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(uint *)((int)this + 0x2c40) = (param_6 == '\0') - 1;
  return;
}

