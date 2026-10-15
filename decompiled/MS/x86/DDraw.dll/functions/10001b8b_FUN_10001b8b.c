/*
 * FUN_10001b8b at 10001b8b
 * bool __stdcall FUN_10001b8b(void)
 * Address ranges: 10001b8b-10001cd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10001b8b(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int iVar6;
  
  if (DAT_1006c21c != (int *)0x0) {
    return true;
  }
  DAT_1006c210 = FUN_1005d3eb();
  if (DAT_1006c210 == (WNDPROC)0x0) {
    return false;
  }
  iVar6 = *(int *)(DAT_1006c210 + 0x764);
  if ((((iVar6 == 0) || (iVar6 == 3)) || (iVar6 == 5)) || (iVar6 == 6)) {
    DAT_1006c210[0x78a] = (code)0x1;
  }
  if ((iVar6 == 6) || (iVar6 == 5)) {
    bVar3 = false;
    if ((iVar6 != 6) && (iVar6 != 5)) goto LAB_10001bf2;
LAB_10001c07:
    bVar2 = false;
    DAT_1006c21c = FUN_100441a6(iVar6,(int)(DAT_1006c210 + 0x764));
    if (DAT_1006c21c != (int *)0x0) {
      iVar6 = *DAT_1006c21c;
      pcVar1 = DAT_1006c210 + 0x764;
      uVar5 = (**(code **)(*(int *)DAT_1006c210 + 0x30))(&DAT_10062340);
      cVar4 = (**(code **)(iVar6 + 4))(pcVar1,uVar5);
      if (cVar4 == '\0') {
        if (DAT_1006c21c != (int *)0x0) {
          (**(code **)*DAT_1006c21c)(1);
        }
        DAT_1006c21c = (int *)0x0;
      }
      else {
        bVar2 = true;
      }
      goto LAB_10001c69;
    }
  }
  else {
    bVar3 = true;
LAB_10001bf2:
    bVar2 = false;
    if ((iVar6 == 0) && (uVar5 = FUN_1005f590(), iVar6 = extraout_ECX, (char)uVar5 != '\0'))
    goto LAB_10001c07;
LAB_10001c69:
    if (DAT_1006c21c != (int *)0x0) goto LAB_10001cae;
  }
  if (((bVar3) &&
      (DAT_1006c21c = FUN_10043e90(DAT_1006c21c,DAT_1006c210 + 0x764), DAT_1006c21c != (int *)0x0))
     && (cVar4 = (**(code **)(*DAT_1006c21c + 4))(DAT_1006c210 + 0x764,0), cVar4 != '\0')) {
    return true;
  }
LAB_10001cae:
  if (!bVar2) {
    if (DAT_1006c21c != (int *)0x0) {
      (**(code **)*DAT_1006c21c)(1);
    }
    DAT_1006c21c = (int *)0x0;
    FUN_1005d470((undefined4 *)DAT_1006c210);
  }
  return bVar2;
}

