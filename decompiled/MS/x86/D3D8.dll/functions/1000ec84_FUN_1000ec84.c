/*
 * FUN_1000ec84 at 1000ec84
 * undefined4 __thiscall FUN_1000ec84(void * this, char param_1)
 * Address ranges: 1000ec84-1000ed87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000ec84(void *this,char param_1)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  uVar4 = 0;
  if ((*(int *)((int)this + 0x34) != 3) &&
     ((*(char *)(*(int *)((int)this + 0x18) + 0x58bd) == '\0' || (*(int *)((int)this + 0x34) != 0)))
     ) {
    local_c = &local_10;
    local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    iVar2 = *(int *)((int)this + 4);
    uVar4 = 0;
    if (((*(uint *)(iVar2 + 0x34) >> 5 & 1) != 0) && (*(int *)(iVar2 + 0x24) == 0)) {
      if (*(int *)(iVar2 + 0x20) == 0) {
        uVar4 = (**(code **)(**(int **)(iVar2 + 0x50) + 0x30))
                          (*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x70));
      }
      if ((*(int *)(iVar2 + 0x20) != 0) && (param_1 == '\0')) {
        *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 1;
      }
    }
    FUN_10006893(*(void **)((int)this + 0x18),(int)this);
  }
  pvVar3 = *(void **)((int)this + 4);
  if ((*(int *)((int)pvVar3 + 0x50) != 0) && (*(char *)((int)pvVar3 + 0x7e) != '\0')) {
    FUN_1002673e(pvVar3);
    (**(code **)(*(int *)this + 0x14))
              (*(undefined4 *)((int)pvVar3 + 0x6c),*(undefined4 *)((int)pvVar3 + 0x70));
  }
  if (*(int **)((int)this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1c) + 0xc))();
  }
  puVar1 = (uint *)(*(int *)((int)this + 4) + 0xb8);
  *puVar1 = *puVar1 & 0xfffff7ff;
  return uVar4;
}

