/*
 * FUN_100106c7 at 100106c7
 * undefined __thiscall FUN_100106c7(void * this, int * param_1)
 * Address ranges: 100106c7-10010728
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100106c7(void *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined1 *)((int)this + 0x6d) = 0;
  if (*(int *)(*param_1 + 0x34) == 1) {
    uVar1 = 0;
    *(undefined1 *)((int)this + 0x6d) = 1;
    uVar2 = (uint)*(ushort *)((int)this + 0x30);
    if (*(int *)((int)this + 100) != 0) {
      do {
        uVar3 = 0;
        if (uVar2 != 0) {
          do {
            uVar2 = (uint)*(ushort *)((int)this + 0x30);
            if (*(int *)(*(int *)(param_1[uVar3 + uVar1 * 0x10] + 4) + 0xb0) != 1) {
              *(undefined1 *)((int)this + 0x6d) = 0;
              break;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar2);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)this + 100));
    }
  }
  return;
}

