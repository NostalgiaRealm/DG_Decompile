/*
 * FUN_10048199 at 10048199
 * uint __thiscall FUN_10048199(void * this, undefined4 * param_1)
 * Address ranges: 10048199-100481d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10048199(void *this,undefined4 *param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  
  uVar2 = in_EAX & 0xffffff00;
  uVar3 = (uint)*(ushort *)((int)this + 4);
  if (uVar3 < 2) {
    *(undefined4 *)((int)this + uVar3 * 0x1c + 8) = *param_1;
    iVar1 = (int)this + uVar3 * 0x1c + 0x1c;
    *(undefined4 *)((int)this + uVar3 * 0x1c + 0xc) = param_1[1];
    *(undefined4 *)((int)this + uVar3 * 0x1c + 0x10) = param_1[2];
    *(undefined4 *)((int)this + uVar3 * 0x1c + 0x14) = param_1[3];
    *(int *)((int)this + uVar3 * 0x1c + 0x18) = iVar1;
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    *(undefined4 *)((int)this + uVar3 * 0x1c + 0x20) = 0;
    *(short *)((int)this + 4) = *(short *)((int)this + 4) + 1;
  }
  return uVar2;
}

