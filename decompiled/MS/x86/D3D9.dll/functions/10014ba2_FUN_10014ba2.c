/*
 * FUN_10014ba2 at 10014ba2
 * undefined1 __thiscall FUN_10014ba2(void * this, int param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 10014ba2-10014c80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10014ba2(void *this,int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_5;
  
  local_5 = 0;
  if (*(int **)((int)this + 0x48) != (int *)0x0) {
    param_2 = param_2 * param_4;
    uVar4 = param_1 * param_4 + param_3;
    uVar2 = param_2 + uVar4;
    if ((uVar4 < *(uint *)((int)this + 0x10)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
      uVar1 = *(uint *)((int)this + 0x4c);
      if (((uVar4 < uVar1) && (uVar2 <= uVar1)) ||
         ((*(uint *)((int)this + 0x50) <= uVar4 && (*(uint *)((int)this + 0x50) < uVar2)))) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
      param_4 = 0;
      if (uVar1 != *(uint *)((int)this + 0x50)) {
        param_4 = iVar3;
      }
      param_1 = 0;
      iVar3 = (**(code **)(**(int **)((int)this + 0x48) + 0xc))((byte)param_4 ^ 1,1,&param_1);
      if (iVar3 == 0) {
        FUN_100cff00((undefined4 *)(param_1 + uVar4),(undefined4 *)(*(int *)((int)this + 4) + uVar4)
                     ,param_2);
        (**(code **)(**(int **)((int)this + 0x48) + 0x10))();
        local_5 = 1;
        if ((char)param_4 == '\0') {
          *(uint *)((int)this + 0x4c) = uVar4;
        }
        else if (uVar4 < *(uint *)((int)this + 0x4c)) {
          *(uint *)((int)this + 0x4c) = uVar4;
          return 1;
        }
        *(uint *)((int)this + 0x50) = param_2 + uVar4;
      }
      else {
        local_5 = 0;
      }
    }
  }
  return local_5;
}

