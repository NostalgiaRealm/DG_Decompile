/*
 * FUN_180001ffc at 180001ffc
 * ulonglong __fastcall FUN_180001ffc(longlong param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 180001ffc-1800020ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180001ffc(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar8 = 0x8876086a;
  if (param_2 == 2) {
    puVar7 = &DAT_18010e2a8;
    puVar9 = &DAT_18010e280;
    puVar6 = &DAT_18010e290;
  }
  else {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0;
    puVar7 = (undefined8 *)(&DAT_18010e458 + lVar4);
    puVar9 = (undefined8 *)(&DAT_18010e430 + lVar4);
    puVar6 = (undefined8 *)(&DAT_18010e440 + lVar4);
  }
  uVar3 = FUN_18000223c(param_3);
  pcVar2 = (char *)*puVar7;
  uVar5 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != -1) {
    if ((byte)pcVar2[uVar5] == uVar3) {
      uVar8 = 0x8876086c;
      uVar3 = FUN_18000223c(param_4);
      pcVar2 = (char *)*puVar9;
      uVar5 = 0;
      cVar1 = *pcVar2;
      goto joined_r0x00018000209c;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
    cVar1 = pcVar2[uVar5];
  }
LAB_1800020da:
  return uVar8 & 0xffffffff;
joined_r0x00018000209c:
  if (cVar1 == -1) goto LAB_1800020da;
  if ((byte)pcVar2[uVar5] == uVar3) {
    uVar3 = FUN_18000223c(param_5);
    pcVar2 = (char *)*puVar6;
    uVar5 = 0;
    cVar1 = *pcVar2;
    goto joined_r0x0001800020c2;
  }
  uVar5 = (ulonglong)((int)uVar5 + 1);
  cVar1 = pcVar2[uVar5];
  goto joined_r0x00018000209c;
joined_r0x0001800020c2:
  if (cVar1 == -1) goto LAB_1800020da;
  if ((byte)pcVar2[uVar5] == uVar3) {
    uVar8 = 0;
    goto LAB_1800020da;
  }
  uVar5 = (ulonglong)((int)uVar5 + 1);
  cVar1 = pcVar2[uVar5];
  goto joined_r0x0001800020c2;
}

