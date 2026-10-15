/*
 * FUN_180110be0 at 180110be0
 * undefined FUN_180110be0(void)
 * Address ranges: 180110be0-180110cff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180110be0(uint *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_18010f138(param_1,uVar2 & 0xffffffff);
  uVar1 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_1801060c0(param_2,0x10ae0200100000,param_1[1] | 0x80000000,0xffffffff,0x1c0,0);
  FUN_1801060c0(param_2,0x5b0201400700,uVar1,uVar2 & 0xffffffff,uVar2 >> 0x20,0);
  FUN_1801060c0(param_2,0x10ae0200100000,param_1[1] | 0x80000000,0xffffffff,0x1b0,0);
  FUN_1801060c0(param_2,0x290200100100,*param_1 | 0x80000000,uVar1,0x4290,0);
  lVar3 = 0;
  do {
    if (param_1[lVar3 + 0x16] - 0x429 < 4) {
      param_1[lVar3 + 0x16] = 0xffffffff;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  FUN_18010f108(param_1,uVar2 & 0xffffffff);
  return 0xffffffff;
}

