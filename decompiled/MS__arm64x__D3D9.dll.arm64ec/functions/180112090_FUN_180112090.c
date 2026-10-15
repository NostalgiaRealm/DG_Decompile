/*
 * FUN_180112090 at 180112090
 * undefined FUN_180112090(void)
 * Address ranges: 180112090-18011225f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180112090(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),1,0);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_1801060c0(param_2,0x110201300100,0x80000004,uVar1,0xfffffffc,0);
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    FUN_1801060c0(param_2,0xd90200000000,0x80000004,0xffffffff,0xfffffffc,0);
  }
  if ((*(byte *)(param_3 + 0x10) >> 1 & 1) != 0) {
    FUN_1801060c0(param_2,0xd90200000000,0x80000004,0xffffffff,0xfffffffc,0);
    FUN_1801060c0(param_2,0xfed90200000000,0xffffffff,0xffffffff,0,0);
    FUN_1801060c0(param_2,0x18d90200000000,0x80000004,0xffffffff,0xfffffffc,0);
    FUN_1801060c0(param_2,0x110201300100,uVar1,0x80000004,0xfffffffc,0);
    FUN_1801060c0(param_2,0xc60200130700,uVar1,uVar1,0,0xe0);
  }
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    FUN_1801060c0(param_2,0xffd90200000000,0xffffffff,0xffffffff,0,0);
    FUN_1801060c0(param_2,0x18d90200000000,0x80000004,0xffffffff,0xfffffffc,0);
    FUN_1801060c0(param_2,0x110201300100,uVar2,0x80000004,0xfffffffc,0);
    FUN_1801060c0(param_2,0x110201300100,uVar1,uVar2,0,0);
  }
  FUN_18010f108(param_1,uVar1);
  return uVar1;
}

