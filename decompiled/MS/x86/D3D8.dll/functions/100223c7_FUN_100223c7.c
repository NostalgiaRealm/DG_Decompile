/*
 * FUN_100223c7 at 100223c7
 * bool __stdcall FUN_100223c7(void)
 * Address ranges: 100223c7-10022526
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100223c7(void)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  if (DAT_100ba2b0 != (int *)0x0) {
    return true;
  }
  DAT_100ba2b4 = FUN_100a9a56();
  if (DAT_100ba2b4 == (WNDPROC)0x0) {
    return false;
  }
  uVar8 = *(uint *)(DAT_100ba2b4 + 0x764);
  if ((((uVar8 == 0) || (uVar8 == 3)) || (uVar8 == 5)) || (uVar8 == 6)) {
    DAT_100ba2b4[0x78a] = (code)0x1;
  }
  if ((uVar8 == 6) || (uVar8 == 5)) {
    bVar4 = false;
    if ((uVar8 != 6) && (uVar8 != 5)) goto LAB_1002242c;
LAB_10022455:
    bVar3 = false;
    DAT_100ba2b0 = FUN_10090047(uVar8,(int)(DAT_100ba2b4 + 0x764));
    if (DAT_100ba2b0 != (int *)0x0) {
      iVar2 = *DAT_100ba2b0;
      pcVar1 = DAT_100ba2b4 + 0x764;
      uVar7 = (**(code **)(*(int *)DAT_100ba2b4 + 0x30))(&DAT_100af2f0);
      cVar5 = (**(code **)(iVar2 + 4))(pcVar1,uVar7);
      if (cVar5 == '\0') {
        if (DAT_100ba2b0 != (int *)0x0) {
          (**(code **)*DAT_100ba2b0)(1);
        }
        DAT_100ba2b0 = (int *)0x0;
      }
      else {
        bVar3 = true;
      }
      goto LAB_100224bb;
    }
  }
  else {
    bVar4 = true;
LAB_1002242c:
    bVar3 = false;
    if (uVar8 == 0) {
      uVar6 = FUN_100abb80();
      uVar8 = 0;
      if (DAT_100bf01a == -0x559c) {
        uVar8 = uVar6 & 0xff;
      }
      if ((char)uVar8 != '\0') goto LAB_10022455;
    }
LAB_100224bb:
    if (DAT_100ba2b0 != (int *)0x0) goto LAB_10022500;
  }
  if (((bVar4) &&
      (DAT_100ba2b0 = FUN_1008fd27(DAT_100ba2b0,DAT_100ba2b4 + 0x764), DAT_100ba2b0 != (int *)0x0))
     && (cVar5 = (**(code **)(*DAT_100ba2b0 + 4))(DAT_100ba2b4 + 0x764,0), cVar5 != '\0')) {
    return true;
  }
LAB_10022500:
  if (!bVar3) {
    if (DAT_100ba2b0 != (int *)0x0) {
      (**(code **)*DAT_100ba2b0)(1);
    }
    DAT_100ba2b0 = (int *)0x0;
    FUN_100a9adb((undefined4 *)DAT_100ba2b4);
  }
  return bVar3;
}

