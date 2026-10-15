/*
 * FUN_10092632 at 10092632
 * undefined __thiscall FUN_10092632(void * this, uint param_1, int param_2, uint param_3)
 * Address ranges: 10092632-100926d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10092632(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(&DAT_100d6b2c + param_2 * 4);
  if (iVar1 != -1) {
    if (param_1 < 0x100) {
      if (iVar1 == 5) {
        param_3 = FUN_100179ed(this,param_3);
      }
      else if (iVar1 == 6) {
        param_3 = FUN_100179ed(this,param_3);
      }
      else if (iVar1 == 7) {
        param_3 = FUN_10017a4d(this,param_3);
      }
      else if (iVar1 == 10) {
        uVar2 = *(uint *)(*(int *)((int)this + 0xc) + 0x7dc);
        uVar3 = uVar2 & 0xff;
        if ((uVar3 < 0x11) && (uVar2 != 0)) {
          param_3 = uVar3;
        }
      }
      (**(code **)(**(int **)((int)this + 0x14) + 0x50))(param_1,iVar1,param_3);
    }
    else {
      (**(code **)(**(int **)((int)this + 0x14) + 0xd0))(param_1 - 0x100,iVar1,param_3);
    }
  }
  return;
}

