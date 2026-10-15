/*
 * FUN_10037200 at 10037200
 * undefined __thiscall FUN_10037200(void * this, uint param_1, uint param_2)
 * Address ranges: 10037200-1003724c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10037200(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(**(int **)((int)this + 0xc) + 0x20))(*(int **)((int)this + 0xc));
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) goto LAB_10037243;
    do {
      do {
        (**(code **)(**(int **)((int)this + 0xc) + 0x24))
                  (*(int **)((int)this + 0xc),param_1,param_2,*(undefined4 *)((int)this + 0x10));
        WaitForSingleObject(*(HANDLE *)((int)this + 0x10),0xffffffff);
        uVar3 = (**(code **)(**(int **)((int)this + 0xc) + 0x20))(*(int **)((int)this + 0xc));
        uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar1 = (uint)uVar3;
      } while (uVar2 < param_2);
      if (param_2 < uVar2) {
        return;
      }
LAB_10037243:
    } while (uVar1 < param_1);
  }
  return;
}

