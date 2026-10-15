/*
 * FUN_10014e63 at 10014e63
 * undefined __thiscall FUN_10014e63(void * this, uint param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 10014e63-10014f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014e63(void *this,uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)((int)this + 0x5c);
    if (((iVar2 != 0) && (param_1 != 0xffffffff)) && (param_1 < *(uint *)((int)this + 0x60))) {
      iVar4 = param_1 * 0xc4;
      iVar3 = *(int *)(iVar4 + 0x44 + iVar2);
      if (iVar3 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
        if (((param_1 == *(uint *)((int)this + 0x70)) || (param_1 == *(uint *)((int)this + 0x74)))
           || (param_1 == *(uint *)((int)this + 0x78))) {
          FUN_1001290c((int)this);
        }
        *(undefined4 **)(iVar4 + 0x14 + iVar2) = param_2;
        FUN_10013f5d(this,iVar3,*(uint *)(iVar4 + 0x4c + iVar2),*(uint *)(iVar4 + 0x48 + iVar2),
                     *(uint *)(iVar4 + 0x3c + iVar2),*(uint *)(iVar4 + 0x40 + iVar2),
                     *(uint *)(iVar4 + 0x10 + iVar2),*(uint *)(iVar4 + 0x18 + iVar2),param_2);
        if (((*(int *)(iVar4 + 0x18 + iVar2) == 1) || (*(int *)(iVar4 + 0x18 + iVar2) == 9)) &&
           (param_3 != (undefined4 *)0x0)) {
          puVar5 = (undefined4 *)(iVar2 + 0x54 + iVar4);
          for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *param_3;
            param_3 = param_3 + 1;
            puVar5 = puVar5 + 1;
          }
        }
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

