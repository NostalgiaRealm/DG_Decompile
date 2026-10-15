/*
 * FUN_1004bc2f at 1004bc2f
 * undefined4 __thiscall FUN_1004bc2f(void * this, byte * param_1, int param_2)
 * Address ranges: 1004bc2f-1004bcbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004bc2f(void *this,byte *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  if (0x10000 < *(uint *)((int)this + 0x78)) {
    return 0x80070057;
  }
  iVar2 = FUN_1005c99d(param_1,(byte *)&DAT_1005d260,0x10);
  if (iVar2 == 0) {
    if ((*(uint *)((int)this + 0x70) & 0xfffef7ff) != 0) {
      return 0x80070057;
    }
    if (param_2 == 0) goto LAB_1004bc7b;
    bVar5 = param_2 == 4;
  }
  else {
    bVar5 = (*(uint *)((int)this + 0x70) & 0xfffef7fe) == 0 && param_2 == 0;
  }
  if (!bVar5) {
    return 0x80070057;
  }
LAB_1004bc7b:
  uVar4 = 0x88760800;
  cVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x30))();
  FUN_1003c32f(*(uint *)((int)this + 0x74),cVar1 == '\0',(uint *)((int)this + 0x7c));
  if (*(int *)((int)this + 0x80) != 3) {
    uVar4 = 0x8876080d;
    uVar3 = FUN_1004b83b((int)this);
    if ((char)uVar3 != '\0') {
      uVar4 = 0;
    }
  }
  return uVar4;
}

