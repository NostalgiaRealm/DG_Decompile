/*
 * FUN_1009ecf3 at 1009ecf3
 * undefined4 __thiscall FUN_1009ecf3(void * this, int param_1, undefined4 * param_2, undefined1 param_3)
 * Address ranges: 1009ecf3-1009edc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1009ecf3(void *this,int param_1,undefined4 *param_2,undefined1 param_3)

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
  this_00 = (undefined4 *)FUN_100cfd55(0xa0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00[0x25] = 0;
    this_00[0x26] = 0;
    this_00[0x27] = this_00 + 0x24;
    FUN_10014fef(this_00,-(uint)(iVar3 != 0) & iVar3 - 0x66b4U,this,param_2,param_1,uVar4,uVar1,
                 param_3,iVar2 == 0x14);
    this_00[0x24] = &PTR_FUN_100d7270;
    *this_00 = &PTR_LAB_100d4cec;
    this_00[0x13] = &PTR_LAB_100d4ce8;
  }
  *(undefined4 **)((int)this + param_1 * 4 + 0x38) = this_00;
  if (this_00 != (undefined4 *)0x0) {
    bVar5 = FUN_1009e9ac(this_00);
    param_1 = CONCAT31(extraout_var,bVar5);
    if (bVar5) {
      LOCK();
      this_00[0x26] = this_00[0x26] + 1;
      UNLOCK();
      return CONCAT31(extraout_var,1);
    }
  }
  return param_1 & 0xffffff00;
}

