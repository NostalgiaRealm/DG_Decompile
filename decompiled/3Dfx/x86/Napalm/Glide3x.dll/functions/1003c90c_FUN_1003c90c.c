/*
 * FUN_1003c90c at 1003c90c
 * undefined4 __thiscall FUN_1003c90c(void * this, int param_1, undefined4 param_2)
 * Address ranges: 1003c90c-1003c999
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003c90c(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  WNDPROC pWVar3;
  undefined4 uVar4;
  
  pWVar3 = FUN_1004819c(*(undefined4 *)((int)this + 4),&PTR_s_DGD3D12ROOT_1005f5b8,param_2);
  *(WNDPROC *)((int)this + 0x3a8) = pWVar3;
  if (pWVar3 == (WNDPROC)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x8e);
    uVar1 = *(undefined4 *)(param_1 + 0x96);
    uVar2 = *(undefined4 *)(param_1 + 0x92);
    *(undefined4 *)(pWVar3 + 0x4d0) = *(undefined4 *)(param_1 + 0x8a);
    *(undefined4 *)(pWVar3 + 0x4d4) = uVar4;
    *(undefined4 *)(pWVar3 + 0x4d8) = uVar2;
    *(undefined4 *)(pWVar3 + 0x4dc) = uVar1;
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 4);
    uVar4 = *(undefined4 *)((int)this + 0x3a0);
    *(int *)((int)this + 8) = *(int *)((int)this + 0x3a8);
    *(undefined4 *)(*(int *)((int)this + 0x3a8) + 0x4e0) = uVar4;
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),*(int *)((int)this + 8) != 0);
  }
  return uVar4;
}

