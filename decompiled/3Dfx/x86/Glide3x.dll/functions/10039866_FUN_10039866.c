/*
 * FUN_10039866 at 10039866
 * undefined4 __thiscall FUN_10039866(void * this, int param_1)
 * Address ranges: 10039866-100398fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10039866(void *this,int param_1)

{
  WNDPROC pWVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pWVar1 = FUN_10044d93(*(undefined4 *)((int)this + 4),&PTR_s_DGD3D11ROOT_1005b464,0);
  *(WNDPROC *)((int)this + 0x3a8) = pWVar1;
  if (pWVar1 == (WNDPROC)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x8e);
    if (*(char *)(param_1 + 0x22) == '\0') {
      uVar2 = 0;
      uVar4 = 1;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x92);
      uVar4 = *(undefined4 *)(param_1 + 0x96);
    }
    *(undefined4 *)(pWVar1 + 0x4d0) = *(undefined4 *)(param_1 + 0x8a);
    *(undefined4 *)(pWVar1 + 0x4d4) = uVar3;
    *(undefined4 *)(pWVar1 + 0x4d8) = uVar2;
    *(undefined4 *)(pWVar1 + 0x4dc) = uVar4;
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)((int)this + 0x3a0);
    *(int *)((int)this + 8) = *(int *)((int)this + 0x3a8);
    *(undefined4 *)(*(int *)((int)this + 0x3a8) + 0x4e0) = uVar3;
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),*(int *)((int)this + 8) != 0);
  }
  return uVar3;
}

