/*
 * FUN_100c284c at 100c284c
 * undefined __thiscall FUN_100c284c(void * this, int param_1)
 * Address ranges: 100c284c-100c28a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c284c(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = param_1 * 0x20;
  iVar2 = *(int *)((int)this + 8);
  piVar3 = *(int **)(iVar5 + 0x10 + iVar2);
  if (piVar3 != (int *)0x0) {
    uVar6 = (**(code **)(*piVar3 + 0x20))(piVar3);
    uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
    uVar1 = *(uint *)(iVar5 + 0x1c + iVar2);
    if ((uVar4 <= uVar1) && ((uVar4 < uVar1 || ((uint)uVar6 < *(uint *)(iVar5 + 0x18 + iVar2))))) {
      iVar2 = *(int *)((int)this + 8);
      piVar3 = *(int **)(iVar5 + 0x10 + iVar2);
      (**(code **)(*piVar3 + 0x24))
                (piVar3,*(undefined4 *)(iVar5 + 0x18 + iVar2),*(undefined4 *)(iVar5 + 0x1c + iVar2),
                 *(undefined4 *)((int)this + 0x20));
      WaitForSingleObject(*(HANDLE *)((int)this + 0x20),0xffffffff);
    }
  }
  return;
}

