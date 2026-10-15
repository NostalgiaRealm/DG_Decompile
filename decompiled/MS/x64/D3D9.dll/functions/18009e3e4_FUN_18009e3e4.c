/*
 * FUN_18009e3e4 at 18009e3e4
 * undefined8 __fastcall FUN_18009e3e4(longlong param_1)
 * Address ranges: 18009e3e4-18009e55c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18009e3e4(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char extraout_AL;
  char cVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  longlong lVar4;
  undefined7 extraout_var_02;
  undefined7 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_stack_ffffffffffffff44;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  
  *(undefined1 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    FUN_1800ac794(param_1,(undefined8 *)&local_48);
    uVar1 = *(uint *)(param_1 + 0x2c);
    uVar6 = 0x1688;
    uVar2 = *(undefined4 *)(&DAT_1800fe8f0 + (ulonglong)uVar1 * 4);
    if ((((uVar1 == 0x24) || (uVar1 == 0x25)) || (uVar1 == 0x28)) || (uVar1 == 0x29)) {
      uVar6 = 0x1249;
    }
    uVar7 = 1;
    FUN_18009a7d8((longlong *)(param_1 + 0x60),*(uint *)(param_1 + 0x24),*(uint *)(param_1 + 0x28),
                  *(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),1,local_48,local_44,local_40,
                  uVar2,uVar6,0,local_38,'\x01','\x01',0,'\0');
    *(char *)(param_1 + 400) = extraout_AL;
    uVar5 = extraout_var;
    if ((extraout_AL != '\0') && (*(int *)(param_1 + 0x34) != 1)) {
      cVar3 = FUN_18009aaec((longlong *)(param_1 + 0x140),*(longlong **)(param_1 + 0x74),local_44,0,
                            uVar2,CONCAT44(in_stack_ffffffffffffff44,uVar7),0,1);
      *(char *)(param_1 + 400) = cVar3;
      FUN_18009be24(param_1);
      uVar5 = extraout_var_00;
      if (*(char *)(param_1 + 400) == '\0') {
        FUN_18009ac8c(param_1 + 0x60,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
        uVar5 = extraout_var_01;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar4 = thunk_FUN_1800fbccc(0x400);
      *(longlong *)(param_1 + 0x10) = lVar4;
      uVar5 = 0;
      if (lVar4 == 0) goto LAB_18009e54b;
    }
    cVar3 = FUN_18009dcd0(param_1,'\x01','\0');
    *(char *)(param_1 + 400) = cVar3;
    uVar5 = extraout_var_02;
  }
LAB_18009e54b:
  return CONCAT71(uVar5,*(undefined1 *)(param_1 + 400));
}

