/*
 * FUN_10036d16 at 10036d16
 * undefined4 __thiscall FUN_10036d16(void * this, char param_1, char param_2, undefined4 * param_3)
 * Address ranges: 10036d16-10036d9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10036d16(void *this,char param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10 [3];
  
  uVar3 = 1;
  if (*(int *)((int)this + 0x1c) == 1) {
    if (param_1 == '\0') {
      if (param_2 == '\0') {
        piVar1 = *(int **)(*(int *)((int)this + 8) + 4);
        (**(code **)(*piVar1 + 0x70))(piVar1,*(undefined4 *)((int)this + 0x10));
        do {
          piVar1 = *(int **)(*(int *)((int)this + 8) + 4);
          iVar2 = (**(code **)(*piVar1 + 0x74))(piVar1,*(undefined4 *)((int)this + 0x10),0,0,0);
        } while (iVar2 == 1);
      }
      uVar4 = 5;
    }
    else {
      uVar4 = 4;
    }
    piVar1 = *(int **)(*(int *)((int)this + 8) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)((int)this + 0xc),0,uVar4,0,local_10);
    if (iVar2 == -0x7789fde4) {
      uVar3 = 2;
    }
    else if (-1 < iVar2) {
      uVar3 = 0;
      *param_3 = local_10[0];
    }
  }
  return uVar3;
}

