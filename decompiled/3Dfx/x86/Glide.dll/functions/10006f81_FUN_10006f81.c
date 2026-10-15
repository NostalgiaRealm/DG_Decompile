/*
 * FUN_10006f81 at 10006f81
 * int __thiscall FUN_10006f81(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 10006f81-10007016
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10006f81(void *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  piVar1 = (int *)((int)this + 0x44);
  iVar3 = *(int *)((int)this + 0x4c) + param_2;
  if (*(uint *)((int)this + 0x48) < iVar3 + 1U) {
    puVar2 = (undefined4 *)FUN_1004f9d3(iVar3 * 2 + 2);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100500b0(puVar2,(undefined4 *)*piVar1,*(uint *)((int)this + 0x4c));
      thunk_FUN_1004f9b6((LPVOID)*piVar1);
    }
    *piVar1 = (int)puVar2;
    *(int *)((int)this + 0x48) = iVar3 * 2 + 2;
  }
  if (*piVar1 != 0) {
    FUN_100500b0((undefined4 *)(*(int *)((int)this + 0x4c) + *piVar1),param_1,param_2);
    iVar4 = *(int *)((int)this + 0x4c);
    *(uint *)((int)this + 0x4c) = param_2 + iVar4;
    *(undefined1 *)(param_2 + iVar4 + *piVar1) = 0;
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
  }
  return iVar4;
}

