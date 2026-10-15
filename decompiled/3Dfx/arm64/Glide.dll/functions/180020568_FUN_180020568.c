/*
 * FUN_180020568 at 180020568
 * undefined __cdecl FUN_180020568(longlong param_1, int * param_2, int * param_3)
 * Address ranges: 180020568-18002056f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020568(longlong param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x28) + 0x8c2) >> 2 & 1) == 0) {
    *param_2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xb8) *
               *(int *)(*(longlong *)(param_1 + 0x10) + 0xb0);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xbc) *
            *(int *)(*(longlong *)(param_1 + 0x10) + 0xb4);
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x808);
    if (iVar2 == 0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))();
    }
    else {
      uVar1 = (ulonglong)(iVar2 - 1);
    }
    *param_2 = *(int *)(*(longlong *)(param_1 + 0x10) + (uVar1 & 0xffffffff) * 8 + 0x20);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + (uVar1 & 0xffffffff) * 8 + 0x24);
  }
  *param_3 = iVar2;
  return;
}

