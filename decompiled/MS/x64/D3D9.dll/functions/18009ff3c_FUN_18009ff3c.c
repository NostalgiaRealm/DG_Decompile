/*
 * FUN_18009ff3c at 18009ff3c
 * bool __fastcall FUN_18009ff3c(longlong param_1)
 * Address ranges: 18009ff3c-1800a0196
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18009ff3c(longlong param_1)

{
  longlong *plVar1;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  
  FUN_1800ac794(param_1,(undefined8 *)&local_68);
  plVar1 = (longlong *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    FUN_18009a7d8(plVar1,*(uint *)(param_1 + 0x24),*(uint *)(param_1 + 0x28),
                  *(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),1,local_68,local_64,local_60,
                  0x1688,0x1688,0,0,'\0','\x01',0,'\0');
    FUN_18009a7d8((longlong *)(param_1 + 500),*(uint *)(param_1 + 0x24),*(uint *)(param_1 + 0x28),
                  *(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),1,local_68,local_64,local_60,
                  0x1688,0x1688,0,local_58,'\x01','\x01',0,'\0');
  }
  else {
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      FUN_18009a7d8(plVar1,*(uint *)(param_1 + 0x24),*(uint *)(param_1 + 0x28),
                    *(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),1,local_68,local_64,0,0x1688
                    ,0x1688,local_5c,0,'\0','\x01',0,'\0');
    }
    if (*(longlong *)(param_1 + 0x208) == 0) {
      FUN_18009a7d8((longlong *)(param_1 + 500),*(uint *)(param_1 + 0x24),*(uint *)(param_1 + 0x28),
                    *(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),1,local_68,local_64,0,0x1688
                    ,0x1688,local_5c,0,'\x01','\x01',0,'\0');
    }
  }
  if ((*(longlong *)(param_1 + 0x1b8) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) {
    FUN_18009ac8c((longlong)plVar1,1,1);
    FUN_18009ac8c(param_1 + 500,1,1);
  }
  return *(longlong *)(param_1 + 0x1b8) != 0;
}

