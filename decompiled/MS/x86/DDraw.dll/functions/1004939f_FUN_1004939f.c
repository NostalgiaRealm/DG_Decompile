/*
 * FUN_1004939f at 1004939f
 * undefined4 __thiscall FUN_1004939f(void * this, int param_1, int param_2)
 * Address ranges: 1004939f-100494b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004939f(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  uVar5 = 0;
  if (*(int *)((int)this + 0x4bc) != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x4b8) + uVar5 * 4);
      if ((*piVar1 == param_1) && (*(char *)((int)piVar1 + 0xd5b) == '\0')) {
        if ((param_2 != 0) && (piVar1[0x358] == param_2)) {
          piVar1[0x358] = 0;
        }
        iVar2 = *(int *)(*(int *)((int)this + 0x4b8) + uVar5 * 4);
        piVar1 = (int *)(iVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
        if (*piVar1 == 0) {
          *(undefined1 *)(*(int *)(*(int *)((int)this + 0x4b8) + uVar5 * 4) + 0xd5b) = 1;
          puVar3 = *(undefined4 **)(*(int *)((int)this + 0x4b8) + uVar5 * 4);
          if (puVar3[1] != 0) {
            FUN_10048940(puVar3);
            (**(code **)(*(int *)this + 0x3c))
                      (*(undefined4 *)(*(int *)((int)this + 0x4b8) + uVar5 * 4));
            (**(code **)(*(int *)this + 0x10))
                      (*(undefined4 *)(*(int *)((int)this + 0x4b8) + uVar5 * 4));
            (**(code **)(*(int *)this + 0x18))
                      (*(undefined4 *)(*(int *)((int)this + 0x4b8) + uVar5 * 4));
            (**(code **)(*(int *)this + 0x20))
                      (*(undefined4 *)(*(int *)((int)this + 0x4b8) + uVar5 * 4));
            piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x4b8) + uVar5 * 4) + 4);
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          FUN_1004844e(this,*(LPVOID *)(*(int *)((int)this + 0x4b8) + uVar5 * 4));
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((int)this + 0x4bc));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return uVar4;
}

