/*
 * FUN_1000ca5d at 1000ca5d
 * undefined4 * __thiscall FUN_1000ca5d(void * this, undefined4 param_1)
 * Address ranges: 1000ca5d-1000cb49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000ca5d(void *this,undefined4 param_1)

{
  FUN_1000e8e2(this,param_1,(void *)((int)this + 0x37b8),(void *)((int)this + 0x4090),
               (int)this + 0x42d4,(int)this + 0x7388,(int)this + 0xa43c);
  *(undefined ***)this = &PTR_FUN_10058bb0;
  *(undefined ***)((int)this + 0x2b10) = &PTR_FUN_10058bac;
  *(undefined4 *)((int)this + 0x3680) = 0;
  *(undefined4 *)((int)this + 0x3684) = param_1;
  FUN_100212be((void *)((int)this + 0x37b8),this);
  FUN_1001ed0a((void *)((int)this + 0x4090),(int)this);
  FUN_1001e13d((void *)((int)this + 0x42d4),this,(int)this + 12000,0);
  FUN_1001e13d((void *)((int)this + 0x7388),this,(int)this + 0x3130,1);
  FUN_1001e13d((void *)((int)this + 0xa43c),this,(int)this + 0x3380,2);
  *(void **)((int)this + 0xd4f0) = (void *)((int)this + 0x42d4);
  *(void **)((int)this + 0xd4f4) = (void *)((int)this + 0x7388);
  *(void **)((int)this + 0xd4f8) = (void *)((int)this + 0xa43c);
  FUN_100561f1((int *)((int)this + 0x36b8),0,0x100);
  return this;
}

