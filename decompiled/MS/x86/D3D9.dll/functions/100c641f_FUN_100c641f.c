/*
 * FUN_100c641f at 100c641f
 * int __fastcall FUN_100c641f(int param_1)
 * Address ranges: 100c641f-100c664f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100c641f(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_100ce4b0((undefined4 *)(param_1 + 0x11c0));
  puVar1 = FUN_100c0d52();
  FUN_100c0092((void *)(param_1 + 0x1310),puVar1);
  puVar1 = FUN_100c0d52();
  FUN_100c0092((void *)(param_1 + 0x1370),puVar1);
  puVar1 = FUN_100c0d52();
  FUN_100c0092((void *)(param_1 + 0x13d0),puVar1);
  puVar1 = FUN_100c0d52();
  FUN_100c0092((void *)(param_1 + 0x1430),puVar1);
  puVar1 = FUN_100c0d52();
  FUN_100c0092((void *)(param_1 + 0x1490),puVar1);
  *(undefined4 *)(param_1 + 0x1508) = 0;
  *(undefined4 *)(param_1 + 0x150c) = 0;
  *(undefined4 *)(param_1 + 0x1510) = 0;
  *(undefined4 *)(param_1 + 0x1514) = 0;
  *(undefined4 *)(param_1 + 0x1518) = 0;
  *(undefined4 *)(param_1 + 0x151c) = 0;
  *(undefined4 *)(param_1 + 0x1520) = 0;
  *(undefined4 *)(param_1 + 0x1524) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x14f0);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = FUN_100c0d52();
  FUN_100ca4a7((undefined4 *)(param_1 + 0x1528),puVar1);
  *(undefined4 *)(param_1 + 0x1528) = &PTR_FUN_100d8cf0;
  puVar1 = FUN_100c0d52();
  FUN_100ca4a7((undefined4 *)(param_1 + 0x1580),puVar1);
  *(undefined4 *)(param_1 + 0x1580) = &PTR_FUN_100d9280;
  uVar2 = FUN_100cfd89(0x400);
  *(undefined4 *)(param_1 + 0x15f0) = uVar2;
  *(undefined4 *)(param_1 + 0x15f4) = 0x10;
  *(undefined4 *)(param_1 + 0x15f8) = 0;
  *(undefined4 *)(param_1 + 0x15fc) = 0;
  uVar2 = FUN_100cfd89(0x1580);
  *(undefined4 *)(param_1 + 0x1600) = uVar2;
  *(undefined4 *)(param_1 + 0x1604) = 0x10;
  *(undefined4 *)(param_1 + 0x1608) = 0;
  *(undefined4 *)(param_1 + 0x160c) = 0;
  uVar2 = FUN_100cfd89(0x1580);
  *(undefined4 *)(param_1 + 0x1610) = uVar2;
  *(undefined4 *)(param_1 + 0x1614) = 0x10;
  *(undefined4 *)(param_1 + 0x1618) = 0;
  *(undefined4 *)(param_1 + 0x161c) = 0;
  uVar2 = FUN_100cfd89(0x380);
  *(undefined4 *)(param_1 + 0x1628) = 0;
  *(undefined4 *)(param_1 + 0x162c) = 0;
  *(undefined4 *)(param_1 + 0x1620) = uVar2;
  *(undefined4 *)(param_1 + 0x1624) = 0x10;
  uVar2 = FUN_100cfd89(0x180);
  *(undefined4 *)(param_1 + 0x1630) = uVar2;
  *(undefined4 *)(param_1 + 0x1634) = 0x10;
  *(undefined4 *)(param_1 + 0x1638) = 0;
  *(undefined4 *)(param_1 + 0x163c) = 0;
  *(undefined4 *)(param_1 + 0x1640) = 0;
  *(undefined4 *)(param_1 + 0x1644) = 0;
  *(undefined4 *)(param_1 + 0x1648) = 0xffffffff;
  uVar2 = FUN_100cfd89(0x180);
  *(undefined4 *)(param_1 + 0x164c) = uVar2;
  *(undefined4 *)(param_1 + 0x1650) = 0x10;
  *(undefined4 *)(param_1 + 0x1654) = 0;
  *(undefined4 *)(param_1 + 0x1658) = 0;
  uVar2 = FUN_100cfd89(0x80);
  *(undefined4 *)(param_1 + 0x165c) = uVar2;
  *(undefined4 *)(param_1 + 0x1660) = 4;
  *(undefined4 *)(param_1 + 0x1664) = 0;
  *(undefined4 *)(param_1 + 0x1668) = 0;
  *(undefined4 *)(param_1 + 0x166c) = 0;
  *(undefined4 *)(param_1 + 0x1670) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1674) = 0;
  *(undefined4 *)(param_1 + 0x1678) = 0;
  *(undefined4 *)(param_1 + 0x167c) = 0;
  *(undefined4 *)(param_1 + 0x1680) = 0;
  uVar2 = FUN_100cfd89(0x400);
  *(undefined4 *)(param_1 + 0x1684) = uVar2;
  *(undefined4 *)(param_1 + 0x1688) = 0x10;
  *(undefined4 *)(param_1 + 0x168c) = 0;
  *(undefined4 *)(param_1 + 0x1690) = 0;
  *(undefined4 **)(param_1 + 0x1694) = (undefined4 *)(param_1 + 0x1674);
  FUN_100c6378(param_1);
  return param_1;
}

