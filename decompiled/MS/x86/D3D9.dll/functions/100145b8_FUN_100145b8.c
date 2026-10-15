/*
 * FUN_100145b8 at 100145b8
 * undefined __thiscall FUN_100145b8(void * this, int * param_1)
 * Address ranges: 100145b8-10014627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100145b8(void *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined1 *)((int)this + 0x6d) = 0;
  if (*(int *)(*param_1 + 0x34) == 1) {
    uVar3 = (uint)*(ushort *)((int)this + 0x30);
    if ((*(uint *)((int)this + 0x54) & 0x400) != 0) {
      uVar3 = 1;
    }
    *(undefined1 *)((int)this + 0x6d) = 1;
    uVar2 = 0;
    if (*(int *)((int)this + 100) != 0) {
      do {
        uVar1 = 0;
        if (uVar3 != 0) {
          do {
            if (*(int *)(*(int *)(param_1[uVar1 + uVar2 * 0x10] + 4) + 0xb0) != 1) {
              *(undefined1 *)((int)this + 0x6d) = 0;
              break;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < uVar3);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 100));
    }
  }
  return;
}

