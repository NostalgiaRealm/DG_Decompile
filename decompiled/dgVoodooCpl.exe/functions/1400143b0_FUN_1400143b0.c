/*
 * FUN_1400143b0 at 1400143b0
 * undefined __fastcall FUN_1400143b0(uint param_1, uint param_2, LPSTR param_3)
 * Address ranges: 1400143b0-140014430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400143b0(uint param_1,uint param_2,LPSTR param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  char local_18 [16];
  
  uVar4 = 1;
  if (param_2 != 0) {
    uVar4 = param_2;
  }
  uVar1 = (ulonglong)param_1 / (ulonglong)uVar4;
  uVar3 = (ulonglong)param_1 % (ulonglong)uVar4;
  iVar6 = 0;
  uVar5 = 0;
  if ((int)uVar3 != 0) {
    do {
      if (5 < (uint)uVar5) break;
      uVar3 = (ulonglong)(uint)((int)uVar3 * 10);
      uVar2 = uVar3 / uVar4;
      uVar3 = uVar3 % (ulonglong)uVar4;
      iVar6 = (int)uVar2 + iVar6 * 10;
      local_18[uVar5] = (char)uVar2 + '0';
      uVar5 = (ulonglong)((uint)uVar5 + 1);
      local_18[uVar5] = '\0';
    } while ((int)uVar3 != 0);
    if (iVar6 != 0) {
      FUN_140024290(param_3,"%d.%s",uVar1,local_18);
      return;
    }
  }
  FUN_140024290(param_3,"%d",uVar1,uVar5);
  return;
}

