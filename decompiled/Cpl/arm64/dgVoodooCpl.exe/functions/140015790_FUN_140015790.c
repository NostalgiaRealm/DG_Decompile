/*
 * FUN_140015790 at 140015790
 * undefined __cdecl FUN_140015790(uint param_1, uint param_2, LPSTR param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140015790-14001582b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140015790(uint param_1,uint param_2,LPSTR param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char local_10 [16];
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1400157b0);
    (*pcVar3)();
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1 / param_2;
  }
  iVar4 = param_1 - uVar1 * param_2;
  iVar6 = 0;
  uVar5 = 0;
  if (iVar4 != 0) {
    do {
      if (5 < uVar5) break;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = (uint)(iVar4 * 10) / param_2;
      }
      iVar4 = iVar4 * 10 - uVar2 * param_2;
      iVar6 = uVar2 + iVar6 * 10;
      local_10[uVar5] = (char)uVar2 + '0';
      uVar5 = uVar5 + 1;
      local_10[uVar5] = '\0';
    } while (iVar4 != 0);
    if (iVar6 != 0) {
      FUN_140024880(param_3,"%d.%s",(ulonglong)uVar1,local_10,param_5,param_6,param_7,param_8);
      return;
    }
  }
  FUN_140024880(param_3,"%d",(ulonglong)uVar1,param_4,param_5,param_6,param_7,param_8);
  return;
}

