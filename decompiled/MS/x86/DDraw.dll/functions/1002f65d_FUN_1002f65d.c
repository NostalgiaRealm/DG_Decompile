/*
 * FUN_1002f65d at 1002f65d
 * undefined4 __thiscall FUN_1002f65d(void * this, int param_1)
 * Address ranges: 1002f65d-1002f745
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002f65d(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  char extraout_AL;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_18 [3];
  undefined4 local_c;
  
  uVar5 = 0;
  this_00 = this;
  for (iVar1 = param_1; (this_00 != (void *)0x0 && (iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x110)) {
    FUN_1002c788(this_00,iVar1);
    this_00 = *(void **)((int)this_00 + 0x110);
    uVar5 = uVar5 + 1;
  }
  uVar4 = 1;
  if (((*(uint *)((int)this + 0x154) & 0x20000) != 0) &&
     (uVar4 = uVar5, *(uint *)((int)this + 0x168) <= uVar5)) {
    uVar4 = *(uint *)((int)this + 0x168);
  }
  local_18[2] = *(undefined4 *)((int)this + 0x15c);
  local_c = *(undefined4 *)((int)this + 0x158);
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_1002f407(this,param_1,uVar4,local_18,(RECT *)local_18);
  do {
    FUN_1002c7ef(this,'\x01');
    (**(code **)(**(int **)((int)this + 0xfc) + 0x34))();
    uVar3 = extraout_var;
    if (((extraout_AL == '\0') &&
        (cVar2 = FUN_10032177((int)this + 0x150), uVar3 = extraout_var_00, cVar2 == '\0')) &&
       ((*(uint *)((int)this + 0x1b8) & 0x4000000) != 0)) {
      *(uint *)((int)this + 0x1b8) = *(uint *)((int)this + 0x1b8) & 0xfffff7ff | 0x10004000;
    }
    this = *(void **)((int)this + 0x110);
  } while (this != (void *)0x0);
  return CONCAT31(uVar3,1);
}

