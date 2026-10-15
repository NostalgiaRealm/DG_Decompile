/*
 * FUN_1800ae748 at 1800ae748
 * ulonglong __fastcall FUN_1800ae748(longlong param_1, uint param_2, int param_3, int param_4, undefined8 param_5, uint param_6, undefined4 * param_7)
 * Address ranges: 1800ae748-1800ae7f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ae748(longlong param_1,uint param_2,int param_3,int param_4,undefined8 param_5,
                       uint param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 in_stack_ffffffffffffffb8;
  
  uVar4 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) {
    lVar5 = param_1 + -0xa0;
    uVar1 = FUN_1800028ec(lVar5,param_3);
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_180003094(lVar5,param_2,param_3,param_4,in_stack_ffffffffffffffb8,param_6,0,1);
      uVar4 = uVar2 & 0xffffffff;
      if ((-1 < (int)uVar2) && (param_7 != (undefined4 *)0x0)) {
        if (param_6 == 1) {
          puVar3 = &DAT_1801123f0;
          if (param_3 != 2) {
            puVar3 = &DAT_1801123e0;
          }
          *param_7 = *(undefined4 *)(puVar3 + (ulonglong)param_2 * 5);
        }
        else {
          *param_7 = 1;
        }
      }
    }
  }
  return uVar4 & 0xffffffff;
}

