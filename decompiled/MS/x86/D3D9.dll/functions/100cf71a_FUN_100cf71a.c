/*
 * FUN_100cf71a at 100cf71a
 * undefined __thiscall FUN_100cf71a(void * this, int param_1, int param_2)
 * Address ranges: 100cf71a-100cf880
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100cf71a(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  while (*(int *)(param_1 + iVar2 * 4) == (&DAT_100d12c0)[iVar2]) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      uVar1 = *(uint *)((int)this + 0x1c);
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          if (*(int *)(*(int *)((int)this + 0x18) + uVar3 * 4) == param_2) {
            if (uVar3 == 0xffffffff) {
              return;
            }
            uVar3 = uVar3 + 1;
            if (uVar3 < uVar1) {
              do {
                *(undefined4 *)(*(int *)((int)this + 0x18) + -4 + uVar3 * 4) =
                     *(undefined4 *)(*(int *)((int)this + 0x18) + uVar3 * 4);
                uVar3 = uVar3 + 1;
              } while (uVar3 < *(uint *)((int)this + 0x1c));
            }
            *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
            return;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      return;
    }
  }
  iVar2 = 0;
  while (*(int *)(param_1 + iVar2 * 4) == (&DAT_100d12d0)[iVar2]) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      uVar1 = *(uint *)((int)this + 0x28);
      uVar3 = 0;
      if (uVar1 == 0) {
        return;
      }
      do {
        if (*(int *)(*(int *)((int)this + 0x24) + uVar3 * 4) == param_2) {
          if (uVar3 == 0xffffffff) {
            return;
          }
          uVar3 = uVar3 + 1;
          if (uVar3 < uVar1) {
            do {
              *(undefined4 *)(*(int *)((int)this + 0x24) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x24) + uVar3 * 4);
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint *)((int)this + 0x28));
          }
          *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
      return;
    }
  }
  iVar2 = 0;
  while (*(int *)(param_1 + iVar2 * 4) == (&DAT_100d12e0)[iVar2]) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      uVar1 = *(uint *)((int)this + 0x34);
      uVar3 = 0;
      if (uVar1 == 0) {
        return;
      }
      do {
        if (*(int *)(*(int *)((int)this + 0x30) + uVar3 * 4) == param_2) {
          if (uVar3 == 0xffffffff) {
            return;
          }
          uVar3 = uVar3 + 1;
          if (uVar3 < uVar1) {
            do {
              *(undefined4 *)(*(int *)((int)this + 0x30) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x30) + uVar3 * 4);
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint *)((int)this + 0x34));
          }
          *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
      return;
    }
  }
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100d12f0)[iVar2]) {
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  uVar1 = *(uint *)((int)this + 0x40);
  uVar3 = 0;
  if (uVar1 == 0) {
    return;
  }
  do {
    if (*(int *)(*(int *)((int)this + 0x3c) + uVar3 * 4) == param_2) {
      if (uVar3 == 0xffffffff) {
        return;
      }
      uVar3 = uVar3 + 1;
      if (uVar3 < uVar1) {
        do {
          *(undefined4 *)(*(int *)((int)this + 0x3c) + -4 + uVar3 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0x3c) + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)((int)this + 0x40));
      }
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + -1;
      return;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar1);
  return;
}

