/*
 * FUN_100419d0 at 100419d0
 * undefined FUN_100419d0(void)
 * Address ranges: 100419d0-10041b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100419d0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  DAT_100c2970 = 0;
  iVar2 = (*(code *)PTR_FUN_100ba08c)(&DAT_100c2970,0,FUN_100419b0,0,0x10,0x10,0x20);
  if (iVar2 != 0) {
joined_r0x10041a30:
    if (DAT_100c2968 == '\0') {
      if (DAT_100c296c == 0) goto LAB_10041a6c;
      pcVar1 = (code *)PTR_FUN_100ba144;
      uVar3 = 1;
      goto LAB_10041b00;
    }
    (*(code *)PTR_FUN_100ba098)(0,DAT_100c2970,0xffffffff);
    DAT_100c2970 = 0;
  }
  return 0;
LAB_10041a6c:
  iVar2 = (*(code *)PTR_FUN_100ba168)(DAT_100c2974,1000);
  if ((iVar2 == 0) && (iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958), iVar2 != 0)) {
    pcVar1 = (code *)PTR_FUN_100ba0f0;
    uVar3 = DAT_100c2958;
    if (DAT_100c2940 != 0) {
      uVar5 = 0;
      uVar4 = DAT_100c2940;
      do {
        iVar2 = *(int *)(*(int *)(DAT_100c2950 + uVar5 * 4) + 0xfc);
        if (iVar2 != 0) {
          (*(code *)PTR_FUN_100ba2a0)(iVar2,0x404,0x44454745,0);
          uVar4 = DAT_100c2940;
        }
        uVar5 = uVar5 + 1;
        pcVar1 = (code *)PTR_FUN_100ba0f0;
        uVar3 = DAT_100c2958;
      } while (uVar5 < uVar4);
    }
LAB_10041b00:
    (*pcVar1)(uVar3);
  }
  goto joined_r0x10041a30;
}

