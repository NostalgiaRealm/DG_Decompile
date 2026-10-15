/*
 * FUN_1003fca2 at 1003fca2
 * undefined4 __thiscall FUN_1003fca2(void * this, int * param_1, int param_2)
 * Address ranges: 1003fca2-1003fd2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003fca2(void *this,int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  BOOL BVar3;
  uint uVar4;
  undefined4 uVar5;
  
  BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar3 == 0) {
    FUN_1003c603();
  }
  uVar5 = 0x80070057;
  if (param_2 != 0) {
    uVar1 = *(uint *)((int)this + 0x1528);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(int *)((int)this + 0x1524) + uVar4 * 8) == param_2) goto LAB_1003fceb;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    if (uVar4 != uVar1) {
LAB_1003fceb:
      (**(code **)(*param_1 + 4))(param_1);
      piVar2 = *(int **)((int)this + 0x1520);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(int **)((int)this + 0x1520) = param_1;
      uVar5 = 0;
      *(int *)((int)this + 0x151c) = param_2;
      *(undefined1 *)((int)this + 0x1754) = 1;
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar5;
}

