/*
 * FUN_100605cf at 100605cf
 * undefined __thiscall FUN_100605cf(void * this, int param_1, int param_2)
 * Address ranges: 100605cf-10060735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100605cf(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  while (*(int *)(param_1 + iVar2 * 4) == (&DAT_10062310)[iVar2]) {
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
  while (*(int *)(param_1 + iVar2 * 4) == (&DAT_10062320)[iVar2]) {
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
  while (*(int *)(param_1 + iVar2 * 4) == (&DAT_10062330)[iVar2]) {
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
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062340)[iVar2]) {
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

