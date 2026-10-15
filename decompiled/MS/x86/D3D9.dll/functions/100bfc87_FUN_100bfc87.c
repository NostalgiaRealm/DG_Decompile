/*
 * FUN_100bfc87 at 100bfc87
 * int __thiscall FUN_100bfc87(void * this, uint param_1, int param_2, int param_3)
 * Address ranges: 100bfc87-100bfd7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100bfc87(void *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int local_2c [5];
  undefined1 local_18 [4];
  LPCRITICAL_SECTION local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_14 = (LPCRITICAL_SECTION)((int)this + 0x18);
  EnterCriticalSection(local_14);
  local_8 = 0;
  piVar5 = (int *)FUN_1009bf28((void *)((int)this + 0x34),&param_1);
  local_10 = piVar5;
  if (piVar5 != (int *)0x0) {
    uVar6 = *(uint *)(*piVar5 + 4);
    do {
      if (uVar6 == 0) break;
      local_c = uVar6 * 8;
      piVar1 = *(int **)(*(int *)(*(int *)*piVar5 + -8 + local_c) + 0x40);
      (**(code **)(*piVar1 + 0x38))(piVar1,local_2c,local_18);
      uVar6 = uVar6 - 1;
      if (local_2c[0] == param_3) {
        iVar2 = *(int *)*piVar5;
        local_8 = *(int *)(iVar2 + -8 + local_c);
        local_c = *(int *)(iVar2 + -4 + local_c);
        FUN_100bfdde((int *)*piVar5,uVar6);
        uVar3 = *(uint *)((int)this + 0x10);
        *(uint *)((int)this + 0x10) = uVar3 - param_1;
        *(uint *)((int)this + 0x14) =
             (*(int *)((int)this + 0x14) - param_2) - (uint)(uVar3 < param_1);
        puVar4 = (undefined4 *)*piVar5;
        if (puVar4[1] == 0) {
          if (puVar4 != (undefined4 *)0x0) {
            thunk_FUN_100cfd6c((LPVOID)*puVar4);
            FUN_100cfd6c(puVar4);
          }
          FUN_100bfd7b((void *)((int)this + 0x34),&param_1);
        }
        FUN_100ca41c((void *)((int)this + 0x44),local_c);
        piVar5 = local_10;
      }
    } while (local_8 == 0);
  }
  LeaveCriticalSection(local_14);
  return local_8;
}

