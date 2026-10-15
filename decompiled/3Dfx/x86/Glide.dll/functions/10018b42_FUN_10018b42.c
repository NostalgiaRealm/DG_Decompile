/*
 * FUN_10018b42 at 10018b42
 * undefined4 * __thiscall FUN_10018b42(void * this, undefined4 param_1)
 * Address ranges: 10018b42-10018c82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10018b42(void *this,undefined4 param_1)

{
  undefined4 *this_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  this_00 = (undefined4 *)((int)this + 0x3780);
  FUN_1001d5be(this,param_1,(void *)((int)this + 0x32b8),this_00,(int)this + 0x3810,
               (int)this + 0x68b4,(int)this + 0x9958);
  *(undefined ***)this = &PTR_FUN_100537c8;
  *(undefined ***)((int)this + 0x2958) = &PTR_FUN_100537c4;
  *(undefined4 *)((int)this + 0x3180) = 0;
  *(undefined4 *)((int)this + 0x3184) = param_1;
  FUN_10029305((void *)((int)this + 0x32b8),this);
  FUN_1002ca3d(this_00,this);
  *this_00 = &PTR_FUN_10053de8;
  *(undefined4 *)((int)this + 0x37bc) = extraout_EDX;
  *(undefined4 *)((int)this + 0x37e0) = 0;
  *(undefined1 *)((int)this + 0x37e4) = 0;
  *(undefined4 *)((int)this + 0x37e8) = 0;
  *(undefined4 *)((int)this + 0x37ec) = 0;
  *(undefined4 *)((int)this + 0x37f0) = 0;
  uVar1 = FUN_1004f9d3(0xc000);
  *(undefined4 *)((int)this + 0x37f4) = uVar1;
  *(undefined4 *)((int)this + 0x37f8) = 0x400;
  *(undefined4 *)((int)this + 0x37fc) = 0;
  *(undefined4 **)((int)this + 0x3800) = (undefined4 *)((int)this + 0x37f0);
  *(undefined4 *)((int)this + 0x3804) = 0;
  *(undefined4 *)((int)this + 0x3808) = 0;
  *(undefined4 *)((int)this + 0x380c) = 0;
  FUN_100272b7((int)this_00);
  FUN_100289ff((void *)((int)this + 0x3810),this,(int)this + 0x2cd0,extraout_EDX_00);
  FUN_100289ff((void *)((int)this + 0x68b4),this,(int)this + 0x2e50,1);
  FUN_100289ff((void *)((int)this + 0x9958),this,(int)this + 0x2fd0,2);
  *(void **)((int)this + 0xc9fc) = (void *)((int)this + 0x3810);
  *(void **)((int)this + 0xca00) = (void *)((int)this + 0x68b4);
  *(void **)((int)this + 0xca04) = (void *)((int)this + 0x9958);
  FUN_10050561((int *)((int)this + 0x31b8),0,0x100);
  return this;
}

