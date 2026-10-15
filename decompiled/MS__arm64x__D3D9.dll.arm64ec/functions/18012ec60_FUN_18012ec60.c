/*
 * FUN_18012ec60 at 18012ec60
 * undefined FUN_18012ec60(void)
 * Address ranges: 18012ec60-18012eda7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012ec60(longlong param_1)

{
  undefined *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  iVar6 = 0;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar3 = (*extraout_x11)();
  (*(code *)puVar1)(0x180224000);
  uVar4 = (*extraout_x11_00)(param_1);
  if ((lVar3 != 0) && ((&DAT_18024e840)[(uVar4 & 0xffffffff) * 0x4b] != 0)) {
    uVar5 = (*(code *)puVar1)(0x180225000);
    lVar3 = (*extraout_x11_01)(uVar5,lVar3,0,0,4,2,2,0,0,0);
    if (lVar3 == 0) {
      iVar6 = 1;
    }
    else {
      (*(code *)puVar1)(0x180224000);
      cVar2 = (*extraout_x11_02)();
      if (cVar2 != '\0') {
        (*(code *)puVar1)(0x180224000);
        cVar2 = (*extraout_x11_03)(lVar3);
        iVar6 = 1;
        if (cVar2 != '\0') {
          iVar6 = 2;
        }
      }
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_04)(lVar3);
    }
  }
  *(bool *)(param_1 + 0x43) = iVar6 != 0;
  return;
}

