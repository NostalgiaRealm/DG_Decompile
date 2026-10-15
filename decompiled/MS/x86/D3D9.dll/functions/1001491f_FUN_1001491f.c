/*
 * FUN_1001491f at 1001491f
 * undefined4 __thiscall FUN_1001491f(void * this, int param_1, uint param_2)
 * Address ranges: 1001491f-10014994
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001491f(void *this,int param_1,uint param_2)

{
  void *this_00;
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if (param_2 < *(ushort *)((int)this + 0x30)) {
    puVar2 = (uint *)(*(int *)((int)this + 0x14) + -0x58e4);
    if (*(int *)((int)this + 0x14) == 0) {
      puVar2 = (uint *)&DAT_00000dd0;
    }
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar2 >> 2) & 1);
    uVar3 = 0;
    this_00 = *(void **)(*(int *)((int)this + 0x38) + (iVar1 * 0x10 + param_2) * 4);
    if ((*(uint *)(*(int *)((int)this_00 + 4) + 0xb8) >> 0xb & 1) != 0) {
      uVar3 = FUN_10012a56(this_00,'\0');
    }
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar3;
}

