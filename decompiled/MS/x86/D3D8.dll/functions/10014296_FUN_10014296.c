/*
 * FUN_10014296 at 10014296
 * undefined __thiscall FUN_10014296(void * this, uint param_1)
 * Address ranges: 10014296-1001435c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014296(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  iVar1 = *(int *)((int)this + 0x174);
  while (*(uint *)(iVar1 + uVar4 * 4) != param_1) {
    uVar4 = uVar4 + 1;
    if (7 < uVar4) {
      if ((uVar4 == 8) && (uVar4 = *(uint *)((int)this + 0x178), 8 < uVar4)) {
        uVar5 = 8;
        do {
          if (*(uint *)(*(int *)((int)this + 0x174) + uVar5 * 4) == param_1) {
            if (uVar4 <= uVar5) {
              return;
            }
            while (uVar5 = uVar5 + 1, uVar5 < uVar4) {
              *(undefined4 *)(*(int *)((int)this + 0x174) + -4 + uVar5 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x174) + uVar5 * 4);
              uVar4 = *(uint *)((int)this + 0x178);
            }
            *(uint *)((int)this + 0x178) = uVar4 - 1;
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
      return;
    }
  }
  if (*(uint *)((int)this + 0x178) < 9) {
    *(undefined4 *)(iVar1 + uVar4 * 4) = 0xffffffff;
    (**(code **)(**(int **)((int)this + 0x14) + 100))(uVar4,0);
    return;
  }
  uVar3 = 0xffffffff;
  if (*(int *)((int)this + 0x178) != 0) {
    iVar2 = *(int *)((int)this + 0x178) + -1;
    *(int *)((int)this + 0x178) = iVar2;
    uVar3 = *(undefined4 *)(iVar1 + iVar2 * 4);
  }
  *(undefined4 *)(iVar1 + uVar4 * 4) = uVar3;
  iVar1 = FUN_1000924d((void *)((int)this + 0x148),&param_1);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x60))(uVar4,iVar1);
  return;
}

