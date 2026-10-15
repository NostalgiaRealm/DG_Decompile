/*
 * FUN_1000de63 at 1000de63
 * undefined4 __thiscall FUN_1000de63(void * this, int param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 1000de63-1000df0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000de63(void *this,int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    uVar3 = 0x88760866;
    uVar2 = 0;
    if (*(uint *)((int)this + 4) != 0) {
      do {
        iVar5 = uVar2 * 0x20 + *(int *)this;
        iVar4 = 0;
        while (*(int *)(iVar5 + iVar4 * 4) == *(int *)(param_1 + iVar4 * 4)) {
          iVar4 = iVar4 + 1;
          if (iVar4 == 4) {
            uVar2 = *(uint *)(iVar5 + 0x14);
            if (uVar2 == 0) {
              uVar2 = 4;
              if (*param_3 < 4) goto LAB_1000df04;
              if (param_2 == (undefined4 *)0x0) {
                return 0x8876086c;
              }
              piVar1 = *(int **)(iVar5 + 0x10);
              *param_2 = piVar1;
              (**(code **)(*piVar1 + 4))(piVar1);
            }
            else {
              if (*param_3 < uVar2) {
LAB_1000df04:
                *param_3 = uVar2;
                return 0x88760867;
              }
              if (param_2 == (undefined4 *)0x0) {
                return 0x8876086c;
              }
              FUN_100adac0(param_2,*(undefined4 **)(iVar5 + 0x10),uVar2);
            }
            return 0;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 4));
    }
  }
  return uVar3;
}

