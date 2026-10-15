/*
 * FUN_1009d020 at 1009d020
 * undefined __thiscall FUN_1009d020(void * this, uint param_1, uint param_2)
 * Address ranges: 1009d020-1009d06c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009d020(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(**(int **)((int)this + 0xc) + 0x20))(*(int **)((int)this + 0xc));
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) goto LAB_1009d063;
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
LAB_1009d063:
    } while (uVar1 < param_1);
  }
  return;
}

