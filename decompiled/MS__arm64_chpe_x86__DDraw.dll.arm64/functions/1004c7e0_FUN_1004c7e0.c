/*
 * FUN_1004c7e0 at 1004c7e0
 * undefined FUN_1004c7e0(void)
 * Address ranges: 1004c7e0-1004c8e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1004c7e0(int param_1,uint *param_2,uint param_3,uint param_4,int param_5,int *param_6,
                   uint param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar2 = param_6[1];
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    uVar8 = SoftwareBreakpoint(0xf004,0x1004c800);
    (*(code *)uVar8)();
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = (*param_6 * param_3) / uVar2;
  }
  iVar3 = param_6[2];
  *param_2 = uVar4;
  iVar7 = DAT_100be0c0;
  uVar2 = param_6[3];
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    uVar8 = SoftwareBreakpoint(0xf004,0x1004c824);
    (*(code *)uVar8)();
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = (iVar3 * param_4) / uVar2;
  }
  puVar1 = param_2 + 1;
  *puVar1 = uVar5;
  *(undefined1 *)(param_2 + 3) = 1;
  uVar2 = *(uint *)(iVar7 + 2000);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  param_2[2] = uVar2;
  if (param_5 == 2 || param_5 == 5) {
    if (uVar5 < uVar4) {
      *param_2 = uVar5;
    }
    else {
      *puVar1 = uVar4;
    }
  }
  if (((param_3 == 1) || ((param_3 - 1 & param_3) == 0)) &&
     ((param_4 == 1 || ((param_4 - 1 & param_4) == 0)))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((((param_7 & 1) == 0) && (*(char *)(iVar7 + 0x958) == '\0')) &&
     (((*(uint *)(param_1 + 0x1b8) >> 0xc & 1) != 0 || (bVar6)))) {
    *param_2 = param_3;
    *puVar1 = param_4;
    param_2[2] = 1;
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return param_2;
}

