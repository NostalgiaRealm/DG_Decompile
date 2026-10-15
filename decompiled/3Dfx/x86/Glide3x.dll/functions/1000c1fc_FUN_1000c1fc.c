/*
 * FUN_1000c1fc at 1000c1fc
 * undefined4 * __thiscall FUN_1000c1fc(void * this, undefined4 param_1)
 * Address ranges: 1000c1fc-1000c2e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000c1fc(void *this,undefined4 param_1)

{
  FUN_1000d655(this,param_1,(void *)((int)this + 0x3438),(void *)((int)this + 0x3d10),
               (int)this + 0x3f54,(int)this + 0x6ff8,(int)this + 0xa09c);
  *(undefined ***)this = &PTR_FUN_1005584c;
  *(undefined ***)((int)this + 0x29d4) = &PTR_FUN_10055848;
  *(undefined4 *)((int)this + 0x3300) = 0;
  *(undefined4 *)((int)this + 0x3304) = param_1;
  FUN_1001ca6e((void *)((int)this + 0x3438),this);
  FUN_1001f15d((void *)((int)this + 0x3d10),(int)this);
  FUN_1001bf50((void *)((int)this + 0x3f54),this,(int)this + 0x2d70,0);
  FUN_1001bf50((void *)((int)this + 0x6ff8),this,(int)this + 0x2f10,1);
  FUN_1001bf50((void *)((int)this + 0xa09c),this,(int)this + 0x30b0,2);
  *(void **)((int)this + 0xd140) = (void *)((int)this + 0x3f54);
  *(void **)((int)this + 0xd144) = (void *)((int)this + 0x6ff8);
  *(void **)((int)this + 0xd148) = (void *)((int)this + 0xa09c);
  FUN_10052de1((int *)((int)this + 0x3338),0,0x100);
  return this;
}

