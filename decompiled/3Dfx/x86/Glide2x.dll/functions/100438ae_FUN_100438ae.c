/*
 * FUN_100438ae at 100438ae
 * undefined __thiscall FUN_100438ae(void * this, int param_1)
 * Address ranges: 100438ae-1004394f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100438ae(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  uVar3 = 0;
  if (*(uint *)((int)this + 0x4c8) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0x4c4) + uVar3 * 4) == param_1) {
        if (uVar3 != 0xffffffff) {
          uVar2 = 0;
          if (*(int *)((int)this + 0x4bc) != 0) {
            do {
              iVar1 = *(int *)(*(int *)((int)this + 0x4b8) + uVar2 * 4);
              if (*(int *)(iVar1 + 0xd60) == param_1) {
                *(undefined4 *)(iVar1 + 0xd60) = 0;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(uint *)((int)this + 0x4bc));
          }
          uVar2 = *(uint *)((int)this + 0x4c8);
          if (uVar3 < uVar2) {
            while (uVar3 = uVar3 + 1, uVar3 < uVar2) {
              *(undefined4 *)(*(int *)((int)this + 0x4c4) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x4c4) + uVar3 * 4);
              uVar2 = *(uint *)((int)this + 0x4c8);
            }
            *(uint *)((int)this + 0x4c8) = uVar2 - 1;
          }
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x4c8));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

