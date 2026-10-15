/*
 * FUN_180209840 at 180209840
 * undefined FUN_180209840(void)
 * Address ranges: 180209840-18020994b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209840(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  code *extraout_x11;
  int iVar7;
  
  iVar7 = 0;
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      piVar2 = (int *)(param_3 + uVar6 * 0x18);
      lVar3 = param_1 + uVar6 * 0x18;
      if ((((*(int *)(lVar3 + 0x520) != *piVar2) || (*(int *)(lVar3 + 0x524) != piVar2[1])) ||
          (*(int *)(lVar3 + 0x528) != piVar2[2])) ||
         (((*(int *)(lVar3 + 0x52c) != piVar2[3] || (*(int *)(lVar3 + 0x530) != piVar2[4])) ||
          (*(int *)(lVar3 + 0x534) != piVar2[5])))) {
        uVar5 = *(undefined8 *)piVar2;
        puVar4 = (undefined8 *)(param_1 + 0x520 + uVar6 * 0x18);
        iVar7 = (int)uVar6 + 1;
        puVar4[1] = *(undefined8 *)(piVar2 + 2);
        *puVar4 = uVar5;
        puVar4[2] = *(undefined8 *)(piVar2 + 4);
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < param_2);
    if (iVar7 != 0) {
      FUN_180206ff8(param_1);
      uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar5,iVar7,param_3);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

