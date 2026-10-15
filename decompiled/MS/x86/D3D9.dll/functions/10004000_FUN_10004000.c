/*
 * FUN_10004000 at 10004000
 * int __thiscall FUN_10004000(void * this, uint param_1, int param_2)
 * Address ranges: 10004000-100040a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10004000(void *this,uint param_1,int param_2)

{
  int *this_00;
  LPVOID pvVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  void *local_8;
  
  this_00 = (int *)((int)this + 0xd94);
  local_8 = this;
  thunk_FUN_100cfd6c((LPVOID)*this_00);
  *this_00 = 0;
  uVar4 = 0;
  *(undefined4 *)((int)this + 0xd98) = 0;
  *(undefined4 *)((int)this + 0xd9c) = 0;
  while( true ) {
    if (param_1 <= uVar4) {
      iVar3 = FUN_1000448a(this,param_1,param_2,*this_00,0,1);
      pvVar1 = DAT_100dea74;
      if (-1 < iVar3) {
        *(undefined4 *)((int)this + 0xdec) = (&DAT_100df2f0)[*(int *)((int)this + 0xdf0) * 0x8a];
        iVar3 = *(int *)((int)pvVar1 + 0x308);
        *(int *)((int)pvVar1 + 0x308) = iVar3 + 1;
        if (iVar3 == 0) {
          FUN_100ccbc8(pvVar1);
        }
        (**(code **)(*(int *)this + 0xc))(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8))
        ;
        iVar3 = 0;
      }
      return iVar3;
    }
    local_8 = (void *)0x0;
    uVar2 = FUN_10003d8f(this_00,&local_8);
    if ((char)uVar2 == '\0') break;
    uVar4 = uVar4 + 1;
  }
  return -0x7fffbffb;
}

