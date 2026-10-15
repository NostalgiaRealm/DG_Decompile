/*
 * FUN_10026dbb at 10026dbb
 * undefined __thiscall FUN_10026dbb(void * this, int param_1, int param_2)
 * Address ranges: 10026dbb-10026ee5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10026dbb(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_10 [12];
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar3 = *(int *)(iVar1 + 0x38);
  iVar4 = *(int *)(iVar1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x34);
  piVar5 = *(int **)(*(int *)((int)this + 0x3018) + 0x31b4);
  puVar6 = (uint *)(**(code **)(*piVar5 + 0x28))(piVar5,local_10);
  uVar7 = *(int *)(*(int *)((int)this + 0x3018) + 0x3190) *
          ((-(uint)(iVar2 != 1) & 0xfffffffe) + 2 | -(uint)(iVar3 != 0) & 8 | (uint)(iVar4 == 1) |
          -(uint)(iVar1 != 0) & 4);
  FUN_1003db27(*(int *)(*(int *)(*(int *)((int)this + 0x3018) + 0x3188) + 0x1304),8,uVar7 + *puVar6,
               puVar6[1] + (uint)CARRY4(uVar7,*puVar6));
  lVar8 = (**(code **)(**(int **)((int)this + 0x3020) + 0x2c))(*(int **)((int)this + 0x3020));
  lVar8 = lVar8 + (ulonglong)(uint)(*(int *)((int)this + 0x301c) * param_1);
  FUN_1003db79(*(int *)(*(int *)(*(int *)((int)this + 0x3018) + 0x3188) + 0x1304),
               *(int *)((int)this + 0xc) + 9,(int)lVar8,(int)((ulonglong)lVar8 >> 0x20));
  lVar8 = (**(code **)(**(int **)((int)this + 0x3020) + 0x2c))(*(int **)((int)this + 0x3020));
  lVar8 = lVar8 + (ulonglong)(uint)(*(int *)((int)this + 0x301c) * param_2);
  FUN_1003db79(*(int *)(*(int *)(*(int *)((int)this + 0x3018) + 0x3188) + 0x1304),
               *(int *)((int)this + 0xc) + 0xc,(int)lVar8,(int)((ulonglong)lVar8 >> 0x20));
  FUN_1003d4be(*(void **)(*(int *)(*(int *)((int)this + 0x3018) + 0x3188) + 0x1304),
               *(uint *)((int)this + 0x3020),0,1,0x80);
  return;
}

