/*
 * FUN_1006c8a8 at 1006c8a8
 * bool __thiscall FUN_1006c8a8(void * this, int param_1, int param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * Address ranges: 1006c8a8-1006c9c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1006c8a8(void *this,int param_1,int param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_EDX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *local_c;
  void *local_8;
  
  if (*(int *)((int)this + 0x98) != 0) {
    iVar7 = *(int *)((int)this + 0x2c) * param_2 + param_1;
    local_c = this;
    local_8 = this;
    cVar1 = FUN_1006c7d3((int)this);
    if (cVar1 == '\0') {
      iVar7 = iVar7 * 0x20;
      local_c = *(void **)(extraout_EDX + iVar7);
      local_8 = (void *)(*(int *)(extraout_EDX + 4 + iVar7) + *(int *)(extraout_EDX + iVar7));
      param_1 = 0;
      iVar4 = (**(code **)(**(int **)((int)this + 0x90) + 0x20))
                        (*(int **)((int)this + 0x90),0,&local_c,&param_1);
      if (-1 < iVar4) {
        *param_3 = *(int *)(*(int *)((int)this + 0x98) + iVar7) + param_1;
        *param_4 = *(undefined4 *)(*(int *)((int)this + 0x98) + 8 + iVar7);
      }
    }
    else {
      uVar6 = *(uint *)(&DAT_100b04f0 + *(int *)((int)this + 0x1c) * 4);
      if (*(uint *)(&DAT_100b04f0 + *(int *)((int)this + 0x1c) * 4) == 0x18) {
        uVar6 = 0x20;
      }
      iVar7 = iVar7 * 0x20;
      if (*(int *)(extraout_EDX + iVar7) == 0) {
        uVar2 = *(uint *)((int)this + 0x14) >> ((byte)param_1 & 0x1f);
        uVar5 = *(uint *)((int)this + 0x18) >> ((byte)param_1 & 0x1f);
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        *(uint *)(*(int *)((int)this + 0x98) + 4 + iVar7) = uVar2 * uVar6 >> 3;
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        uVar3 = FUN_100ad4a9(uVar5 * *(int *)(*(int *)((int)this + 0x98) + 4 + iVar7));
        *(undefined4 *)(iVar7 + *(int *)((int)this + 0x98)) = uVar3;
      }
      *param_3 = *(int *)(iVar7 + *(int *)((int)this + 0x98));
      *param_4 = *(undefined4 *)(*(int *)((int)this + 0x98) + 4 + iVar7);
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar6 >> 3;
      }
    }
  }
  return *param_3 != 0;
}

