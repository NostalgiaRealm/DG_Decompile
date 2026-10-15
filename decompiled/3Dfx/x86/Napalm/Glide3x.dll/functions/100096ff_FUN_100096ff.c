/*
 * FUN_100096ff at 100096ff
 * uint * __thiscall FUN_100096ff(void * this, uint * param_1, int param_2, int param_3)
 * Address ranges: 100096ff-10009745
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_100096ff(void *this,uint *param_1,int param_2,int param_3)

{
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  
  local_10 = *(uint *)((int)this + 0x98);
  local_c = *(undefined4 *)((int)this + 0x9c);
  local_18 = *(uint *)((int)this + param_2 * 8 + 0x14);
  local_14 = *(undefined4 *)((int)this + param_2 * 8 + 0x18);
  FUN_1003c684((void *)((int)this + 4),param_1,&local_18,&local_10,this,param_3);
  return param_1;
}

