/*
 * FUN_10034bb0 at 10034bb0
 * undefined4 * __fastcall FUN_10034bb0(undefined4 param_1, int param_2)
 * Address ranges: 10034bb0-10034dac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10034bb0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *this;
  
  iVar1 = FUN_100cfd55(0x10254);
  this = (undefined4 *)(iVar1 + 0x13U & 0xfffffff0);
  this[-1] = iVar1;
  FUN_1004e690(this,param_1,0x100);
  *this = &PTR_FUN_100d52e4;
  this[0x3dac] = 0;
  this[0x3dad] = 0;
  this[0x3dae] = param_2;
  this[0x3daf] = 0;
  this[0x3db0] = 0;
  this[0x3db1] = 0;
  this[0x3db2] = 0;
  this[0x3db3] = 0;
  this[0x3db4] = 0;
  this[0x3db5] = 0;
  this[0x3db6] = 0;
  this[0x3db7] = 0;
  this[0x3db8] = 0;
  this[0x3db9] = 0;
  this[0x3dba] = 0;
  this[0x3dbb] = 0;
  this[0x3dbc] = 0;
  iVar1 = FUN_100cfd89(0xc00);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar3 = 0x80;
    iVar2 = iVar1;
    do {
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined1 *)(iVar2 + 0x10) = 0;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 0x18;
    } while (iVar3 != 0);
  }
  this[0x3dbd] = iVar1;
  this[0x3dbe] = 0x80;
  this[0x3dc2] = param_2 + 4;
  this[0x3dbf] = 0;
  this[0x3dc0] = 0;
  this[0x3dc1] = 0xffffffff;
  this[0x3dc3] = param_2 + 0x48;
  this[0x3dc4] = 0;
  this[0x3dc5] = 0;
  *(undefined1 *)(this + 0x3dc6) = 0;
  this[0x3dc7] = 0;
  this[0x3dc8] = 0;
  this[0x3dc9] = 0;
  this[0x3dca] = 0;
  this[0x3dcb] = 0;
  this[0x3dcc] = 0;
  this[0x3dcd] = 0;
  this[0x3dce] = 0;
  this[0x3dcf] = 0;
  this[0x3dd0] = 0;
  this[0x3dd1] = 0;
  this[0x3dd2] = 0xa000;
  FUN_100cfed0(this + 0x3dd3,0,0xae8);
  return this;
}

