/*
 * FUN_10082a54 at 10082a54
 * bool __thiscall FUN_10082a54(void * this, int param_1, int param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * Address ranges: 10082a54-10082b75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10082a54(void *this,int param_1,int param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_EDX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *local_c;
  void *local_8;
  
  if (*(int *)((int)this + 0x98) != 0) {
    iVar6 = *(int *)((int)this + 0x2c) * param_2 + param_1;
    local_c = this;
    local_8 = this;
    iVar1 = FUN_10082974((int)this);
    if ((char)iVar1 == '\0') {
      iVar6 = iVar6 * 0x20;
      local_c = *(void **)(extraout_EDX + iVar6);
      local_8 = (void *)(*(int *)(extraout_EDX + 4 + iVar6) + *(int *)(extraout_EDX + iVar6));
      param_1 = 0;
      iVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x20))
                        (*(int **)((int)this + 0x90),0,&local_c,&param_1);
      if (-1 < iVar1) {
        *param_3 = *(int *)(*(int *)((int)this + 0x98) + iVar6) + param_1;
        *param_4 = *(undefined4 *)(*(int *)((int)this + 0x98) + 8 + iVar6);
      }
    }
    else {
      uVar5 = *(uint *)(&DAT_100d2658 + *(int *)((int)this + 0x1c) * 4);
      if (*(uint *)(&DAT_100d2658 + *(int *)((int)this + 0x1c) * 4) == 0x18) {
        uVar5 = 0x20;
      }
      iVar6 = iVar6 * 0x20;
      if (*(int *)(extraout_EDX + iVar6) == 0) {
        uVar2 = *(uint *)((int)this + 0x14) >> ((byte)param_1 & 0x1f);
        uVar4 = *(uint *)((int)this + 0x18) >> ((byte)param_1 & 0x1f);
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        *(uint *)(*(int *)((int)this + 0x98) + 4 + iVar6) = uVar2 * uVar5 >> 3;
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        uVar3 = FUN_100cfd89(uVar4 * *(int *)(*(int *)((int)this + 0x98) + 4 + iVar6));
        *(undefined4 *)(iVar6 + *(int *)((int)this + 0x98)) = uVar3;
      }
      *param_3 = *(int *)(iVar6 + *(int *)((int)this + 0x98));
      *param_4 = *(undefined4 *)(*(int *)((int)this + 0x98) + 4 + iVar6);
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar5 >> 3;
      }
    }
  }
  return *param_3 != 0;
}

