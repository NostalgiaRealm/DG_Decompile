/*
 * FUN_1001c518 at 1001c518
 * undefined FUN_1001c518(void)
 * Address ranges: 1001c518-1001c653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001c518(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  code *extraout_w11;
  uint uVar5;
  uint uVar6;
  char cVar7;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = 0xffffffff;
  cVar7 = '\0';
  switch(param_2) {
  case 0:
    uVar5 = 0;
    break;
  case 1:
    uVar5 = 1;
    break;
  case 2:
    uVar5 = 2;
    break;
  case 7:
    cVar7 = '\x01';
  case 6:
    iVar4 = 0x2a20;
    if (cVar7 != '\0') {
      iVar4 = 0x2a34;
    }
    piVar1 = (int *)(iVar4 + *(int *)(param_1 + 4));
    iVar4 = 0x2a24;
    if (cVar7 != '\0') {
      iVar4 = 0x2a38;
    }
    piVar2 = (int *)(iVar4 + *(int *)(param_1 + 4));
    if (*piVar2 != *piVar1) {
      uVar6 = 3;
      do {
        (*pcVar3)();
        iVar4 = (*extraout_w11)(param_1,uVar6);
        if (((*(int *)(iVar4 + 0x18) == *piVar1) && (*(int *)(iVar4 + 0x1c) == *piVar2)) &&
           (cVar7 == *(char *)(iVar4 + 0x48))) {
          return uVar6;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 7);
    }
  }
  return uVar5;
}

