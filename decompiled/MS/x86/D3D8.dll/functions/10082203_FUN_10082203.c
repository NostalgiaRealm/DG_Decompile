/*
 * FUN_10082203 at 10082203
 * undefined4 __thiscall FUN_10082203(void * this, int param_1, undefined4 * param_2, undefined1 param_3)
 * Address ranges: 10082203-100822d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10082203(void *this,int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 *this_00;
  undefined3 extraout_var;
  
  iVar2 = *(int *)((int)this + 0xa8);
  iVar3 = *(int *)((int)this + 0x14);
  uVar1 = *(undefined1 *)((int)this + 0xb8);
  uVar4 = *(undefined4 *)((int)this + 0xac);
  this_00 = (undefined4 *)FUN_100ad475(0xa4);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    this_00[0x28] = this_00 + 0x25;
    FUN_100110d5(this_00,-(uint)(iVar3 != 0) & iVar3 - 0x58e0U,this,param_2,param_1,uVar4,uVar1,
                 param_3,iVar2 == 0x14);
    this_00[0x25] = &PTR_FUN_100b38ac;
    *this_00 = &PTR_LAB_100b1850;
    this_00[0x13] = &PTR_LAB_100b184c;
  }
  *(undefined4 **)((int)this + param_1 * 4 + 0x38) = this_00;
  if (this_00 != (undefined4 *)0x0) {
    bVar5 = FUN_10081ebc(this_00);
    param_1 = CONCAT31(extraout_var,bVar5);
    if (bVar5) {
      LOCK();
      this_00[0x27] = this_00[0x27] + 1;
      UNLOCK();
      return CONCAT31(extraout_var,1);
    }
  }
  return param_1 & 0xffffff00;
}

