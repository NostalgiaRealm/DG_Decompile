/*
 * FUN_10041634 at 10041634
 * undefined __thiscall FUN_10041634(void * this, int param_1, uint * param_2)
 * Address ranges: 10041634-100416a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10041634(void *this,int param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x1510;
  uVar1 = *(uint *)((int)this + iVar4 + 0x864);
  if (0xff < uVar1) {
    FUN_10047701((void *)((int)this + iVar4 + 0x85c),
                 (uint *)(*(int *)((int)this + iVar4 + 0x85c) + -0x30 + uVar1 * 0x38));
  }
  iVar3 = FUN_1004785f((void *)((int)this + iVar4 + 0x85c),param_2);
  if (iVar3 != *(int *)(iVar4 + 0x550 + (int)this)) {
    piVar2 = *(int **)(iVar4 + 0x514 + (int)this);
    (**(code **)(*piVar2 + 0xac))(piVar2,iVar3);
    *(int *)(iVar4 + 0x550 + (int)this) = iVar3;
  }
  return;
}

