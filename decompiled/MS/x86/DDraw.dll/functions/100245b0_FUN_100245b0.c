/*
 * FUN_100245b0 at 100245b0
 * HWND __thiscall FUN_100245b0(void * this, char param_1)
 * Address ranges: 100245b0-100246d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND __thiscall FUN_100245b0(void *this,char param_1)

{
  int *piVar1;
  char cVar2;
  HWND pHVar3;
  uint uVar4;
  undefined4 uVar5;
  int *extraout_EDX;
  HWND pHVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  HWND local_c;
  HWND local_8;
  
  local_8 = (HWND)0x0;
  local_c = this;
  if (((((*(int *)((int)this + 0xf4) == 0) ||
        (piVar1 = *(int **)(*(int *)((int)this + 0xf4) + 0x104), piVar1 == (int *)0x0)) ||
       ((*(uint *)((int)this + 0x104) >> 4 & 1) != 0)) ||
      ((**(code **)(*piVar1 + 0x10))(piVar1,&local_8), local_8 == (HWND)0x0)) &&
     (pHVar6 = *(HWND *)((int)this + 0xfc), local_8 = pHVar6, pHVar6 == (HWND)0x0)) {
    local_8 = GetForegroundWindow();
    local_c = pHVar6;
    GetWindowThreadProcessId(local_8,(LPDWORD)&local_c);
    pHVar3 = (HWND)GetCurrentProcessId();
    if (pHVar3 != local_c) {
      local_8 = pHVar6;
    }
  }
  pHVar6 = local_8;
  if (((param_1 != '\0') && (local_8 != (HWND)0x0)) && (local_8 != *(HWND *)((int)this + 0xfc))) {
    uVar4 = FUN_1002779a((void *)((int)this + 0x10c),(int *)&local_8);
    if (uVar4 == 0xffffffff) {
      FUN_1005e343(pHVar6);
      uVar4 = -(uint)(this != (void *)0x0) & (int)this + 0x10U;
      FUN_1005e480(local_8,uVar4,uVar4);
      uVar11 = 0;
      uVar10 = *(undefined4 *)((int)this + 0x18);
      uVar9 = *(undefined4 *)((int)this + 0x120);
      uVar8 = *(undefined4 *)((int)this + 0x1c);
      uVar7 = *(undefined4 *)((int)this + 0x20);
      uVar5 = FUN_1005d9c9((int *)(*(int *)((int)this + 0x118) + 4));
      cVar2 = (**(code **)(*extraout_EDX + 0x60))(local_8,uVar5,uVar7,uVar8,uVar9,uVar10,uVar11);
      if (cVar2 == '\0') {
        pHVar6 = (HWND)0x0;
      }
      else {
        (**(code **)(**(int **)((int)this + 0x118) + 0x70))(local_8,1,1);
        FUN_1000138a((void *)((int)this + 0x10c),&local_8);
        pHVar6 = local_8;
      }
    }
  }
  return pHVar6;
}

