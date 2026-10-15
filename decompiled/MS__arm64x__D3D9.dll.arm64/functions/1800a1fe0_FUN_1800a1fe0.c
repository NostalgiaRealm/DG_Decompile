/*
 * FUN_1800a1fe0 at 1800a1fe0
 * undefined FUN_1800a1fe0(void)
 * Address ranges: 1800a1fe0-1800a20cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1fe0(longlong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  char cVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_2 & 0xffffffff;
  uVar4 = param_3 & 0xffffffff;
  uVar3 = param_4 & 0xffffffff;
  pcVar2 = *(code **)(*param_1 + 0xa8);
  if ((param_5 & 1) == 0) {
    while (cVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,0), cVar1 == '\0') {
      pcVar2 = *(code **)(*param_1 + 0xa8);
      param_2 = uVar5;
      param_3 = uVar4;
      param_4 = uVar3;
    }
    do {
      cVar1 = (**(code **)(*param_1 + 0xa8))(param_1,uVar5,uVar4,uVar3,0);
    } while (cVar1 != '\0');
  }
  else {
    while (cVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,0), cVar1 != '\0') {
      pcVar2 = *(code **)(*param_1 + 0xa8);
      param_2 = uVar5;
      param_3 = uVar4;
      param_4 = uVar3;
    }
    do {
      cVar1 = (**(code **)(*param_1 + 0xa8))(param_1,uVar5,uVar4,uVar3,0);
    } while (cVar1 == '\0');
  }
  return;
}

