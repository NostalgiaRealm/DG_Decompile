/*
 * FUN_10029a5f at 10029a5f
 * bool __stdcall FUN_10029a5f(void)
 * Address ranges: 10029a5f-10029bbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10029a5f(void)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  if (DAT_100dea70 != (int *)0x0) {
    return true;
  }
  DAT_100dea74 = FUN_100cc325();
  if (DAT_100dea74 == (WNDPROC)0x0) {
    return false;
  }
  uVar8 = *(uint *)(DAT_100dea74 + 0x764);
  if ((((uVar8 == 0) || (uVar8 == 3)) || (uVar8 == 5)) || (uVar8 == 6)) {
    DAT_100dea74[0x78a] = (code)0x1;
  }
  if ((uVar8 == 6) || (uVar8 == 5)) {
    bVar4 = false;
    if ((uVar8 != 6) && (uVar8 != 5)) goto LAB_10029ac4;
LAB_10029aed:
    bVar3 = false;
    DAT_100dea70 = FUN_100b225d(uVar8,(int)(DAT_100dea74 + 0x764));
    if (DAT_100dea70 != (int *)0x0) {
      iVar2 = *DAT_100dea70;
      pcVar1 = DAT_100dea74 + 0x764;
      uVar7 = (**(code **)(*(int *)DAT_100dea74 + 0x30))(&DAT_100d12f0);
      cVar5 = (**(code **)(iVar2 + 4))(pcVar1,uVar7);
      if (cVar5 == '\0') {
        if (DAT_100dea70 != (int *)0x0) {
          (**(code **)*DAT_100dea70)(1);
        }
        DAT_100dea70 = (int *)0x0;
      }
      else {
        bVar3 = true;
      }
      goto LAB_10029b53;
    }
  }
  else {
    bVar4 = true;
LAB_10029ac4:
    bVar3 = false;
    if (uVar8 == 0) {
      uVar6 = FUN_100ce450();
      uVar8 = 0;
      if (DAT_100e3a3e == -0x559c) {
        uVar8 = uVar6 & 0xff;
      }
      if ((char)uVar8 != '\0') goto LAB_10029aed;
    }
LAB_10029b53:
    if (DAT_100dea70 != (int *)0x0) goto LAB_10029b98;
  }
  if (((bVar4) &&
      (DAT_100dea70 = FUN_100b1f3d(DAT_100dea70,DAT_100dea74 + 0x764), DAT_100dea70 != (int *)0x0))
     && (cVar5 = (**(code **)(*DAT_100dea70 + 4))(DAT_100dea74 + 0x764,0), cVar5 != '\0')) {
    return true;
  }
LAB_10029b98:
  if (!bVar3) {
    if (DAT_100dea70 != (int *)0x0) {
      (**(code **)*DAT_100dea70)(1);
    }
    DAT_100dea70 = (int *)0x0;
    FUN_100cc3aa((undefined4 *)DAT_100dea74);
  }
  return bVar3;
}

