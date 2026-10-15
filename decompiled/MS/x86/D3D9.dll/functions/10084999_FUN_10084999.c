/*
 * FUN_10084999 at 10084999
 * undefined4 __thiscall FUN_10084999(void * this, int param_1, int param_2)
 * Address ranges: 10084999-10084a3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10084999(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  LONG local_18 [3];
  uint local_c;
  
  uVar1 = FUN_10084116((void *)((int)this + -0xc0),param_1,param_2);
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = FUN_1008f54a((void *)((int)this + -0xc0),*(uint *)((int)this + -0xac),(byte)param_1)
  ;
  local_c = FUN_1008f57f((void *)((int)this + -0xc0),*(uint *)((int)this + -0xa8),(byte)param_1);
  (**(code **)(*(int *)((int)this + -0xc0) + 0xc))
            (*(int *)((int)this + -0x94) * param_2 + param_1,local_18);
  FUN_100823d8((void *)((int)this + -0xc0),(int)this + -0x78,(int)this + -0x3c,extraout_ECX,
               extraout_ECX,param_1,param_2,(RECT *)&stack0xffffffe0);
  return uVar1;
}

