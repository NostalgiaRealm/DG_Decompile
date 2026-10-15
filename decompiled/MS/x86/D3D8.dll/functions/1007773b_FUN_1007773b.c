/*
 * FUN_1007773b at 1007773b
 * undefined __thiscall FUN_1007773b(void * this, int param_1, int param_2, undefined4 param_3)
 * Address ranges: 1007773b-1007789b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007773b(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x2c;
  *(uint *)((int)this + 0x1ce40) = (uint)(byte)(&DAT_100b8a74)[iVar2];
  *(uint *)((int)this + 0x1ce44) = (uint)(byte)(&DAT_100b8a76)[iVar2];
  *(uint *)((int)this + 0x1ce48) = (uint)(byte)(&DAT_100b8a78)[iVar2];
  *(uint *)((int)this + 0x1ce4c) = (uint)(byte)(&DAT_100b8a7a)[iVar2];
  *(uint *)((int)this + 0x1ce50) = (uint)(byte)(&DAT_100b8a75)[iVar2];
  *(uint *)((int)this + 0x1ce54) = (uint)(byte)(&DAT_100b8a77)[iVar2];
  *(uint *)((int)this + 0x1ce58) = (uint)(byte)(&DAT_100b8a79)[iVar2];
  *(uint *)((int)this + 0x1ce5c) = (uint)(byte)(&DAT_100b8a7b)[iVar2];
  *(uint *)((int)this + 0x1ce60) = 8 - (uint)(byte)(&DAT_100b8a74)[iVar2];
  *(uint *)((int)this + 0x1ce64) = 8 - (uint)(byte)(&DAT_100b8a76)[iVar2];
  *(uint *)((int)this + 0x1ce68) = 8 - (uint)(byte)(&DAT_100b8a78)[iVar2];
  *(uint *)((int)this + 0x1ce6c) = 8 - (uint)(byte)(&DAT_100b8a7a)[iVar2];
  *(undefined4 *)((int)this + 0x1ce70) = *(undefined4 *)(&DAT_100b8a7c + iVar2);
  *(uint *)((int)this + 0x1ced0) = (uint)(byte)(&DAT_100b8a80)[iVar2];
  *(uint *)((int)this + 0x1ced4) = (uint)(byte)(&DAT_100b8a81)[iVar2];
  *(uint *)((int)this + 0x1ced8) = (uint)(byte)(&DAT_100b8a82)[iVar2];
  *(uint *)((int)this + 0x1cedc) = (uint)(byte)(&DAT_100b8a83)[iVar2];
  if (param_2 != 0) {
    *(undefined4 *)((int)this + 0x1cebc) = param_3;
    *(undefined4 *)((int)this + 0x1cec0) = 0x3d000000;
    if ((param_2 == 0x17) || (param_2 == 0x18)) {
      *(undefined4 *)((int)this + 0x1cec4) = 0x447fc000;
      uVar1 = 0x3ff;
      *(undefined4 *)((int)this + 0x1cedc) = 3;
    }
    else {
      if ((param_2 != 9) && (param_2 != 0xb)) {
        *(undefined4 *)((int)this + 0x1cec4) = 0x437f0000;
        *(undefined4 *)((int)this + 0x1cec8) = 0xff;
        return;
      }
      uVar1 = 0xffff;
      *(undefined4 *)((int)this + 0x1cec4) = 0x477fff00;
      *(undefined4 *)((int)this + 0x1cedc) = 0xffff;
    }
    *(undefined4 *)((int)this + 0x1ced8) = uVar1;
    *(undefined4 *)((int)this + 0x1ced4) = uVar1;
    *(undefined4 *)((int)this + 0x1ced0) = uVar1;
    *(undefined4 *)((int)this + 0x1cec8) = uVar1;
  }
  return;
}

