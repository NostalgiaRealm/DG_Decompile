/*
 * FUN_1004c2c2 at 1004c2c2
 * int __thiscall FUN_1004c2c2(void * this, int * param_1, int param_2)
 * Address ranges: 1004c2c2-1004c3b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004c2c2(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *local_c;
  int local_8;
  
  iVar3 = -0x7ff8ffa9;
  if (param_1 != (int *)0x0) {
    iVar3 = -0x7789fd11;
    if (*(int *)(param_2 + 0x9c) == 0) {
      local_c = param_1;
      local_8 = param_2;
      iVar3 = -0x7fffbffb;
      uVar1 = FUN_1001b6b8((void *)((int)this + 0x8c),&local_c);
      if ((char)uVar1 != '\0') {
        uVar2 = 0;
        if (*(uint *)((int)this + 0x9c) != 0) {
          do {
            if (*(char *)(*(int *)((int)this + 0x98) + 5 + uVar2 * 8) == '\0') {
              iVar3 = 0;
              *(int *)(*(int *)((int)this + 0x98) + uVar2 * 8) = *(int *)((int)this + 0x90) + -1;
              *(undefined1 *)(*(int *)((int)this + 0x98) + 4 + uVar2 * 8) = 1;
              *(undefined1 *)(*(int *)((int)this + 0x98) + 5 + uVar2 * 8) = 1;
              goto LAB_1004c35d;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)((int)this + 0x9c));
        }
        local_c = (int *)(*(int *)((int)this + 0x90) + -1);
        local_8 = CONCAT22(local_8._2_2_,0x101);
        uVar1 = FUN_1001b6b8((void *)((int)this + 0x98),&local_c);
        iVar3 = 0;
        if ((char)uVar1 == '\0') {
          iVar3 = -0x7fffbffb;
        }
        if (iVar3 < 0) {
          if (*(int *)((int)this + 0x90) != 0) {
            *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + -1;
          }
        }
        else {
LAB_1004c35d:
          (**(code **)(*param_1 + 4))(param_1);
          *(void **)(param_2 + 0x9c) = this;
          *(undefined1 *)((int)this + 0xd3) = 1;
        }
      }
    }
  }
  return iVar3;
}

