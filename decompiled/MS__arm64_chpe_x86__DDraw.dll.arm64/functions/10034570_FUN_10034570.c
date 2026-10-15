/*
 * FUN_10034570 at 10034570
 * undefined FUN_10034570(void)
 * Address ranges: 10034570-100348d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10034570(undefined1 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  puVar6 = (undefined4 *)FUN_100913c0(0x17c);
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined8 *)(puVar6 + 0xf) = 0;
  puVar1 = puVar6 + 4;
  *puVar6 = &PTR_FUN_100b25dc;
  *(undefined8 *)(puVar6 + 1) = 0;
  puVar2 = puVar6 + 0xe;
  puVar6[3] = 0;
  *puVar1 = &PTR_FUN_100b1a60;
  puVar3 = puVar6 + 0x11;
  puVar6[5] = puVar6 + 0xf;
  *(undefined8 *)(puVar6 + 6) = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 0xc) = 0x100000000;
  *(undefined8 *)(puVar6 + 10) = 0xffffffff;
  *puVar2 = &PTR_FUN_100b255c;
  *puVar3 = 0;
  puVar6[0x12] = 0;
  *(undefined8 *)(puVar6 + 0x15) = 0;
  *(undefined8 *)(puVar6 + 0x13) = 0;
  *(undefined8 *)(puVar6 + 0x19) = 0;
  *(undefined8 *)(puVar6 + 0x17) = 0;
  *(undefined8 *)(puVar6 + 0x1d) = 0;
  *(undefined8 *)(puVar6 + 0x1b) = 0;
  *(undefined8 *)(puVar6 + 0x21) = 0;
  *(undefined8 *)(puVar6 + 0x1f) = 0;
  *(undefined8 *)(puVar6 + 0x25) = 0;
  *(undefined8 *)(puVar6 + 0x23) = 0;
  *(undefined8 *)(puVar6 + 0x29) = 0;
  *(undefined8 *)(puVar6 + 0x27) = 0;
  *(undefined8 *)(puVar6 + 0x2d) = 0;
  *(undefined8 *)(puVar6 + 0x2b) = 0;
  *(undefined8 *)(puVar6 + 0x31) = 0;
  *(undefined8 *)(puVar6 + 0x2f) = 0;
  *(undefined8 *)(puVar6 + 0x35) = 0;
  *(undefined8 *)(puVar6 + 0x33) = 0;
  *(undefined8 *)(puVar6 + 0x39) = 0;
  *(undefined8 *)(puVar6 + 0x37) = 0;
  *(undefined8 *)(puVar6 + 0x3b) = 0;
  *puVar6 = &PTR_FUN_100b2580;
  *puVar1 = &PTR_FUN_100b2418;
  *puVar2 = &PTR_FUN_100b23f4;
  *(undefined8 *)(puVar6 + 0x43) = 0;
  *(undefined8 *)(puVar6 + 0x45) = 0;
  puVar6[0x47] = 0;
  *(undefined8 *)(puVar6 + 0x49) = 1;
  *(undefined8 *)(puVar6 + 0x4b) = 0;
  *(undefined8 *)(puVar6 + 0x4d) = 0;
  *(undefined8 *)(puVar6 + 0x4f) = 0;
  *(undefined8 *)(puVar6 + 0x51) = 0;
  *(undefined1 *)((int)puVar6 + 0x14e) = param_1;
  *(undefined1 *)((int)puVar6 + 0x14f) = 0;
  *(undefined1 *)((int)puVar6 + 0x151) = 0;
  *(undefined8 *)(puVar6 + 0x3f) = 0;
  *(undefined8 *)(puVar6 + 0x3d) = 0;
  *(undefined8 *)(puVar6 + 0x41) = 0;
  if (DAT_100c2950 == 0) {
    DAT_100c2950 = FUN_100914b0(0x100);
    DAT_100c294c = 0x40;
    if (DAT_100c2950 != 0) goto LAB_1003471c;
LAB_1003470c:
    bVar5 = false;
  }
  else {
LAB_1003471c:
    if (DAT_100c294c == DAT_100c2940) {
      iVar9 = DAT_100c294c << 3;
      if ((DAT_100c294c & 0x7fffffff) >> 0x1d != 0) {
        iVar9 = -1;
      }
      iVar7 = FUN_100914b0(iVar9);
      iVar9 = DAT_100c2950;
      if (iVar7 == 0) goto LAB_1003470c;
      FUN_100917a0(iVar7,DAT_100c2950,((ulonglong)DAT_100c294c & 0x3fffffff) << 2);
      FUN_100914d0(iVar9);
      DAT_100c294c = DAT_100c294c << 1;
      puVar4 = (undefined4 *)(iVar7 + DAT_100c2940 * 4);
      DAT_100c2950 = iVar7;
    }
    else {
      if (DAT_100c2940 == 0) {
        DAT_100c2650 = 0;
        _DAT_100c2658 = 0;
        FUN_100914d0(0);
      }
      puVar4 = (undefined4 *)(DAT_100c2950 + DAT_100c2940 * 4);
    }
    *puVar4 = puVar6;
    DAT_100c2940 = DAT_100c2940 + 1;
    bVar5 = true;
  }
  *(bool *)(puVar6 + 0x54) = bVar5;
  if (bVar5) {
    FUN_1003d4a0(puVar3,&DAT_100b1a30,0);
    FUN_1003d4a0(puVar3,&DAT_100b1820,puVar6 + 1);
    uVar8 = 0;
    FUN_1003d4a0(puVar3,&DAT_100b1830,0);
    FUN_1003d4a0(puVar3,&DAT_100b1840,uVar8 & 0xffffffff);
    FUN_1003d4a0(puVar3,&DAT_100b1850,puVar6 + 2);
    FUN_1003d4a0(puVar3,&DAT_100b17e0,0);
  }
  *(undefined8 *)(puVar6 + 0x56) = 0;
  *(undefined8 *)(puVar6 + 0x58) = 0;
  *puVar6 = &PTR_FUN_100b246c;
  *puVar1 = &PTR_FUN_100b2418;
  *puVar2 = &PTR_FUN_100b23f4;
  puVar6[0x55] = &PTR_FUN_100b23f0;
  *(undefined8 *)(puVar6 + 0x5a) = 0;
  *(undefined8 *)(puVar6 + 0x5c) = 0;
  puVar6[0x5e] = 0;
  return puVar6;
}

