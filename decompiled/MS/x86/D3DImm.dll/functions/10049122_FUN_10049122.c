/*
 * FUN_10049122 at 10049122
 * undefined __thiscall FUN_10049122(void * this, int param_1)
 * Address ranges: 10049122-100491ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049122(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  if (*(char *)((int)this + 0x1efc) != '\0') {
    local_c = &local_10;
    local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    uVar3 = 0;
    if (*(int *)((int)this + 0xa0) != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0x9c) + uVar3 * 4);
        if ((param_1 == *(int *)(iVar1 + 0x18)) || (param_1 == *(int *)(iVar1 + 0x28))) {
          (**(code **)(**(int **)(iVar1 + 0x14) + 0x14))();
          *(undefined1 *)(iVar1 + 0xfe) = 0;
        }
        else {
          uVar2 = 0;
          do {
            if (param_1 == *(int *)(iVar1 + 0x14d4 + uVar2 * 4)) {
              (**(code **)(**(int **)(iVar1 + 0x14) + 0x14))();
              break;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < 8);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 0xa0));
    }
  }
  return;
}

