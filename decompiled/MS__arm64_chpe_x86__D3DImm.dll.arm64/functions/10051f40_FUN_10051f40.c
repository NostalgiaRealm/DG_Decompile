/*
 * FUN_10051f40 at 10051f40
 * undefined FUN_10051f40(void)
 * Address ranges: 10051f40-100520ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051f40(int param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar5;
  code *extraout_w11_01;
  char cVar6;
  undefined1 auVar7 [16];
  
  if (param_2 == 7) {
    if ((param_3 & 1) == 0) {
      cVar2 = *(char *)(param_4 + 0x1c);
      cVar1 = *(char *)(param_1 + 0x229);
      if ((cVar1 == '\0') || ((cVar2 != -1) != (bool)*(char *)(param_1 + 0x22a))) {
        if ((cVar2 == -1) &&
           ((*(int *)(param_1 + 0x4cc) == 0 && (uVar4 = FUN_10007080(param_1,1), (uVar4 & 1) != 0)))
           ) {
          cVar6 = '\x01';
        }
        else {
          cVar6 = '\0';
        }
        if ((cVar6 != *(char *)(param_1 + 0x22c)) || ((cVar6 != '\0' && (cVar1 == '\0')))) {
          if (cVar6 == '\0') {
            uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar4;
            pcVar5 = extraout_w11_00;
          }
          else {
            auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                               (*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x9cc) + 0x8c0);
            pcVar5 = extraout_w11;
          }
          (*pcVar5)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_);
          *(char *)(param_1 + 0x22c) = cVar6;
        }
        *(bool *)(param_1 + 0x22a) = cVar2 != -1;
      }
    }
  }
  else if (*(char *)(param_1 + 0x229) == '\0') {
    FUN_10007080(param_1,0);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x9cc) + 0x8c0);
    (*extraout_w11_01)(uVar3);
  }
  return;
}

