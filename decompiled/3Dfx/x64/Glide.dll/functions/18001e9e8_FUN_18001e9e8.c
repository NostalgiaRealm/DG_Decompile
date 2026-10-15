/*
 * FUN_18001e9e8 at 18001e9e8
 * undefined __fastcall FUN_18001e9e8(longlong param_1, int * param_2, int * param_3)
 * Address ranges: 18001e9e8-18001ea70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e9e8(longlong param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x8c2) & 4) == 0) {
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
      uVar1 = iVar2 - 1;
    }
    *param_2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20 + (ulonglong)uVar1 * 8);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24 + (ulonglong)uVar1 * 8);
  }
  *param_3 = iVar2;
  return;
}

