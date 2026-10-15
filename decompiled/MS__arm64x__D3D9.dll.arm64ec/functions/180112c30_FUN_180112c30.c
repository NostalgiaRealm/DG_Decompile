/*
 * FUN_180112c30 at 180112c30
 * undefined FUN_180112c30(void)
 * Address ranges: 180112c30-180112d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180112c30(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ulonglong local_40 [2];
  
  auVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 0x10),0xe4,0,0,1,1);
  uVar3 = FUN_18010f178(param_1,auVar4._8_8_,0xffffffff,1);
  local_40[0] = uVar3;
  FUN_1801060c0(param_2,0x500200100700,uVar3 & 0xffffffff,auVar4._0_8_ & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0x20810200012010,uVar3 & 0xffffffff,0xffffffff,0,
                1 << (ulonglong)(*(uint *)(param_3 + 8) & 3));
  FUN_18010f268(param_1,param_2,local_40);
  FUN_180113dc0(param_1,param_2,0);
  bVar2 = *(char *)(param_3 + 1) == '\0';
  uVar3 = 0x40000000000;
  if (bVar2) {
    uVar3 = 0x50000000000;
  }
  uVar1 = 0x50000000000;
  if (bVar2) {
    uVar1 = 0x40000000000;
  }
  if (param_4 != '\0') {
    uVar3 = uVar1;
  }
  FUN_1801060c0(param_2,uVar3 | 0x800100110000,0xffffffff,0xffffffff,0,0);
  return;
}

