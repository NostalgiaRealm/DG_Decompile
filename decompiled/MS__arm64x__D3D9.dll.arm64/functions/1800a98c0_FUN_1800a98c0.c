/*
 * FUN_1800a98c0 at 1800a98c0
 * undefined FUN_1800a98c0(void)
 * Address ranges: 1800a98c0-1800a9c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800a98c0(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  char in_w7;
  undefined4 uVar5;
  undefined *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined8 *in_stack_00000010;
  
  param_1[0xd08] = 0;
  puVar1 = (undefined8 *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1 + 0xd07;
  }
  *(undefined4 *)(param_1 + 0xd09) = 0;
  param_1[0xd0a] = puVar1;
  param_1[0xd0c] = 0;
  param_1[0xd0b] = 0;
  param_1[0xd0e] = 0;
  param_1[0xd0d] = 0;
  param_1[0xd10] = 0;
  param_1[0xd0f] = 0;
  FUN_180005650();
  param_1[0xd06] = 0;
  *param_1 = &PTR_FUN_1802364d0;
  param_1[0xd11] = param_2;
  param_1[0xd04] = &PTR_DAT_1802296c8;
  param_1[0xd05] = 0;
  param_1[0xd07] = &PTR_FUN_1802360a0;
  param_1[0xd12] = *in_stack_00000010;
  *(undefined4 *)(param_1 + 0xd21) = 0x10001;
  param_1[0xd17] = 0;
  param_1[0xd18] = 0;
  param_1[0xd19] = 0;
  param_1[0xd1a] = param_1;
  param_1[0xd1b] = 0;
  param_1[0xd1c] = 0;
  param_1[0xd1d] = 0;
  param_1[0xd1e] = 0;
  param_1[0xd1f] = 0;
  param_1[0xd20] = 0;
  param_1[0xd22] = 0;
  param_1[0xd23] = 0;
  param_1[0xd24] = 0;
  param_1[0xd25] = param_1;
  param_1[0xd26] = 0;
  param_1[0xd27] = 0;
  param_1[0xd28] = 0;
  uVar4 = thunk_FUN_180102f80(0x300);
  param_1[0xd29] = uVar4;
  param_1[0xd2a] = 0x20;
  param_1[0xd2b] = param_1;
  param_1[0xd2c] = 0;
  param_1[0x1890] = 0;
  param_1[0x1891] = 0;
  param_1[0x1892] = 0;
  param_1[0x1893] = 0;
  param_1[0x18a0] = 3;
  *(undefined4 *)(param_1 + 0x18a1) = 0x1010100;
  *(undefined1 *)((longlong)param_1 + 0xc50c) = 1;
  param_1[0xd2d] = 0;
  param_1[0xd2e] = 0;
  param_1[0xd2f] = 0;
  param_1[0xd30] = 0;
  param_1[0xd31] = 0;
  param_1[0x189c] = 0;
  FUN_1800a5438(param_1 + 0xd08,&DAT_1802296b8);
  FUN_1800a5438(param_1 + 0xd08,&DAT_180229498);
  if (*(char *)((longlong)in_stack_00000010 + 4) != '\0') {
    FUN_1800a5438(param_1 + 0xd08,&DAT_180229588);
  }
  FUN_1800015a0(param_2 + 0xac);
  param_1[1] = &DAT_18024bb30;
  param_1[2] = &DAT_18024c1c0;
  param_1[0xd14] = &DAT_18024c350;
  if (param_4 == 2) {
    puVar6 = &DAT_180248b80;
    puVar7 = &DAT_180248ba4;
  }
  else {
    puVar6 = &DAT_180248d30 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1b0;
    puVar7 = (uint *)(&DAT_180248d54 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1b0);
  }
  param_1[0xd13] = puVar6;
  uVar2 = *puVar7;
  *(bool *)((longlong)param_1 + 0x40f) = (uVar2 & 0x100000) != 0;
  *(bool *)(param_1 + 0x82) = in_w7 != '\0' && (uVar2 & 0x100000) != 0;
  bVar3 = (*(uint *)(param_1 + 0x1cf) & 0x40) == 0;
  if (bVar3) {
    uVar8 = 0x2000;
  }
  else {
    uVar8 = *(undefined4 *)((longlong)param_1 + 0xe7c);
  }
  uVar5 = 0x10;
  if (bVar3) {
    uVar5 = 0x800;
  }
  *(undefined4 *)(param_1 + 0xd16) = uVar5;
  *(undefined4 *)(param_1 + 0xd15) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x68ac) = uVar5;
  (*__imp_USER32_dll_SetRectEmpty)(param_1 + 0xded);
  param_1[0xd33] = 0;
  param_1[0xd32] = 0;
  param_1[0xd35] = 0;
  param_1[0xd34] = 0;
  param_1[0xd37] = 0;
  param_1[0xd36] = 0;
  param_1[0xd39] = 0;
  param_1[0xd38] = 0;
  param_1[0xd3b] = 0;
  param_1[0xd3a] = 0;
  param_1[0xd3d] = 0;
  param_1[0xd3c] = 0;
  param_1[0xd3f] = 0;
  param_1[0xd3e] = 0;
  param_1[0xd41] = 0;
  param_1[0xd40] = 0;
  param_1[0xd43] = 0;
  param_1[0xd42] = 0;
  param_1[0xd45] = 0;
  param_1[0xd44] = 0;
  param_1[0xd47] = 0;
  param_1[0xd46] = 0;
  param_1[0xd49] = 0;
  param_1[0xd48] = 0;
  param_1[0xd4b] = 0;
  param_1[0xd4a] = 0;
  param_1[0xd4d] = 0;
  param_1[0xd4c] = 0;
  param_1[0xd4f] = 0;
  param_1[0xd4e] = 0;
  param_1[0xd51] = 0;
  param_1[0xd50] = 0;
  param_1[0xd53] = 0;
  param_1[0xd52] = 0;
  param_1[0xd55] = 0;
  param_1[0xd54] = 0;
  param_1[0xd57] = 0;
  param_1[0xd56] = 0;
  param_1[0xd59] = 0;
  param_1[0xd58] = 0;
  param_1[0x189e] = 0;
  param_1[0x189d] = 0;
  param_1[0x189f] = 0;
  func_0x000180222c50(param_1 + 0xdf0,0,0x45a0);
  func_0x000180222c50(param_1 + 0x16a4,0,0xe00);
  param_1[0x1865] = 0;
  param_1[0x1864] = 0;
  param_1[0x1867] = 0;
  param_1[0x1866] = 0;
  param_1[0x1869] = 0;
  param_1[0x1868] = 0;
  param_1[0x186b] = 0;
  param_1[0x186a] = 0;
  param_1[0x186d] = 0;
  param_1[0x186c] = 0;
  param_1[0x186f] = 0;
  param_1[0x186e] = 0;
  param_1[0x1871] = 0;
  param_1[0x1870] = 0;
  param_1[0x1873] = 0;
  param_1[0x1872] = 0;
  param_1[0x1875] = 0;
  param_1[0x1874] = 0;
  param_1[0x1877] = 0;
  param_1[0x1876] = 0;
  param_1[0x1879] = 0;
  param_1[0x1878] = 0;
  param_1[0x187b] = 0;
  param_1[0x187a] = 0;
  param_1[0x187d] = 0;
  param_1[0x187c] = 0;
  param_1[0x187f] = 0;
  param_1[0x187e] = 0;
  param_1[0x1881] = 0;
  param_1[0x1880] = 0;
  param_1[0x1883] = 0;
  param_1[0x1882] = 0;
  param_1[0x1885] = 0;
  param_1[0x1884] = 0;
  param_1[0x1887] = 0;
  param_1[0x1886] = 0;
  param_1[0x1889] = 0;
  param_1[0x1888] = 0;
  param_1[0x188b] = 0;
  param_1[0x188a] = 0;
  param_1[0x188d] = 0;
  param_1[0x188c] = 0;
  param_1[0x188f] = 0;
  param_1[0x188e] = 0;
  param_1[0x278] = 0;
  param_1[0x277] = 0;
  param_1[0x27a] = 0;
  param_1[0x279] = 0;
  param_1[0x27b] = 0;
  param_1[0x1895] = 0x100000001;
  param_1[0x1894] = 0x100000001;
  param_1[0x1897] = 0x100000001;
  param_1[0x1896] = 0x100000001;
  param_1[0x1899] = 0x100000001;
  param_1[0x1898] = 0x100000001;
  param_1[0x189b] = 0x100000001;
  param_1[0x189a] = 0x100000001;
  return param_1;
}

