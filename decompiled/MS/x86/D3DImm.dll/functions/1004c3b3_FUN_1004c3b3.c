/*
 * FUN_1004c3b3 at 1004c3b3
 * undefined4 __thiscall FUN_1004c3b3(void * this, int param_1)
 * Address ranges: 1004c3b3-1004c4b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004c3b3(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = 0x80070057;
  if (param_1 != 0) {
    uVar8 = *(uint *)((int)this + 0x9c);
    uVar4 = 0x887602f0;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0x98) + uVar7 * 8);
        if ((*(char *)(*(int *)((int)this + 0x98) + 5 + uVar7 * 8) != '\0') &&
           (uVar8 = *(uint *)((int)this + 0x9c),
           *(int *)(*(int *)((int)this + 0x8c) + iVar1 * 8) == param_1)) {
          iVar2 = *(int *)((int)this + 0x8c);
          *(undefined4 *)(*(int *)(iVar2 + 4 + iVar1 * 8) + 0x9c) = 0;
          piVar3 = *(int **)(iVar2 + iVar1 * 8);
          (**(code **)(*piVar3 + 8))(piVar3);
          *(undefined1 *)(*(int *)((int)this + 0x98) + 4 + uVar7 * 8) = 1;
          *(undefined1 *)(*(int *)((int)this + 0x98) + 5 + uVar7 * 8) = 0;
          uVar8 = *(uint *)(*(int *)((int)this + 0x98) + uVar7 * 8);
          uVar5 = *(uint *)((int)this + 0x90);
          uVar6 = uVar7;
          if (uVar8 < uVar5) {
            while (uVar8 = uVar8 + 1, uVar8 < uVar5) {
              iVar1 = *(int *)((int)this + 0x8c);
              *(undefined4 *)(iVar1 + -8 + uVar8 * 8) = *(undefined4 *)(iVar1 + uVar8 * 8);
              *(undefined4 *)(iVar1 + -4 + uVar8 * 8) = *(undefined4 *)(iVar1 + 4 + uVar8 * 8);
              uVar5 = *(uint *)((int)this + 0x90);
            }
            *(uint *)((int)this + 0x90) = uVar5 - 1;
          }
          while (uVar6 = uVar6 + 1, uVar6 < *(uint *)((int)this + 0x9c)) {
            iVar1 = *(int *)((int)this + 0x98);
            uVar8 = *(uint *)(iVar1 + uVar6 * 8);
            if (*(uint *)(iVar1 + uVar7 * 8) <= uVar8) {
              *(uint *)(iVar1 + uVar6 * 8) = uVar8 - 1;
            }
          }
          *(undefined1 *)((int)this + 0xd3) = 1;
          return 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  return uVar4;
}

