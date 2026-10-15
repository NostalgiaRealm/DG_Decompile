/*
 * FUN_18002dc48 at 18002dc48
 * bool __fastcall FUN_18002dc48(void)
 * Address ranges: 18002dc48-18002ddcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18002dc48(void)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (DAT_180111f18 != (longlong *)0x0) {
    return true;
  }
  bVar4 = false;
  DAT_180111f20 = FUN_1800f80a0();
  if (DAT_180111f20 == (WNDPROC)0x0) {
    return false;
  }
  uVar2 = *(uint *)(DAT_180111f20 + 0x800);
  uVar10 = (ulonglong)uVar2;
  if ((uVar2 == 0) || (uVar10 = (ulonglong)(uVar2 - 3), uVar2 - 3 == 0)) {
LAB_18002dc95:
    DAT_180111f20[0x826] = (code)0x1;
  }
  else {
    uVar9 = uVar2 - 5;
    uVar10 = (ulonglong)uVar9;
    if ((uVar9 == 0) || (uVar9 == 1)) goto LAB_18002dc95;
  }
  if (uVar2 - 5 < 2) {
    bVar5 = false;
    if ((uVar2 != 6) && (uVar2 != 5)) goto LAB_18002dcb6;
  }
  else {
    bVar5 = true;
LAB_18002dcb6:
    if ((uVar2 != 0) || (bVar6 = FUN_1800fa9a0(), !bVar6)) goto LAB_18002dd44;
  }
  DAT_180111f18 = FUN_1800d8920(uVar10,(longlong)(DAT_180111f20 + 0x800));
  if (DAT_180111f18 != (longlong *)0x0) {
    lVar3 = *DAT_180111f18;
    pcVar1 = DAT_180111f20 + 0x800;
    uVar8 = (**(code **)(*(longlong *)DAT_180111f20 + 0x60))(DAT_180111f20,&DAT_1800fd5a0);
    cVar7 = (**(code **)(lVar3 + 8))(DAT_180111f18,pcVar1,uVar8);
    if (cVar7 == '\0') {
      if (DAT_180111f18 != (longlong *)0x0) {
        (**(code **)*DAT_180111f18)(DAT_180111f18,1);
      }
      DAT_180111f18 = (longlong *)0x0;
    }
    else {
      bVar4 = true;
    }
  }
LAB_18002dd44:
  if ((((DAT_180111f18 == (longlong *)0x0) && (bVar5)) &&
      (DAT_180111f18 = FUN_1800d8554(0,(int *)(DAT_180111f20 + 0x800)),
      DAT_180111f18 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*DAT_180111f18 + 8))(DAT_180111f18,DAT_180111f20 + 0x800,0),
     cVar7 != '\0')) {
    bVar4 = true;
  }
  else if (!bVar4) {
    if (DAT_180111f18 != (longlong *)0x0) {
      (**(code **)*DAT_180111f18)(DAT_180111f18,1);
    }
    DAT_180111f18 = (longlong *)0x0;
    FUN_1800f8148((undefined8 *)DAT_180111f20);
  }
  return bVar4;
}

