/*
 * FUN_18009bf6c at 18009bf6c
 * bool __fastcall FUN_18009bf6c(longlong param_1)
 * Address ranges: 18009bf6c-18009c072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18009bf6c(longlong param_1)

{
  longlong lVar1;
  int local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  
  if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
    if (*(longlong *)(param_1 + 0xd4) == 0) {
      *(undefined1 *)(param_1 + 0xfc) = 1;
      FUN_180099ff4(param_1 + 0xb0,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
      FUN_18009bea8(param_1);
    }
    lVar1 = *(longlong *)(param_1 + 0xd4);
  }
  else {
    if (*(longlong *)(param_1 + 0xc4) == 0) {
      FUN_1800ac794(param_1,(undefined8 *)&local_28);
      FUN_18009a7d8((longlong *)(param_1 + 0xb0),*(uint *)(param_1 + 0x24),*(uint *)(param_1 + 0x28)
                    ,*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),1,local_28,local_24,0,
                    0x1688,0x1688,local_1c,local_18,'\0','\0',0,'\0');
      FUN_18009bea8(param_1);
    }
    lVar1 = *(longlong *)(param_1 + 0xc4);
  }
  return lVar1 != 0;
}

