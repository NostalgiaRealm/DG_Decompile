/*
 * FUN_10042807 at 10042807
 * undefined4 __thiscall FUN_10042807(void * this, undefined4 * param_1, int param_2)
 * Address ranges: 10042807-10042848
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10042807(void *this,undefined4 *param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = in_EAX & 0xffffff00;
  uVar3 = (uint)*(ushort *)((int)this + 4);
  if (uVar3 < 4) {
    *(undefined4 *)((int)this + uVar3 * 0x1c + 8) = *param_1;
    iVar2 = (int)this + uVar3 * 0x1c + 0x1c;
    if (param_2 != 0) {
      iVar2 = param_2;
    }
    *(undefined4 *)((int)this + uVar3 * 0x1c + 0xc) = param_1[1];
    *(undefined4 *)((int)this + uVar3 * 0x1c + 0x10) = param_1[2];
    *(undefined4 *)((int)this + uVar3 * 0x1c + 0x14) = param_1[3];
    *(int *)((int)this + uVar3 * 0x1c + 0x18) = iVar2;
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),1);
    *(undefined4 *)((int)this + uVar3 * 0x1c + 0x20) = 0;
    *(short *)((int)this + 4) = *(short *)((int)this + 4) + 1;
  }
  return uVar1;
}

