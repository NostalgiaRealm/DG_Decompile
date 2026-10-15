/*
 * FUN_10078150 at 10078150
 * undefined __thiscall FUN_10078150(void * this, int * param_1, int * param_2, int * param_3, int * param_4, uint param_5)
 * Address ranges: 10078150-100781af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10078150(void *this,int *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  char cVar1;
  
  if (param_5 < 0xe) {
    cVar1 = *(char *)((int)this + param_5 * 4 + 0x3d);
    *param_1 = ((int)*(char *)((int)this + param_5 * 4 + 0x3c) << 10 | 0x98U) + (int)this;
    *param_2 = ((int)cVar1 << 10 | 0x98U) + (int)this;
    *param_3 = ((int)*(char *)((int)this + param_5 * 4 + 0x3e) << 10 | 0x98U) + (int)this;
    *param_4 = ((int)*(char *)((int)this + param_5 * 4 + 0x3f) << 10 | 0x98U) + (int)this;
  }
  return;
}

