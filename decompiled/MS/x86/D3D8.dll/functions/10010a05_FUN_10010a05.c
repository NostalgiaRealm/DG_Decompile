/*
 * FUN_10010a05 at 10010a05
 * undefined4 __thiscall FUN_10010a05(void * this, int param_1, uint param_2)
 * Address ranges: 10010a05-10010a7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10010a05(void *this,int param_1,uint param_2)

{
  void *this_00;
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if (param_2 < *(ushort *)((int)this + 0x30)) {
    puVar2 = (uint *)(*(int *)((int)this + 0x14) + -0x4dd4);
    if (*(int *)((int)this + 0x14) == 0) {
      puVar2 = (uint *)&DAT_00000b0c;
    }
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar2 >> 2) & 1);
    uVar3 = 0;
    this_00 = *(void **)(*(int *)((int)this + 0x38) + (iVar1 * 0x10 + param_2) * 4);
    if ((*(uint *)(*(int *)((int)this_00 + 4) + 0xb8) >> 0xb & 1) != 0) {
      uVar3 = FUN_1000ec84(this_00,'\0');
    }
    FUN_10003881((char *)((int)&param_1 + 3));
  }
  return uVar3;
}

