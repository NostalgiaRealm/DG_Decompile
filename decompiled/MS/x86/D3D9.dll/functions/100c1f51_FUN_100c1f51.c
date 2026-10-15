/*
 * FUN_100c1f51 at 100c1f51
 * undefined4 __thiscall FUN_100c1f51(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100c1f51-100c1fb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100c1f51(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)((int)this + 0x2c) = pvVar2;
  uVar4 = 0;
  if (pvVar2 != (HANDLE)0x0) {
    *(undefined4 *)((int)this + 0x20) = param_4;
    *(int *)((int)this + 4) = param_1;
    *(int *)((int)this + 8) = param_2;
    *(undefined4 *)((int)this + 0x1c) = param_3;
    piVar1 = *(int **)(param_2 * 0x18 + param_1);
    uVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,param_3);
    *(undefined4 *)((int)this + 0x28) = uVar3;
    uVar3 = FUN_100c1ea4((int)this);
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar4 = CloseHandle(*(HANDLE *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  return uVar4 & 0xffffff00;
}

