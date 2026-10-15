/*
 * FUN_1001178e at 1001178e
 * undefined4 __thiscall FUN_1001178e(void * this, int param_1)
 * Address ranges: 1001178e-10011803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001178e(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      puVar4 = (undefined4 *)(uVar3 * 0x20 + *(int *)this);
      iVar2 = 0;
      while (puVar4[iVar2] == *(int *)(param_1 + iVar2 * 4)) {
        iVar2 = iVar2 + 1;
        if (iVar2 == 4) {
          FUN_10001667(puVar4);
          uVar1 = *(uint *)((int)this + 4);
          if (uVar3 < uVar1) {
            while (uVar3 = uVar3 + 1, uVar3 < uVar1) {
              puVar4 = (undefined4 *)(uVar3 * 0x20 + *(int *)this);
              puVar5 = puVar4 + -8;
              for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              uVar1 = *(uint *)((int)this + 4);
            }
            *(uint *)((int)this + 4) = uVar1 - 1;
          }
          return 0;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  return 0x88760866;
}

